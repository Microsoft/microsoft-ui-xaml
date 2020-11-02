// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "InfoBar.h"

namespace winrt::Microsoft::UI::Xaml::Controls
{
    CppWinRTActivatableClassWithDPFactory(InfoBar)
}

#include "InfoBar.g.cpp"

GlobalDependencyProperty InfoBarProperties::s_ActionButtonProperty{ nullptr };
GlobalDependencyProperty InfoBarProperties::s_CloseButtonCommandProperty{ nullptr };
GlobalDependencyProperty InfoBarProperties::s_CloseButtonCommandParameterProperty{ nullptr };
GlobalDependencyProperty InfoBarProperties::s_CloseButtonStyleProperty{ nullptr };
GlobalDependencyProperty InfoBarProperties::s_ContentProperty{ nullptr };
GlobalDependencyProperty InfoBarProperties::s_ContentTemplateProperty{ nullptr };
GlobalDependencyProperty InfoBarProperties::s_IconSourceProperty{ nullptr };
GlobalDependencyProperty InfoBarProperties::s_IsClosableProperty{ nullptr };
GlobalDependencyProperty InfoBarProperties::s_IsIconVisibleProperty{ nullptr };
GlobalDependencyProperty InfoBarProperties::s_IsOpenProperty{ nullptr };
GlobalDependencyProperty InfoBarProperties::s_MessageProperty{ nullptr };
GlobalDependencyProperty InfoBarProperties::s_SeverityProperty{ nullptr };
GlobalDependencyProperty InfoBarProperties::s_TemplateSettingsProperty{ nullptr };
GlobalDependencyProperty InfoBarProperties::s_TitleProperty{ nullptr };

InfoBarProperties::InfoBarProperties()
    : m_closeButtonClickEventSource{static_cast<InfoBar*>(this)}
    , m_closedEventSource{static_cast<InfoBar*>(this)}
    , m_closingEventSource{static_cast<InfoBar*>(this)}
{
    EnsureProperties();
}

