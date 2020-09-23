// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "PagerControl.h"

namespace winrt::Microsoft::UI::Xaml::Controls
{
    CppWinRTActivatableClassWithDPFactory(PagerControl)
}

#include "PagerControl.g.cpp"

GlobalDependencyProperty PagerControlProperties::s_ButtonPanelAlwaysShowFirstLastPageIndexProperty{ nullptr };
GlobalDependencyProperty PagerControlProperties::s_DisplayModeProperty{ nullptr };
GlobalDependencyProperty PagerControlProperties::s_FirstButtonCommandProperty{ nullptr };
GlobalDependencyProperty PagerControlProperties::s_FirstButtonStyleProperty{ nullptr };
GlobalDependencyProperty PagerControlProperties::s_FirstButtonVisibilityProperty{ nullptr };
GlobalDependencyProperty PagerControlProperties::s_LastButtonCommandProperty{ nullptr };
GlobalDependencyProperty PagerControlProperties::s_LastButtonStyleProperty{ nullptr };
GlobalDependencyProperty PagerControlProperties::s_LastButtonVisibilityProperty{ nullptr };
GlobalDependencyProperty PagerControlProperties::s_NextButtonCommandProperty{ nullptr };
GlobalDependencyProperty PagerControlProperties::s_NextButtonStyleProperty{ nullptr };
GlobalDependencyProperty PagerControlProperties::s_NextButtonVisibilityProperty{ nullptr };
GlobalDependencyProperty PagerControlProperties::s_NumberOfPagesProperty{ nullptr };
GlobalDependencyProperty PagerControlProperties::s_PagerInputCommandProperty{ nullptr };
GlobalDependencyProperty PagerControlProperties::s_PrefixTextProperty{ nullptr };
GlobalDependencyProperty PagerControlProperties::s_PreviousButtonCommandProperty{ nullptr };
GlobalDependencyProperty PagerControlProperties::s_PreviousButtonStyleProperty{ nullptr };
GlobalDependencyProperty PagerControlProperties::s_PreviousButtonVisibilityProperty{ nullptr };
GlobalDependencyProperty PagerControlProperties::s_SelectedPageIndexProperty{ nullptr };
GlobalDependencyProperty PagerControlProperties::s_SuffixTextProperty{ nullptr };
GlobalDependencyProperty PagerControlProperties::s_TemplateSettingsProperty{ nullptr };

PagerControlProperties::PagerControlProperties()
    : m_selectedIndexChangedEventSource{static_cast<PagerControl*>(this)}
{
    EnsureProperties();
}

