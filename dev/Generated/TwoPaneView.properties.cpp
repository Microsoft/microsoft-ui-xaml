// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "TwoPaneView.h"

CppWinRTActivatableClassWithDPFactory(TwoPaneView)

GlobalDependencyProperty TwoPaneViewProperties::s_MinTallModeHeightProperty{ nullptr };
GlobalDependencyProperty TwoPaneViewProperties::s_MinWideModeWidthProperty{ nullptr };
GlobalDependencyProperty TwoPaneViewProperties::s_ModeProperty{ nullptr };
GlobalDependencyProperty TwoPaneViewProperties::s_Pane1Property{ nullptr };
GlobalDependencyProperty TwoPaneViewProperties::s_Pane1LengthProperty{ nullptr };
GlobalDependencyProperty TwoPaneViewProperties::s_Pane2Property{ nullptr };
GlobalDependencyProperty TwoPaneViewProperties::s_Pane2LengthProperty{ nullptr };
GlobalDependencyProperty TwoPaneViewProperties::s_PanePriorityProperty{ nullptr };
GlobalDependencyProperty TwoPaneViewProperties::s_TallModeConfigurationProperty{ nullptr };
GlobalDependencyProperty TwoPaneViewProperties::s_WideModeConfigurationProperty{ nullptr };

TwoPaneViewProperties::TwoPaneViewProperties()
    : m_modeChangedEventSource{static_cast<TwoPaneView*>(this)}
{
    EnsureProperties();
}

void TwoPaneViewProperties::EnsureProperties()
{
    if (!s_MinTallModeHeightProperty)
    {
        s_MinTallModeHeightProperty =
            InitializeDependencyProperty(
                L"MinTallModeHeight",
                winrt::name_of<double>(),
                winrt::name_of<winrt::TwoPaneView>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(c_defaultMinTallModeHeight),
                winrt::PropertyChangedCallback(&OnMinTallModeHeightPropertyChanged));
    }
    if (!s_MinWideModeWidthProperty)
    {
        s_MinWideModeWidthProperty =
            InitializeDependencyProperty(
                L"MinWideModeWidth",
                winrt::name_of<double>(),
                winrt::name_of<winrt::TwoPaneView>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(c_defaultMinWideModeWidth),
                winrt::PropertyChangedCallback(&OnMinWideModeWidthPropertyChanged));
    }
    if (!s_ModeProperty)
    {
        s_ModeProperty =
            InitializeDependencyProperty(
                L"Mode",
                winrt::name_of<winrt::TwoPaneViewMode>(),
                winrt::name_of<winrt::TwoPaneView>(),
                false /* isAttached */,
                ValueHelper<winrt::TwoPaneViewMode>::BoxValueIfNecessary(winrt::TwoPaneViewMode::SinglePane),
                nullptr);
    }
    if (!s_Pane1Property)
    {
        s_Pane1Property =
            InitializeDependencyProperty(
                L"Pane1",
                winrt::name_of<winrt::UIElement>(),
                winrt::name_of<winrt::TwoPaneView>(),
                false /* isAttached */,
                ValueHelper<winrt::UIElement>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPane1PropertyChanged));
    }
    if (!s_Pane1LengthProperty)
    {
        s_Pane1LengthProperty =
            InitializeDependencyProperty(
                L"Pane1Length",
                winrt::name_of<winrt::GridLength>(),
                winrt::name_of<winrt::TwoPaneView>(),
                false /* isAttached */,
                ValueHelper<winrt::GridLength>::BoxValueIfNecessary(c_pane1LengthDefault),
                winrt::PropertyChangedCallback(&OnPane1LengthPropertyChanged));
    }
    if (!s_Pane2Property)
    {
        s_Pane2Property =
            InitializeDependencyProperty(
                L"Pane2",
                winrt::name_of<winrt::UIElement>(),
                winrt::name_of<winrt::TwoPaneView>(),
                false /* isAttached */,
                ValueHelper<winrt::UIElement>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPane2PropertyChanged));
    }
    if (!s_Pane2LengthProperty)
    {
        s_Pane2LengthProperty =
            InitializeDependencyProperty(
                L"Pane2Length",
                winrt::name_of<winrt::GridLength>(),
                winrt::name_of<winrt::TwoPaneView>(),
                false /* isAttached */,
                ValueHelper<winrt::GridLength>::BoxValueIfNecessary(c_pane2LengthDefault),
                winrt::PropertyChangedCallback(&OnPane2LengthPropertyChanged));
    }
    if (!s_PanePriorityProperty)
    {
        s_PanePriorityProperty =
            InitializeDependencyProperty(
                L"PanePriority",
                winrt::name_of<winrt::TwoPaneViewPriority>(),
                winrt::name_of<winrt::TwoPaneView>(),
                false /* isAttached */,
                ValueHelper<winrt::TwoPaneViewPriority>::BoxValueIfNecessary(winrt::TwoPaneViewPriority::Pane1),
                winrt::PropertyChangedCallback(&OnPanePriorityPropertyChanged));
    }
    if (!s_TallModeConfigurationProperty)
    {
        s_TallModeConfigurationProperty =
            InitializeDependencyProperty(
                L"TallModeConfiguration",
                winrt::name_of<winrt::TwoPaneViewTallModeConfiguration>(),
                winrt::name_of<winrt::TwoPaneView>(),
                false /* isAttached */,
                ValueHelper<winrt::TwoPaneViewTallModeConfiguration>::BoxValueIfNecessary(winrt::TwoPaneViewTallModeConfiguration::TopBottom),
                winrt::PropertyChangedCallback(&OnTallModeConfigurationPropertyChanged));
    }
    if (!s_WideModeConfigurationProperty)
    {
        s_WideModeConfigurationProperty =
            InitializeDependencyProperty(
                L"WideModeConfiguration",
                winrt::name_of<winrt::TwoPaneViewWideModeConfiguration>(),
                winrt::name_of<winrt::TwoPaneView>(),
                false /* isAttached */,
                ValueHelper<winrt::TwoPaneViewWideModeConfiguration>::BoxValueIfNecessary(winrt::TwoPaneViewWideModeConfiguration::LeftRight),
                winrt::PropertyChangedCallback(&OnWideModeConfigurationPropertyChanged));
    }
}