void InfoBarProperties::EnsureProperties()
{
    if (!s_ActionButtonProperty)
    {
        s_ActionButtonProperty =
            InitializeDependencyProperty(
                L"ActionButton",
                winrt::name_of<winrt::ButtonBase>(),
                winrt::name_of<winrt::InfoBar>(),
                false /* isAttached */,
                ValueHelper<winrt::ButtonBase>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_CloseButtonCommandProperty)
    {
        s_CloseButtonCommandProperty =
            InitializeDependencyProperty(
                L"CloseButtonCommand",
                winrt::name_of<winrt::ICommand>(),
                winrt::name_of<winrt::InfoBar>(),
                false /* isAttached */,
                ValueHelper<winrt::ICommand>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_CloseButtonCommandParameterProperty)
    {
        s_CloseButtonCommandParameterProperty =
            InitializeDependencyProperty(
                L"CloseButtonCommandParameter",
                winrt::name_of<winrt::IInspectable>(),
                winrt::name_of<winrt::InfoBar>(),
                false /* isAttached */,
                ValueHelper<winrt::IInspectable>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_CloseButtonStyleProperty)
    {
        s_CloseButtonStyleProperty =
            InitializeDependencyProperty(
                L"CloseButtonStyle",
                winrt::name_of<winrt::Style>(),
                winrt::name_of<winrt::InfoBar>(),
                false /* isAttached */,
                ValueHelper<winrt::Style>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_ContentProperty)
    {
        s_ContentProperty =
            InitializeDependencyProperty(
                L"Content",
                winrt::name_of<winrt::IInspectable>(),
                winrt::name_of<winrt::InfoBar>(),
                false /* isAttached */,
                ValueHelper<winrt::IInspectable>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_ContentTemplateProperty)
    {
        s_ContentTemplateProperty =
            InitializeDependencyProperty(
                L"ContentTemplate",
                winrt::name_of<winrt::DataTemplate>(),
                winrt::name_of<winrt::InfoBar>(),
                false /* isAttached */,
                ValueHelper<winrt::DataTemplate>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_IconSourceProperty)
    {
        s_IconSourceProperty =
            InitializeDependencyProperty(
                L"IconSource",
                winrt::name_of<winrt::IconSource>(),
                winrt::name_of<winrt::InfoBar>(),
                false /* isAttached */,
                ValueHelper<winrt::IconSource>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnIconSourcePropertyChanged));
    }
    if (!s_IsClosableProperty)
    {
        s_IsClosableProperty =
            InitializeDependencyProperty(
                L"IsClosable",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::InfoBar>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(true),
                winrt::PropertyChangedCallback(&OnIsClosablePropertyChanged));
    }
    if (!s_IsIconVisibleProperty)
    {
        s_IsIconVisibleProperty =
            InitializeDependencyProperty(
                L"IsIconVisible",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::InfoBar>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(true),
                winrt::PropertyChangedCallback(&OnIsIconVisiblePropertyChanged));
    }
    if (!s_IsOpenProperty)
    {
        s_IsOpenProperty =
            InitializeDependencyProperty(
                L"IsOpen",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::InfoBar>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(false),
                winrt::PropertyChangedCallback(&OnIsOpenPropertyChanged));
    }
    if (!s_MessageProperty)
    {
        s_MessageProperty =
            InitializeDependencyProperty(
                L"Message",
                winrt::name_of<winrt::hstring>(),
                winrt::name_of<winrt::InfoBar>(),
                false /* isAttached */,
                ValueHelper<winrt::hstring>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_SeverityProperty)
    {
        s_SeverityProperty =
            InitializeDependencyProperty(
                L"Severity",
                winrt::name_of<winrt::InfoBarSeverity>(),
                winrt::name_of<winrt::InfoBar>(),
                false /* isAttached */,
                ValueHelper<winrt::InfoBarSeverity>::BoxValueIfNecessary(winrt::InfoBarSeverity::Informational),
                winrt::PropertyChangedCallback(&OnSeverityPropertyChanged));
    }
    if (!s_TemplateSettingsProperty)
    {
        s_TemplateSettingsProperty =
            InitializeDependencyProperty(
                L"TemplateSettings",
                winrt::name_of<winrt::InfoBarTemplateSettings>(),
                winrt::name_of<winrt::InfoBar>(),
                false /* isAttached */,
                ValueHelper<winrt::InfoBarTemplateSettings>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_TitleProperty)
    {
        s_TitleProperty =
            InitializeDependencyProperty(
                L"Title",
                winrt::name_of<winrt::hstring>(),
                winrt::name_of<winrt::InfoBar>(),
                false /* isAttached */,
                ValueHelper<winrt::hstring>::BoxedDefaultValue(),
                nullptr);
    }
}

void InfoBarProperties::ClearProperties()
{
    s_ActionButtonProperty = nullptr;
    s_CloseButtonCommandProperty = nullptr;
    s_CloseButtonCommandParameterProperty = nullptr;
    s_CloseButtonStyleProperty = nullptr;
    s_ContentProperty = nullptr;
    s_ContentTemplateProperty = nullptr;
    s_IconSourceProperty = nullptr;
    s_IsClosableProperty = nullptr;
    s_IsIconVisibleProperty = nullptr;
    s_IsOpenProperty = nullptr;
    s_MessageProperty = nullptr;
    s_SeverityProperty = nullptr;
    s_TemplateSettingsProperty = nullptr;
    s_TitleProperty = nullptr;
}

void InfoBarProperties::OnIconSourcePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::InfoBar>();
    winrt::get_self<InfoBar>(owner)->OnIconSourcePropertyChanged(args);
}

void InfoBarProperties::OnIsClosablePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::InfoBar>();
    winrt::get_self<InfoBar>(owner)->OnIsClosablePropertyChanged(args);
}

void InfoBarProperties::OnIsIconVisiblePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::InfoBar>();
    winrt::get_self<InfoBar>(owner)->OnIsIconVisiblePropertyChanged(args);
}

void InfoBarProperties::OnIsOpenPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::InfoBar>();
    winrt::get_self<InfoBar>(owner)->OnIsOpenPropertyChanged(args);
}

void InfoBarProperties::OnSeverityPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::InfoBar>();
    winrt::get_self<InfoBar>(owner)->OnSeverityPropertyChanged(args);
}

void InfoBarProperties::ActionButton(winrt::ButtonBase const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<InfoBar*>(this)->SetValue(s_ActionButtonProperty, ValueHelper<winrt::ButtonBase>::BoxValueIfNecessary(value));
    }
}

winrt::ButtonBase InfoBarProperties::ActionButton()
{
    return ValueHelper<winrt::ButtonBase>::CastOrUnbox(static_cast<InfoBar*>(this)->GetValue(s_ActionButtonProperty));
}

void InfoBarProperties::CloseButtonCommand(winrt::ICommand const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<InfoBar*>(this)->SetValue(s_CloseButtonCommandProperty, ValueHelper<winrt::ICommand>::BoxValueIfNecessary(value));
    }
}

winrt::ICommand InfoBarProperties::CloseButtonCommand()
{
    return ValueHelper<winrt::ICommand>::CastOrUnbox(static_cast<InfoBar*>(this)->GetValue(s_CloseButtonCommandProperty));
}

void InfoBarProperties::CloseButtonCommandParameter(winrt::IInspectable const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<InfoBar*>(this)->SetValue(s_CloseButtonCommandParameterProperty, ValueHelper<winrt::IInspectable>::BoxValueIfNecessary(value));
    }
}

winrt::IInspectable InfoBarProperties::CloseButtonCommandParameter()
{
    return ValueHelper<winrt::IInspectable>::CastOrUnbox(static_cast<InfoBar*>(this)->GetValue(s_CloseButtonCommandParameterProperty));
}

void InfoBarProperties::CloseButtonStyle(winrt::Style const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<InfoBar*>(this)->SetValue(s_CloseButtonStyleProperty, ValueHelper<winrt::Style>::BoxValueIfNecessary(value));
    }
}

winrt::Style InfoBarProperties::CloseButtonStyle()
{
    return ValueHelper<winrt::Style>::CastOrUnbox(static_cast<InfoBar*>(this)->GetValue(s_CloseButtonStyleProperty));
}