void PagerControlProperties::EnsureProperties()
{
    if (!s_ButtonPanelAlwaysShowFirstLastPageIndexProperty)
    {
        s_ButtonPanelAlwaysShowFirstLastPageIndexProperty =
            InitializeDependencyProperty(
                L"ButtonPanelAlwaysShowFirstLastPageIndex",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::PagerControl>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(true),
                winrt::PropertyChangedCallback(&OnButtonPanelAlwaysShowFirstLastPageIndexPropertyChanged));
    }
    if (!s_DisplayModeProperty)
    {
        s_DisplayModeProperty =
            InitializeDependencyProperty(
                L"DisplayMode",
                winrt::name_of<winrt::PagerControlDisplayMode>(),
                winrt::name_of<winrt::PagerControl>(),
                false /* isAttached */,
                ValueHelper<winrt::PagerControlDisplayMode>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnDisplayModePropertyChanged));
    }
    if (!s_FirstButtonCommandProperty)
    {
        s_FirstButtonCommandProperty =
            InitializeDependencyProperty(
                L"FirstButtonCommand",
                winrt::name_of<winrt::ICommand>(),
                winrt::name_of<winrt::PagerControl>(),
                false /* isAttached */,
                ValueHelper<winrt::ICommand>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnFirstButtonCommandPropertyChanged));
    }
    if (!s_FirstButtonStyleProperty)
    {
        s_FirstButtonStyleProperty =
            InitializeDependencyProperty(
                L"FirstButtonStyle",
                winrt::name_of<winrt::Style>(),
                winrt::name_of<winrt::PagerControl>(),
                false /* isAttached */,
                ValueHelper<winrt::Style>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnFirstButtonStylePropertyChanged));
    }
    if (!s_FirstButtonVisibilityProperty)
    {
        s_FirstButtonVisibilityProperty =
            InitializeDependencyProperty(
                L"FirstButtonVisibility",
                winrt::name_of<winrt::PagerControlButtonVisibility>(),
                winrt::name_of<winrt::PagerControl>(),
                false /* isAttached */,
                ValueHelper<winrt::PagerControlButtonVisibility>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnFirstButtonVisibilityPropertyChanged));
    }
    if (!s_LastButtonCommandProperty)
    {
        s_LastButtonCommandProperty =
            InitializeDependencyProperty(
                L"LastButtonCommand",
                winrt::name_of<winrt::ICommand>(),
                winrt::name_of<winrt::PagerControl>(),
                false /* isAttached */,
                ValueHelper<winrt::ICommand>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnLastButtonCommandPropertyChanged));
    }
    if (!s_LastButtonStyleProperty)
    {
        s_LastButtonStyleProperty =
            InitializeDependencyProperty(
                L"LastButtonStyle",
                winrt::name_of<winrt::Style>(),
                winrt::name_of<winrt::PagerControl>(),
                false /* isAttached */,
                ValueHelper<winrt::Style>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnLastButtonStylePropertyChanged));
    }
    if (!s_LastButtonVisibilityProperty)
    {
        s_LastButtonVisibilityProperty =
            InitializeDependencyProperty(
                L"LastButtonVisibility",
                winrt::name_of<winrt::PagerControlButtonVisibility>(),
                winrt::name_of<winrt::PagerControl>(),
                false /* isAttached */,
                ValueHelper<winrt::PagerControlButtonVisibility>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnLastButtonVisibilityPropertyChanged));
    }
    if (!s_NextButtonCommandProperty)
    {
        s_NextButtonCommandProperty =
            InitializeDependencyProperty(
                L"NextButtonCommand",
                winrt::name_of<winrt::ICommand>(),
                winrt::name_of<winrt::PagerControl>(),
                false /* isAttached */,
                ValueHelper<winrt::ICommand>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnNextButtonCommandPropertyChanged));
    }
    if (!s_NextButtonStyleProperty)
    {
        s_NextButtonStyleProperty =
            InitializeDependencyProperty(
                L"NextButtonStyle",
                winrt::name_of<winrt::Style>(),
                winrt::name_of<winrt::PagerControl>(),
                false /* isAttached */,
                ValueHelper<winrt::Style>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnNextButtonStylePropertyChanged));
    }
    if (!s_NextButtonVisibilityProperty)
    {
        s_NextButtonVisibilityProperty =
            InitializeDependencyProperty(
                L"NextButtonVisibility",
                winrt::name_of<winrt::PagerControlButtonVisibility>(),
                winrt::name_of<winrt::PagerControl>(),
                false /* isAttached */,
                ValueHelper<winrt::PagerControlButtonVisibility>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnNextButtonVisibilityPropertyChanged));
    }
    if (!s_NumberOfPagesProperty)
    {
        s_NumberOfPagesProperty =
            InitializeDependencyProperty(
                L"NumberOfPages",
                winrt::name_of<int>(),
                winrt::name_of<winrt::PagerControl>(),
                false /* isAttached */,
                ValueHelper<int>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnNumberOfPagesPropertyChanged));
    }
    if (!s_PagerInputCommandProperty)
    {
        s_PagerInputCommandProperty =
            InitializeDependencyProperty(
                L"PagerInputCommand",
                winrt::name_of<winrt::ICommand>(),
                winrt::name_of<winrt::PagerControl>(),
                false /* isAttached */,
                ValueHelper<winrt::ICommand>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPagerInputCommandPropertyChanged));
    }
    if (!s_PrefixTextProperty)
    {
        s_PrefixTextProperty =
            InitializeDependencyProperty(
                L"PrefixText",
                winrt::name_of<winrt::hstring>(),
                winrt::name_of<winrt::PagerControl>(),
                false /* isAttached */,
                ValueHelper<winrt::hstring>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPrefixTextPropertyChanged));
    }
    if (!s_PreviousButtonCommandProperty)
    {
        s_PreviousButtonCommandProperty =
            InitializeDependencyProperty(
                L"PreviousButtonCommand",
                winrt::name_of<winrt::ICommand>(),
                winrt::name_of<winrt::PagerControl>(),
                false /* isAttached */,
                ValueHelper<winrt::ICommand>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPreviousButtonCommandPropertyChanged));
    }
    if (!s_PreviousButtonStyleProperty)
    {
        s_PreviousButtonStyleProperty =
            InitializeDependencyProperty(
                L"PreviousButtonStyle",
                winrt::name_of<winrt::Style>(),
                winrt::name_of<winrt::PagerControl>(),
                false /* isAttached */,
                ValueHelper<winrt::Style>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPreviousButtonStylePropertyChanged));
    }
    if (!s_PreviousButtonVisibilityProperty)
    {
        s_PreviousButtonVisibilityProperty =
            InitializeDependencyProperty(
                L"PreviousButtonVisibility",
                winrt::name_of<winrt::PagerControlButtonVisibility>(),
                winrt::name_of<winrt::PagerControl>(),
                false /* isAttached */,
                ValueHelper<winrt::PagerControlButtonVisibility>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPreviousButtonVisibilityPropertyChanged));
    }
    if (!s_SelectedPageIndexProperty)
    {
        s_SelectedPageIndexProperty =
            InitializeDependencyProperty(
                L"SelectedPageIndex",
                winrt::name_of<int>(),
                winrt::name_of<winrt::PagerControl>(),
                false /* isAttached */,
                ValueHelper<int>::BoxValueIfNecessary(0),
                winrt::PropertyChangedCallback(&OnSelectedPageIndexPropertyChanged));
    }
    if (!s_SuffixTextProperty)
    {
        s_SuffixTextProperty =
            InitializeDependencyProperty(
                L"SuffixText",
                winrt::name_of<winrt::hstring>(),
                winrt::name_of<winrt::PagerControl>(),
                false /* isAttached */,
                ValueHelper<winrt::hstring>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnSuffixTextPropertyChanged));
    }
    if (!s_TemplateSettingsProperty)
    {
        s_TemplateSettingsProperty =
            InitializeDependencyProperty(
                L"TemplateSettings",
                winrt::name_of<winrt::PagerControlTemplateSettings>(),
                winrt::name_of<winrt::PagerControl>(),
                false /* isAttached */,
                ValueHelper<winrt::PagerControlTemplateSettings>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnTemplateSettingsPropertyChanged));
    }
}

