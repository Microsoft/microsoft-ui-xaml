﻿#include "pch.h"
#include "NumberBoxParser.h"

// Pass by reference
MathToken::MathToken(TokenType t, std::wstring& s)
{
    this->type = t;
    this->str = s;
}

// Pass directly
MathToken::MathToken(TokenType t, std::wstring s)
{
    this->type = t;
    this->str = s;
}

MathTokenizer::MathTokenizer(std::wstring_view input)
{
    m_inputString = input;
    m_inputLength = static_cast<int>(m_inputString.size());
    m_lastToken = MathToken(MathToken::TokenType::EOFToken, L"");
}

MathToken MathTokenizer::GetToken(ExpressionType type)
{
    // Skip Whitespaces
    SkipWhiteSpace();

    if (m_index >= m_inputLength)
    {
        return MathToken(MathToken::TokenType::EOFToken, L"");
    }
 
    std::wstringstream ss;
    ss << m_inputString[m_index];

    // Check for a negative number. Next Token must be numeric and previous token must not be numeric.
    if (m_inputString[m_index] == '-')
    {

        // Negative numbers are already parsed and space separated in postfix expressions, must check for them seperately.
        if (type == ExpressionType::Postfix)
        {
            if (m_inputString[m_index + 1] != ' ')
            {
                // Parse as a negative number
                m_index++;
                ss << m_inputString[m_index];
            }
        }
        else if (PeekNextToken(ExpressionType::Infix).type == MathToken::TokenType::Numeric && m_lastToken.type == MathToken::TokenType::Operator)
        {
            // Read next token so that the string is parsed as a numeric token.
            m_index++;
            SkipWhiteSpace();
            ss << m_inputString[m_index];
        }
    }

    // Return token that is +,-,*,^,/
    if (IsOperator(ss.str()))
    {
        m_index++;
        m_lastToken = MathToken(MathToken::TokenType::Operator, ss.str());
    }
    // Return parenth token
    else if (m_inputString[m_index] == '(')
    {
        m_index++;
        m_lastToken = MathToken(MathToken::TokenType::ParenLeft, ss.str());;
    }
    else if (m_inputString[m_index] == ')')
    {
        m_index++;
        m_lastToken = MathToken(MathToken::TokenType::ParenRight, ss.str());
    }
    // Numeric Tokens
    else if (IsNumeric(std::wstring_view(ss.str())))
    {
        // Keep Reading until all of number is parsed
        while (IsNumeric(std::wstring_view(ss.str())) && m_index < m_inputLength)
        {
            ss << m_inputString[++m_index];
        }
        m_lastToken = MathToken(MathToken::TokenType::Numeric, ss.str().substr(0, ss.str().size() - 1));
    }
    else
    {
        m_index++;
        m_lastToken = MathToken(MathToken::TokenType::Invalid, ss.str());
    }
    return m_lastToken;

}

// Peek at the next token that will be returned. Used for negative checks.
MathToken MathTokenizer::PeekNextToken(ExpressionType type)
{
    // Save statics that need to be restored
    MathToken oldLastToken = m_lastToken;
    int oldIndex = m_index++;
    MathToken nextToken = GetToken(type);
    // Restore statics
    m_index = oldIndex;
    m_lastToken = oldLastToken;
    return nextToken;
}

void MathTokenizer::SkipWhiteSpace()
{
    while (m_inputString[m_index] == ' ' && m_index <= m_inputLength)
    {
        m_index++;
    }
}

bool MathTokenizer::IsNumeric(std::wstring_view in)
{
    std::wregex r(L"^-?(\\d?)+(\\.)?(\\d?)+?$");
    return (std::regex_match(in.data(), r));
}

bool MathTokenizer::IsOperator(std::wstring_view in)
{
    if (in.size() > 1)
        return false;
    wchar_t op = in.data()[0];
    switch (op)
    {
    case '-':
    case '+':
    case '*':
    case '/':
    case '^':
        return true;
    default:
        return false;
    } 
}