void InfoBarProperties::Content(winrt::IInspectable const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<InfoBar*>(this)->SetValue(s_ContentProperty, ValueHelper<winrt::IInspectable>::BoxValueIfNecessary(value));
    }
}

winrt::IInspectable InfoBarProperties::Content()
{
    return ValueHelper<winrt::IInspectable>::CastOrUnbox(static_cast<InfoBar*>(this)->GetValue(s_ContentProperty));
}

void InfoBarProperties::ContentTemplate(winrt::DataTemplate const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<InfoBar*>(this)->SetValue(s_ContentTemplateProperty, ValueHelper<winrt::DataTemplate>::BoxValueIfNecessary(value));
    }
}

winrt::DataTemplate InfoBarProperties::ContentTemplate()
{
    return ValueHelper<winrt::DataTemplate>::CastOrUnbox(static_cast<InfoBar*>(this)->GetValue(s_ContentTemplateProperty));
}

void InfoBarProperties::IconSource(winrt::IconSource const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<InfoBar*>(this)->SetValue(s_IconSourceProperty, ValueHelper<winrt::IconSource>::BoxValueIfNecessary(value));
    }
}

winrt::IconSource InfoBarProperties::IconSource()
{
    return ValueHelper<winrt::IconSource>::CastOrUnbox(static_cast<InfoBar*>(this)->GetValue(s_IconSourceProperty));
}

void InfoBarProperties::IsClosable(bool value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<InfoBar*>(this)->SetValue(s_IsClosableProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
    }
}

bool InfoBarProperties::IsClosable()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<InfoBar*>(this)->GetValue(s_IsClosableProperty));
}

void InfoBarProperties::IsIconVisible(bool value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<InfoBar*>(this)->SetValue(s_IsIconVisibleProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
    }
}

bool InfoBarProperties::IsIconVisible()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<InfoBar*>(this)->GetValue(s_IsIconVisibleProperty));
}

void InfoBarProperties::IsOpen(bool value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<InfoBar*>(this)->SetValue(s_IsOpenProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
    }
}

bool InfoBarProperties::IsOpen()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<InfoBar*>(this)->GetValue(s_IsOpenProperty));
}

void InfoBarProperties::Message(winrt::hstring const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<InfoBar*>(this)->SetValue(s_MessageProperty, ValueHelper<winrt::hstring>::BoxValueIfNecessary(value));
    }
}

winrt::hstring InfoBarProperties::Message()
{
    return ValueHelper<winrt::hstring>::CastOrUnbox(static_cast<InfoBar*>(this)->GetValue(s_MessageProperty));
}

void InfoBarProperties::Severity(winrt::InfoBarSeverity const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<InfoBar*>(this)->SetValue(s_SeverityProperty, ValueHelper<winrt::InfoBarSeverity>::BoxValueIfNecessary(value));
    }
}

winrt::InfoBarSeverity InfoBarProperties::Severity()
{
    return ValueHelper<winrt::InfoBarSeverity>::CastOrUnbox(static_cast<InfoBar*>(this)->GetValue(s_SeverityProperty));
}

void InfoBarProperties::TemplateSettings(winrt::InfoBarTemplateSettings const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<InfoBar*>(this)->SetValue(s_TemplateSettingsProperty, ValueHelper<winrt::InfoBarTemplateSettings>::BoxValueIfNecessary(value));
    }
}

winrt::InfoBarTemplateSettings InfoBarProperties::TemplateSettings()
{
    return ValueHelper<winrt::InfoBarTemplateSettings>::CastOrUnbox(static_cast<InfoBar*>(this)->GetValue(s_TemplateSettingsProperty));
}

void InfoBarProperties::Title(winrt::hstring const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<InfoBar*>(this)->SetValue(s_TitleProperty, ValueHelper<winrt::hstring>::BoxValueIfNecessary(value));
    }
}

winrt::hstring InfoBarProperties::Title()
{
    return ValueHelper<winrt::hstring>::CastOrUnbox(static_cast<InfoBar*>(this)->GetValue(s_TitleProperty));
}

winrt::event_token InfoBarProperties::CloseButtonClick(winrt::TypedEventHandler<winrt::InfoBar, winrt::IInspectable> const& value)
{
    return m_closeButtonClickEventSource.add(value);
}

void InfoBarProperties::CloseButtonClick(winrt::event_token const& token)
{
    m_closeButtonClickEventSource.remove(token);
}

winrt::event_token InfoBarProperties::Closed(winrt::TypedEventHandler<winrt::InfoBar, winrt::InfoBarClosedEventArgs> const& value)
{
    return m_closedEventSource.add(value);
}

void InfoBarProperties::Closed(winrt::event_token const& token)
{
    m_closedEventSource.remove(token);
}

winrt::event_token InfoBarProperties::Closing(winrt::TypedEventHandler<winrt::InfoBar, winrt::InfoBarClosingEventArgs> const& value)
{
    return m_closingEventSource.add(value);
}

void InfoBarProperties::Closing(winrt::event_token const& token)
{
    m_closingEventSource.remove(token);
}