void PagerControlProperties::ClearProperties()
{
    s_ButtonPanelAlwaysShowFirstLastPageIndexProperty = nullptr;
    s_DisplayModeProperty = nullptr;
    s_FirstButtonCommandProperty = nullptr;
    s_FirstButtonStyleProperty = nullptr;
    s_FirstButtonVisibilityProperty = nullptr;
    s_LastButtonCommandProperty = nullptr;
    s_LastButtonStyleProperty = nullptr;
    s_LastButtonVisibilityProperty = nullptr;
    s_NextButtonCommandProperty = nullptr;
    s_NextButtonStyleProperty = nullptr;
    s_NextButtonVisibilityProperty = nullptr;
    s_NumberOfPagesProperty = nullptr;
    s_PagerInputCommandProperty = nullptr;
    s_PrefixTextProperty = nullptr;
    s_PreviousButtonCommandProperty = nullptr;
    s_PreviousButtonStyleProperty = nullptr;
    s_PreviousButtonVisibilityProperty = nullptr;
    s_SelectedPageIndexProperty = nullptr;
    s_SuffixTextProperty = nullptr;
    s_TemplateSettingsProperty = nullptr;
}

void PagerControlProperties::OnButtonPanelAlwaysShowFirstLastPageIndexPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PagerControl>();
    winrt::get_self<PagerControl>(owner)->OnPropertyChanged(args);
}

void PagerControlProperties::OnDisplayModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PagerControl>();
    winrt::get_self<PagerControl>(owner)->OnPropertyChanged(args);
}

void PagerControlProperties::OnFirstButtonCommandPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PagerControl>();
    winrt::get_self<PagerControl>(owner)->OnPropertyChanged(args);
}

void PagerControlProperties::OnFirstButtonStylePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PagerControl>();
    winrt::get_self<PagerControl>(owner)->OnPropertyChanged(args);
}

void PagerControlProperties::OnFirstButtonVisibilityPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PagerControl>();
    winrt::get_self<PagerControl>(owner)->OnPropertyChanged(args);
}