void TwoPaneViewProperties::ClearProperties()
{
    s_MinTallModeHeightProperty = nullptr;
    s_MinWideModeWidthProperty = nullptr;
    s_ModeProperty = nullptr;
    s_Pane1Property = nullptr;
    s_Pane1LengthProperty = nullptr;
    s_Pane2Property = nullptr;
    s_Pane2LengthProperty = nullptr;
    s_PanePriorityProperty = nullptr;
    s_TallModeConfigurationProperty = nullptr;
    s_WideModeConfigurationProperty = nullptr;
}

void TwoPaneViewProperties::OnMinTallModeHeightPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TwoPaneView>();
    winrt::get_self<TwoPaneView>(owner)->OnPropertyChanged(args);
}
void TwoPaneViewProperties::OnMinWideModeWidthPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TwoPaneView>();
    winrt::get_self<TwoPaneView>(owner)->OnPropertyChanged(args);
}
void TwoPaneViewProperties::OnPane1PropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TwoPaneView>();
    winrt::get_self<TwoPaneView>(owner)->OnPropertyChanged(args);
}
void TwoPaneViewProperties::OnPane1LengthPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TwoPaneView>();
    winrt::get_self<TwoPaneView>(owner)->OnPropertyChanged(args);
}
void TwoPaneViewProperties::OnPane2PropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TwoPaneView>();
    winrt::get_self<TwoPaneView>(owner)->OnPropertyChanged(args);
}
void TwoPaneViewProperties::OnPane2LengthPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TwoPaneView>();
    winrt::get_self<TwoPaneView>(owner)->OnPropertyChanged(args);
}
void TwoPaneViewProperties::OnPanePriorityPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TwoPaneView>();
    winrt::get_self<TwoPaneView>(owner)->OnPropertyChanged(args);
}
void TwoPaneViewProperties::OnTallModeConfigurationPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TwoPaneView>();
    winrt::get_self<TwoPaneView>(owner)->OnPropertyChanged(args);
}
void TwoPaneViewProperties::OnWideModeConfigurationPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TwoPaneView>();
    winrt::get_self<TwoPaneView>(owner)->OnPropertyChanged(args);
}

void TwoPaneViewProperties::MinTallModeHeight(double value)
{
    static_cast<TwoPaneView*>(this)->SetValue(s_MinTallModeHeightProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double TwoPaneViewProperties::MinTallModeHeight()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<TwoPaneView*>(this)->GetValue(s_MinTallModeHeightProperty));
}

void TwoPaneViewProperties::MinWideModeWidth(double value)
{
    static_cast<TwoPaneView*>(this)->SetValue(s_MinWideModeWidthProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double TwoPaneViewProperties::MinWideModeWidth()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<TwoPaneView*>(this)->GetValue(s_MinWideModeWidthProperty));
}

void TwoPaneViewProperties::Mode(winrt::TwoPaneViewMode const& value)
{
    static_cast<TwoPaneView*>(this)->SetValue(s_ModeProperty, ValueHelper<winrt::TwoPaneViewMode>::BoxValueIfNecessary(value));
}

