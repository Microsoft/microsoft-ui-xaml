// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "BreadcrumbBar.h"

namespace winrt::Microsoft::UI::Xaml::Controls
{
    CppWinRTActivatableClassWithDPFactory(BreadcrumbBar)
}

#include "BreadcrumbBar.g.cpp"

GlobalDependencyProperty BreadcrumbBarProperties::s_ItemsSourceProperty{ nullptr };
GlobalDependencyProperty BreadcrumbBarProperties::s_ItemTemplateProperty{ nullptr };

BreadcrumbBarProperties::BreadcrumbBarProperties()
    : m_itemClickedEventSource{static_cast<BreadcrumbBar*>(this)}
{
    EnsureProperties();
}

void BreadcrumbBarProperties::EnsureProperties()
{
    if (!s_ItemsSourceProperty)
    {
        s_ItemsSourceProperty =
            InitializeDependencyProperty(
                L"ItemsSource",
                winrt::name_of<winrt::IInspectable>(),
                winrt::name_of<winrt::BreadcrumbBar>(),
                false /* isAttached */,
                ValueHelper<winrt::IInspectable>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnItemsSourcePropertyChanged));
    }
    if (!s_ItemTemplateProperty)
    {
        s_ItemTemplateProperty =
            InitializeDependencyProperty(
                L"ItemTemplate",
                winrt::name_of<winrt::IInspectable>(),
                winrt::name_of<winrt::BreadcrumbBar>(),
                false /* isAttached */,
                ValueHelper<winrt::IInspectable>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnItemTemplatePropertyChanged));
    }
}

void BreadcrumbBarProperties::ClearProperties()
{
    s_ItemsSourceProperty = nullptr;
    s_ItemTemplateProperty = nullptr;
}

void BreadcrumbBarProperties::OnItemsSourcePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::BreadcrumbBar>();
    winrt::get_self<BreadcrumbBar>(owner)->OnPropertyChanged(args);
}

void BreadcrumbBarProperties::OnItemTemplatePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::BreadcrumbBar>();
    winrt::get_self<BreadcrumbBar>(owner)->OnPropertyChanged(args);
}

void BreadcrumbBarProperties::ItemsSource(winrt::IInspectable const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<BreadcrumbBar*>(this)->SetValue(s_ItemsSourceProperty, ValueHelper<winrt::IInspectable>::BoxValueIfNecessary(value));
    }
}

winrt::IInspectable BreadcrumbBarProperties::ItemsSource()
{
    return ValueHelper<winrt::IInspectable>::CastOrUnbox(static_cast<BreadcrumbBar*>(this)->GetValue(s_ItemsSourceProperty));
}

void BreadcrumbBarProperties::ItemTemplate(winrt::IInspectable const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<BreadcrumbBar*>(this)->SetValue(s_ItemTemplateProperty, ValueHelper<winrt::IInspectable>::BoxValueIfNecessary(value));
    }
}

winrt::IInspectable BreadcrumbBarProperties::ItemTemplate()
{
    return ValueHelper<winrt::IInspectable>::CastOrUnbox(static_cast<BreadcrumbBar*>(this)->GetValue(s_ItemTemplateProperty));
}

winrt::event_token BreadcrumbBarProperties::ItemClicked(winrt::TypedEventHandler<winrt::BreadcrumbBar, winrt::BreadcrumbBarItemClickedEventArgs> const& value)
{
    return m_itemClickedEventSource.add(value);
}

void BreadcrumbBarProperties::ItemClicked(winrt::event_token const& token)
{
    m_itemClickedEventSource.remove(token);
}