void PagerControlProperties::OnLastButtonCommandPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PagerControl>();
    winrt::get_self<PagerControl>(owner)->OnPropertyChanged(args);
}

void PagerControlProperties::OnLastButtonStylePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PagerControl>();
    winrt::get_self<PagerControl>(owner)->OnPropertyChanged(args);
}

void PagerControlProperties::OnLastButtonVisibilityPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PagerControl>();
    winrt::get_self<PagerControl>(owner)->OnPropertyChanged(args);
}

void PagerControlProperties::OnNextButtonCommandPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PagerControl>();
    winrt::get_self<PagerControl>(owner)->OnPropertyChanged(args);
}

void PagerControlProperties::OnNextButtonStylePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PagerControl>();
    winrt::get_self<PagerControl>(owner)->OnPropertyChanged(args);
}

void PagerControlProperties::OnNextButtonVisibilityPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PagerControl>();
    winrt::get_self<PagerControl>(owner)->OnPropertyChanged(args);
}

void PagerControlProperties::OnNumberOfPagesPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PagerControl>();
    winrt::get_self<PagerControl>(owner)->OnPropertyChanged(args);
}

void PagerControlProperties::OnPagerInputCommandPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PagerControl>();
    winrt::get_self<PagerControl>(owner)->OnPropertyChanged(args);
}

void PagerControlProperties::OnPrefixTextPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PagerControl>();
    winrt::get_self<PagerControl>(owner)->OnPropertyChanged(args);
}

void PagerControlProperties::OnPreviousButtonCommandPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PagerControl>();
    winrt::get_self<PagerControl>(owner)->OnPropertyChanged(args);
}

void PagerControlProperties::OnPreviousButtonStylePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PagerControl>();
    winrt::get_self<PagerControl>(owner)->OnPropertyChanged(args);
}

void PagerControlProperties::OnPreviousButtonVisibilityPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PagerControl>();
    winrt::get_self<PagerControl>(owner)->OnPropertyChanged(args);
}

void PagerControlProperties::OnSelectedPageIndexPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PagerControl>();
    winrt::get_self<PagerControl>(owner)->OnPropertyChanged(args);
}

void PagerControlProperties::OnSuffixTextPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PagerControl>();
    winrt::get_self<PagerControl>(owner)->OnPropertyChanged(args);
}

void PagerControlProperties::OnTemplateSettingsPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PagerControl>();
    winrt::get_self<PagerControl>(owner)->OnPropertyChanged(args);
}

void PagerControlProperties::ButtonPanelAlwaysShowFirstLastPageIndex(bool value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PagerControl*>(this)->SetValue(s_ButtonPanelAlwaysShowFirstLastPageIndexProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
    }
}

bool PagerControlProperties::ButtonPanelAlwaysShowFirstLastPageIndex()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<PagerControl*>(this)->GetValue(s_ButtonPanelAlwaysShowFirstLastPageIndexProperty));
}

void PagerControlProperties::DisplayMode(winrt::PagerControlDisplayMode const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PagerControl*>(this)->SetValue(s_DisplayModeProperty, ValueHelper<winrt::PagerControlDisplayMode>::BoxValueIfNecessary(value));
    }
}

winrt::PagerControlDisplayMode PagerControlProperties::DisplayMode()
{
    return ValueHelper<winrt::PagerControlDisplayMode>::CastOrUnbox(static_cast<PagerControl*>(this)->GetValue(s_DisplayModeProperty));
}

void PagerControlProperties::FirstButtonCommand(winrt::ICommand const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PagerControl*>(this)->SetValue(s_FirstButtonCommandProperty, ValueHelper<winrt::ICommand>::BoxValueIfNecessary(value));
    }
}

winrt::ICommand PagerControlProperties::FirstButtonCommand()
{
    return ValueHelper<winrt::ICommand>::CastOrUnbox(static_cast<PagerControl*>(this)->GetValue(s_FirstButtonCommandProperty));
}

void PagerControlProperties::FirstButtonStyle(winrt::Style const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PagerControl*>(this)->SetValue(s_FirstButtonStyleProperty, ValueHelper<winrt::Style>::BoxValueIfNecessary(value));
    }
}

