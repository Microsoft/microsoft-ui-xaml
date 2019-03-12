// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "SplitButton.h"

CppWinRTActivatableClassWithDPFactory(SplitButton)

GlobalDependencyProperty SplitButtonProperties::s_CommandProperty{ nullptr };
GlobalDependencyProperty SplitButtonProperties::s_CommandParameterProperty{ nullptr };
GlobalDependencyProperty SplitButtonProperties::s_FlyoutProperty{ nullptr };

SplitButtonProperties::SplitButtonProperties()
    : m_clickEventSource{static_cast<SplitButton*>(this)}
{
    EnsureProperties();
}

void SplitButtonProperties::EnsureProperties()
{
    if (!s_CommandProperty)
    {
        s_CommandProperty =
            InitializeDependencyProperty(
                L"Command",
                winrt::name_of<winrt::ICommand>(),
                winrt::name_of<winrt::SplitButton>(),
                false /* isAttached */,
                ValueHelper<winrt::ICommand>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnCommandPropertyChanged));
    }
    if (!s_CommandParameterProperty)
    {
        s_CommandParameterProperty =
            InitializeDependencyProperty(
                L"CommandParameter",
                winrt::name_of<winrt::IInspectable>(),
                winrt::name_of<winrt::SplitButton>(),
                false /* isAttached */,
                ValueHelper<winrt::IInspectable>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnCommandParameterPropertyChanged));
    }
    if (!s_FlyoutProperty)
    {
        s_FlyoutProperty =
            InitializeDependencyProperty(
                L"Flyout",
                winrt::name_of<winrt::FlyoutBase>(),
                winrt::name_of<winrt::SplitButton>(),
                false /* isAttached */,
                ValueHelper<winrt::FlyoutBase>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnFlyoutPropertyChanged));
    }
}

void SplitButtonProperties::ClearProperties()
{
    s_CommandProperty = nullptr;
    s_CommandParameterProperty = nullptr;
    s_FlyoutProperty = nullptr;
}

void SplitButtonProperties::OnCommandPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::SplitButton>();
    winrt::get_self<SplitButton>(owner)->OnPropertyChanged(args);
}
void SplitButtonProperties::OnCommandParameterPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::SplitButton>();
    winrt::get_self<SplitButton>(owner)->OnPropertyChanged(args);
}
void SplitButtonProperties::OnFlyoutPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::SplitButton>();
    winrt::get_self<SplitButton>(owner)->OnPropertyChanged(args);
}

void SplitButtonProperties::Command(winrt::ICommand const& value)
{
    static_cast<SplitButton*>(this)->SetValue(s_CommandProperty, ValueHelper<winrt::ICommand>::BoxValueIfNecessary(value));
}

winrt::ICommand SplitButtonProperties::Command()
{
    return ValueHelper<winrt::ICommand>::CastOrUnbox(static_cast<SplitButton*>(this)->GetValue(s_CommandProperty));
}

void SplitButtonProperties::CommandParameter(winrt::IInspectable const& value)
{
    static_cast<SplitButton*>(this)->SetValue(s_CommandParameterProperty, ValueHelper<winrt::IInspectable>::BoxValueIfNecessary(value));
}

winrt::IInspectable SplitButtonProperties::CommandParameter()
{
    return ValueHelper<winrt::IInspectable>::CastOrUnbox(static_cast<SplitButton*>(this)->GetValue(s_CommandParameterProperty));
}

void SplitButtonProperties::Flyout(winrt::FlyoutBase const& value)
{
    static_cast<SplitButton*>(this)->SetValue(s_FlyoutProperty, ValueHelper<winrt::FlyoutBase>::BoxValueIfNecessary(value));
}

winrt::FlyoutBase SplitButtonProperties::Flyout()
{
    return ValueHelper<winrt::FlyoutBase>::CastOrUnbox(static_cast<SplitButton*>(this)->GetValue(s_FlyoutProperty));
}

winrt::event_token SplitButtonProperties::Click(winrt::TypedEventHandler<winrt::SplitButton, winrt::SplitButtonClickEventArgs> const& value)
{
    return m_clickEventSource.add(value);
}

void SplitButtonProperties::Click(winrt::event_token const& token)
{
    m_clickEventSource.remove(token);
}