winrt::TwoPaneViewMode TwoPaneViewProperties::Mode()
{
    return ValueHelper<winrt::TwoPaneViewMode>::CastOrUnbox(static_cast<TwoPaneView*>(this)->GetValue(s_ModeProperty));
}

void TwoPaneViewProperties::Pane1(winrt::UIElement const& value)
{
    static_cast<TwoPaneView*>(this)->SetValue(s_Pane1Property, ValueHelper<winrt::UIElement>::BoxValueIfNecessary(value));
}

winrt::UIElement TwoPaneViewProperties::Pane1()
{
    return ValueHelper<winrt::UIElement>::CastOrUnbox(static_cast<TwoPaneView*>(this)->GetValue(s_Pane1Property));
}

void TwoPaneViewProperties::Pane1Length(winrt::GridLength const& value)
{
    static_cast<TwoPaneView*>(this)->SetValue(s_Pane1LengthProperty, ValueHelper<winrt::GridLength>::BoxValueIfNecessary(value));
}

winrt::GridLength TwoPaneViewProperties::Pane1Length()
{
    return ValueHelper<winrt::GridLength>::CastOrUnbox(static_cast<TwoPaneView*>(this)->GetValue(s_Pane1LengthProperty));
}

void TwoPaneViewProperties::Pane2(winrt::UIElement const& value)
{
    static_cast<TwoPaneView*>(this)->SetValue(s_Pane2Property, ValueHelper<winrt::UIElement>::BoxValueIfNecessary(value));
}

winrt::UIElement TwoPaneViewProperties::Pane2()
{
    return ValueHelper<winrt::UIElement>::CastOrUnbox(static_cast<TwoPaneView*>(this)->GetValue(s_Pane2Property));
}

void TwoPaneViewProperties::Pane2Length(winrt::GridLength const& value)
{
    static_cast<TwoPaneView*>(this)->SetValue(s_Pane2LengthProperty, ValueHelper<winrt::GridLength>::BoxValueIfNecessary(value));
}

winrt::GridLength TwoPaneViewProperties::Pane2Length()
{
    return ValueHelper<winrt::GridLength>::CastOrUnbox(static_cast<TwoPaneView*>(this)->GetValue(s_Pane2LengthProperty));
}

void TwoPaneViewProperties::PanePriority(winrt::TwoPaneViewPriority const& value)
{
    static_cast<TwoPaneView*>(this)->SetValue(s_PanePriorityProperty, ValueHelper<winrt::TwoPaneViewPriority>::BoxValueIfNecessary(value));
}

winrt::TwoPaneViewPriority TwoPaneViewProperties::PanePriority()
{
    return ValueHelper<winrt::TwoPaneViewPriority>::CastOrUnbox(static_cast<TwoPaneView*>(this)->GetValue(s_PanePriorityProperty));
}

void TwoPaneViewProperties::TallModeConfiguration(winrt::TwoPaneViewTallModeConfiguration const& value)
{
    static_cast<TwoPaneView*>(this)->SetValue(s_TallModeConfigurationProperty, ValueHelper<winrt::TwoPaneViewTallModeConfiguration>::BoxValueIfNecessary(value));
}

winrt::TwoPaneViewTallModeConfiguration TwoPaneViewProperties::TallModeConfiguration()
{
    return ValueHelper<winrt::TwoPaneViewTallModeConfiguration>::CastOrUnbox(static_cast<TwoPaneView*>(this)->GetValue(s_TallModeConfigurationProperty));
}

void TwoPaneViewProperties::WideModeConfiguration(winrt::TwoPaneViewWideModeConfiguration const& value)
{
    static_cast<TwoPaneView*>(this)->SetValue(s_WideModeConfigurationProperty, ValueHelper<winrt::TwoPaneViewWideModeConfiguration>::BoxValueIfNecessary(value));
}

winrt::TwoPaneViewWideModeConfiguration TwoPaneViewProperties::WideModeConfiguration()
{
    return ValueHelper<winrt::TwoPaneViewWideModeConfiguration>::CastOrUnbox(static_cast<TwoPaneView*>(this)->GetValue(s_WideModeConfigurationProperty));
}

winrt::event_token TwoPaneViewProperties::ModeChanged(winrt::TypedEventHandler<winrt::TwoPaneView, winrt::IInspectable> const& value)
{
    return m_modeChangedEventSource.add(value);
}

void TwoPaneViewProperties::ModeChanged(winrt::event_token const& token)
{
    m_modeChangedEventSource.remove(token);
}