winrt::Style PagerControlProperties::FirstButtonStyle()
{
    return ValueHelper<winrt::Style>::CastOrUnbox(static_cast<PagerControl*>(this)->GetValue(s_FirstButtonStyleProperty));
}

void PagerControlProperties::FirstButtonVisibility(winrt::PagerControlButtonVisibility const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PagerControl*>(this)->SetValue(s_FirstButtonVisibilityProperty, ValueHelper<winrt::PagerControlButtonVisibility>::BoxValueIfNecessary(value));
    }
}

winrt::PagerControlButtonVisibility PagerControlProperties::FirstButtonVisibility()
{
    return ValueHelper<winrt::PagerControlButtonVisibility>::CastOrUnbox(static_cast<PagerControl*>(this)->GetValue(s_FirstButtonVisibilityProperty));
}

void PagerControlProperties::LastButtonCommand(winrt::ICommand const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PagerControl*>(this)->SetValue(s_LastButtonCommandProperty, ValueHelper<winrt::ICommand>::BoxValueIfNecessary(value));
    }
}

winrt::ICommand PagerControlProperties::LastButtonCommand()
{
    return ValueHelper<winrt::ICommand>::CastOrUnbox(static_cast<PagerControl*>(this)->GetValue(s_LastButtonCommandProperty));
}

void PagerControlProperties::LastButtonStyle(winrt::Style const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PagerControl*>(this)->SetValue(s_LastButtonStyleProperty, ValueHelper<winrt::Style>::BoxValueIfNecessary(value));
    }
}

winrt::Style PagerControlProperties::LastButtonStyle()
{
    return ValueHelper<winrt::Style>::CastOrUnbox(static_cast<PagerControl*>(this)->GetValue(s_LastButtonStyleProperty));
}

void PagerControlProperties::LastButtonVisibility(winrt::PagerControlButtonVisibility const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PagerControl*>(this)->SetValue(s_LastButtonVisibilityProperty, ValueHelper<winrt::PagerControlButtonVisibility>::BoxValueIfNecessary(value));
    }
}

winrt::PagerControlButtonVisibility PagerControlProperties::LastButtonVisibility()
{
    return ValueHelper<winrt::PagerControlButtonVisibility>::CastOrUnbox(static_cast<PagerControl*>(this)->GetValue(s_LastButtonVisibilityProperty));
}

void PagerControlProperties::NextButtonCommand(winrt::ICommand const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PagerControl*>(this)->SetValue(s_NextButtonCommandProperty, ValueHelper<winrt::ICommand>::BoxValueIfNecessary(value));
    }
}

winrt::ICommand PagerControlProperties::NextButtonCommand()
{
    return ValueHelper<winrt::ICommand>::CastOrUnbox(static_cast<PagerControl*>(this)->GetValue(s_NextButtonCommandProperty));
}

void PagerControlProperties::NextButtonStyle(winrt::Style const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PagerControl*>(this)->SetValue(s_NextButtonStyleProperty, ValueHelper<winrt::Style>::BoxValueIfNecessary(value));
    }
}

winrt::Style PagerControlProperties::NextButtonStyle()
{
    return ValueHelper<winrt::Style>::CastOrUnbox(static_cast<PagerControl*>(this)->GetValue(s_NextButtonStyleProperty));
}

void PagerControlProperties::NextButtonVisibility(winrt::PagerControlButtonVisibility const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PagerControl*>(this)->SetValue(s_NextButtonVisibilityProperty, ValueHelper<winrt::PagerControlButtonVisibility>::BoxValueIfNecessary(value));
    }
}

winrt::PagerControlButtonVisibility PagerControlProperties::NextButtonVisibility()
{
    return ValueHelper<winrt::PagerControlButtonVisibility>::CastOrUnbox(static_cast<PagerControl*>(this)->GetValue(s_NextButtonVisibilityProperty));
}

void PagerControlProperties::NumberOfPages(int value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PagerControl*>(this)->SetValue(s_NumberOfPagesProperty, ValueHelper<int>::BoxValueIfNecessary(value));
    }
}

int PagerControlProperties::NumberOfPages()
{
    return ValueHelper<int>::CastOrUnbox(static_cast<PagerControl*>(this)->GetValue(s_NumberOfPagesProperty));
}