// Determines the mathematical precedence of an operator
NumberBoxParser::OperatorPrecedence NumberBoxParser::CmpPrecedence(wchar_t op1, wchar_t op2)
{
    const std::wstring_view ops = L"-+/*^";
    int op1prec = (int) ops.find(op1) / 2;
    int op2prec = (int) ops.find(op2) / 2;
    if (op1prec == std::wstring::npos || op2prec == std::wstring::npos)
    {
        return OperatorPrecedence::Error;
    }
    if (op1prec > op2prec)
    {
        return OperatorPrecedence::Higher;
    }
    else if (op2prec > op1prec)
    {
        return OperatorPrecedence::Lower;
    }
    else
    {
        return OperatorPrecedence::Equal;
    }
}

// Converts an infix mathematical expression into a postfix one, whitespace separation.
std::wstring NumberBoxParser::ConvertInfixToPostFix(const std::wstring& infix)
{
    const std::wstring ops = L"-+/*^";

    std::wstringstream out;
    std::stack<wchar_t> opstack;
    MathTokenizer input(infix);

    MathToken token; 
    while ((token = input.GetToken(MathTokenizer::ExpressionType::Infix)).type != MathToken::TokenType::EOFToken)
    {
        // Numeric Tokens push directly to output queue
        if (token.type == MathToken::TokenType::Numeric)
        {
            out << token.str << ' ';
        }
        // Operator Token
        else if (token.type == MathToken::TokenType::Operator)
        {
            while (!opstack.empty())
            {
                OperatorPrecedence prec = CmpPrecedence(opstack.top(), token.str[0]);
                // operator at top of opstack with greater precendence or equal precedence and left associative should be popped
                if ( (prec == OperatorPrecedence::Higher || (prec == OperatorPrecedence::Equal && opstack.top() != '^')) && opstack.top() != '(' )
                {
                    out << opstack.top() << ' ';
                    opstack.pop();
                }
                else {
                    break;
                }
            }
            opstack.push(token.str[0]);
        }
        // Left paren goes to operator stack
        else if (token.type == MathToken::TokenType::ParenLeft)
        {
            opstack.push('(');
        }
        // Right Paren - Pop operators 
        else if (token.type == MathToken::TokenType::ParenRight)
        {
            while ( !opstack.empty() && opstack.top() != '(')
            {
                // Pop non leftParen operators onto output
                out << opstack.top() << ' ';
                opstack.pop();
            }
            // Broken Parentheses. Don't Resolve
            if (opstack.empty())
                return L"Malformed";
            // Pop LeftParen and discard
            opstack.pop();
        }
    }

    // Pop everything to output queue
    while (!opstack.empty())
    {
        if (opstack.top() == '(' || opstack.top() == ')')
        {
            return L"Malformed";
        }
        out << opstack.top() << ' ';
        opstack.pop();
    }

    return out.str();
}

// Evaluates a postfix expression
std::optional<double> NumberBoxParser::ComputeRpn(const std::wstring& expr)
{
    if (expr == L"Malformed")
    {
        return {};
    }
    std::stack<double> stack;
    MathTokenizer input(expr);
    MathToken token;
    while ((token = input.GetToken(MathTokenizer::ExpressionType::Postfix)).type != MathToken::TokenType::EOFToken)
    {
        if (token.type == MathToken::TokenType::Operator)
        {
            if (stack.empty())
                return {};
            double op1 = stack.top();
            stack.pop();

            if (stack.empty())
                return {};
            double op2 = stack.top();
            stack.pop();

            double res = 0;

            switch (token.str[0])
            {
                case '-':
                    res = op2 - op1;
                    break;
                case '+':
                    res = op1 + op2;
                    break;
                case '*':
                    res = op1 * op2;
                    break;
                case '/':
                    if (op1 == 0)
                    {
                        return NAN;
                    }
                    res = op2 / op1;
                    break;
                case '^':
                    res = std::pow(op2, op1);
                    break;
                default: //uh-oh
                    return {};
            }
            stack.push(res);
        }
        else if (token.type == MathToken::TokenType::Numeric) {
            // Convert to double and push to stack
            std::wstringstream wss(token.str);
            double parsed;
            wss >> parsed;
            stack.push(parsed);
        }
    }
    return stack.top();
}

std::optional<double> NumberBoxParser::Compute(const std::wstring_view expr)
{
    std::wstring_view InputAsString = std::wstring_view(expr);
    return ComputeRpn(ConvertInfixToPostFix(InputAsString.data()));
}