void PagerControlProperties::PagerInputCommand(winrt::ICommand const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PagerControl*>(this)->SetValue(s_PagerInputCommandProperty, ValueHelper<winrt::ICommand>::BoxValueIfNecessary(value));
    }
}

winrt::ICommand PagerControlProperties::PagerInputCommand()
{
    return ValueHelper<winrt::ICommand>::CastOrUnbox(static_cast<PagerControl*>(this)->GetValue(s_PagerInputCommandProperty));
}

void PagerControlProperties::PrefixText(winrt::hstring const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PagerControl*>(this)->SetValue(s_PrefixTextProperty, ValueHelper<winrt::hstring>::BoxValueIfNecessary(value));
    }
}

winrt::hstring PagerControlProperties::PrefixText()
{
    return ValueHelper<winrt::hstring>::CastOrUnbox(static_cast<PagerControl*>(this)->GetValue(s_PrefixTextProperty));
}

void PagerControlProperties::PreviousButtonCommand(winrt::ICommand const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PagerControl*>(this)->SetValue(s_PreviousButtonCommandProperty, ValueHelper<winrt::ICommand>::BoxValueIfNecessary(value));
    }
}

winrt::ICommand PagerControlProperties::PreviousButtonCommand()
{
    return ValueHelper<winrt::ICommand>::CastOrUnbox(static_cast<PagerControl*>(this)->GetValue(s_PreviousButtonCommandProperty));
}

void PagerControlProperties::PreviousButtonStyle(winrt::Style const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PagerControl*>(this)->SetValue(s_PreviousButtonStyleProperty, ValueHelper<winrt::Style>::BoxValueIfNecessary(value));
    }
}

winrt::Style PagerControlProperties::PreviousButtonStyle()
{
    return ValueHelper<winrt::Style>::CastOrUnbox(static_cast<PagerControl*>(this)->GetValue(s_PreviousButtonStyleProperty));
}

void PagerControlProperties::PreviousButtonVisibility(winrt::PagerControlButtonVisibility const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PagerControl*>(this)->SetValue(s_PreviousButtonVisibilityProperty, ValueHelper<winrt::PagerControlButtonVisibility>::BoxValueIfNecessary(value));
    }
}

winrt::PagerControlButtonVisibility PagerControlProperties::PreviousButtonVisibility()
{
    return ValueHelper<winrt::PagerControlButtonVisibility>::CastOrUnbox(static_cast<PagerControl*>(this)->GetValue(s_PreviousButtonVisibilityProperty));
}

void PagerControlProperties::SelectedPageIndex(int value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PagerControl*>(this)->SetValue(s_SelectedPageIndexProperty, ValueHelper<int>::BoxValueIfNecessary(value));
    }
}

int PagerControlProperties::SelectedPageIndex()
{
    return ValueHelper<int>::CastOrUnbox(static_cast<PagerControl*>(this)->GetValue(s_SelectedPageIndexProperty));
}

void PagerControlProperties::SuffixText(winrt::hstring const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PagerControl*>(this)->SetValue(s_SuffixTextProperty, ValueHelper<winrt::hstring>::BoxValueIfNecessary(value));
    }
}

winrt::hstring PagerControlProperties::SuffixText()
{
    return ValueHelper<winrt::hstring>::CastOrUnbox(static_cast<PagerControl*>(this)->GetValue(s_SuffixTextProperty));
}

void PagerControlProperties::TemplateSettings(winrt::PagerControlTemplateSettings const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PagerControl*>(this)->SetValue(s_TemplateSettingsProperty, ValueHelper<winrt::PagerControlTemplateSettings>::BoxValueIfNecessary(value));
    }
}

winrt::PagerControlTemplateSettings PagerControlProperties::TemplateSettings()
{
    return ValueHelper<winrt::PagerControlTemplateSettings>::CastOrUnbox(static_cast<PagerControl*>(this)->GetValue(s_TemplateSettingsProperty));
}

winrt::event_token PagerControlProperties::SelectedIndexChanged(winrt::TypedEventHandler<winrt::PagerControl, winrt::PagerControlSelectedIndexChangedEventArgs> const& value)
{
    return m_selectedIndexChangedEventSource.add(value);
}

void PagerControlProperties::SelectedIndexChanged(winrt::event_token const& token)
{
    m_selectedIndexChangedEventSource.remove(token);
}
