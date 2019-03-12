// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "ItemsRepeater.h"

CppWinRTActivatableClassWithDPFactory(ItemsRepeater)

GlobalDependencyProperty ItemsRepeaterProperties::s_AnimatorProperty{ nullptr };
GlobalDependencyProperty ItemsRepeaterProperties::s_BackgroundProperty{ nullptr };
GlobalDependencyProperty ItemsRepeaterProperties::s_HorizontalCacheLengthProperty{ nullptr };
GlobalDependencyProperty ItemsRepeaterProperties::s_ItemsSourceProperty{ nullptr };
GlobalDependencyProperty ItemsRepeaterProperties::s_ItemTemplateProperty{ nullptr };
GlobalDependencyProperty ItemsRepeaterProperties::s_LayoutProperty{ nullptr };
GlobalDependencyProperty ItemsRepeaterProperties::s_VerticalCacheLengthProperty{ nullptr };

ItemsRepeaterProperties::ItemsRepeaterProperties()
    : m_elementClearingEventSource{static_cast<ItemsRepeater*>(this)}
    , m_elementIndexChangedEventSource{static_cast<ItemsRepeater*>(this)}
    , m_elementPreparedEventSource{static_cast<ItemsRepeater*>(this)}
{
    EnsureProperties();
}

void ItemsRepeaterProperties::EnsureProperties()
{
    if (!s_AnimatorProperty)
    {
        s_AnimatorProperty =
            InitializeDependencyProperty(
                L"Animator",
                winrt::name_of<winrt::ElementAnimator>(),
                winrt::name_of<winrt::ItemsRepeater>(),
                false /* isAttached */,
                ValueHelper<winrt::ElementAnimator>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnAnimatorPropertyChanged));
    }
    if (!s_BackgroundProperty)
    {
        s_BackgroundProperty =
            InitializeDependencyProperty(
                L"Background",
                winrt::name_of<winrt::Brush>(),
                winrt::name_of<winrt::ItemsRepeater>(),
                false /* isAttached */,
                ValueHelper<winrt::Brush>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_HorizontalCacheLengthProperty)
    {
        s_HorizontalCacheLengthProperty =
            InitializeDependencyProperty(
                L"HorizontalCacheLength",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ItemsRepeater>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(2.0),
                winrt::PropertyChangedCallback(&OnHorizontalCacheLengthPropertyChanged));
    }
    if (!s_ItemsSourceProperty)
    {
        s_ItemsSourceProperty =
            InitializeDependencyProperty(
                L"ItemsSource",
                winrt::name_of<winrt::IInspectable>(),
                winrt::name_of<winrt::ItemsRepeater>(),
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
                winrt::name_of<winrt::ItemsRepeater>(),
                false /* isAttached */,
                ValueHelper<winrt::IInspectable>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnItemTemplatePropertyChanged));
    }
    if (!s_LayoutProperty)
    {
        s_LayoutProperty =
            InitializeDependencyProperty(
                L"Layout",
                winrt::name_of<winrt::Layout>(),
                winrt::name_of<winrt::ItemsRepeater>(),
                false /* isAttached */,
                ValueHelper<winrt::Layout>::BoxValueIfNecessary(winrt::StackLayout()),
                winrt::PropertyChangedCallback(&OnLayoutPropertyChanged));
    }
    if (!s_VerticalCacheLengthProperty)
    {
        s_VerticalCacheLengthProperty =
            InitializeDependencyProperty(
                L"VerticalCacheLength",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ItemsRepeater>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(2.0),
                winrt::PropertyChangedCallback(&OnVerticalCacheLengthPropertyChanged));
    }
}

void ItemsRepeaterProperties::ClearProperties()
{
    s_AnimatorProperty = nullptr;
    s_BackgroundProperty = nullptr;
    s_HorizontalCacheLengthProperty = nullptr;
    s_ItemsSourceProperty = nullptr;
    s_ItemTemplateProperty = nullptr;
    s_LayoutProperty = nullptr;
    s_VerticalCacheLengthProperty = nullptr;
}

void ItemsRepeaterProperties::OnAnimatorPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ItemsRepeater>();
    winrt::get_self<ItemsRepeater>(owner)->OnPropertyChanged(args);
}
void ItemsRepeaterProperties::OnHorizontalCacheLengthPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ItemsRepeater>();
    winrt::get_self<ItemsRepeater>(owner)->OnPropertyChanged(args);
}
void ItemsRepeaterProperties::OnItemsSourcePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ItemsRepeater>();
    winrt::get_self<ItemsRepeater>(owner)->OnPropertyChanged(args);
}
void ItemsRepeaterProperties::OnItemTemplatePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ItemsRepeater>();
    winrt::get_self<ItemsRepeater>(owner)->OnPropertyChanged(args);
}
void ItemsRepeaterProperties::OnLayoutPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ItemsRepeater>();
    winrt::get_self<ItemsRepeater>(owner)->OnPropertyChanged(args);
}
void ItemsRepeaterProperties::OnVerticalCacheLengthPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ItemsRepeater>();
    winrt::get_self<ItemsRepeater>(owner)->OnPropertyChanged(args);
}

void ItemsRepeaterProperties::Animator(winrt::ElementAnimator const& value)
{
    static_cast<ItemsRepeater*>(this)->SetValue(s_AnimatorProperty, ValueHelper<winrt::ElementAnimator>::BoxValueIfNecessary(value));
}

winrt::ElementAnimator ItemsRepeaterProperties::Animator()
{
    return ValueHelper<winrt::ElementAnimator>::CastOrUnbox(static_cast<ItemsRepeater*>(this)->GetValue(s_AnimatorProperty));
}

void ItemsRepeaterProperties::Background(winrt::Brush const& value)
{
    static_cast<ItemsRepeater*>(this)->SetValue(s_BackgroundProperty, ValueHelper<winrt::Brush>::BoxValueIfNecessary(value));
}

winrt::Brush ItemsRepeaterProperties::Background()
{
    return ValueHelper<winrt::Brush>::CastOrUnbox(static_cast<ItemsRepeater*>(this)->GetValue(s_BackgroundProperty));
}

void ItemsRepeaterProperties::HorizontalCacheLength(double value)
{
    static_cast<ItemsRepeater*>(this)->SetValue(s_HorizontalCacheLengthProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double ItemsRepeaterProperties::HorizontalCacheLength()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ItemsRepeater*>(this)->GetValue(s_HorizontalCacheLengthProperty));
}

void ItemsRepeaterProperties::ItemsSource(winrt::IInspectable const& value)
{
    static_cast<ItemsRepeater*>(this)->SetValue(s_ItemsSourceProperty, ValueHelper<winrt::IInspectable>::BoxValueIfNecessary(value));
}

winrt::IInspectable ItemsRepeaterProperties::ItemsSource()
{
    return ValueHelper<winrt::IInspectable>::CastOrUnbox(static_cast<ItemsRepeater*>(this)->GetValue(s_ItemsSourceProperty));
}

void ItemsRepeaterProperties::ItemTemplate(winrt::IInspectable const& value)
{
    static_cast<ItemsRepeater*>(this)->SetValue(s_ItemTemplateProperty, ValueHelper<winrt::IInspectable>::BoxValueIfNecessary(value));
}

winrt::IInspectable ItemsRepeaterProperties::ItemTemplate()
{
    return ValueHelper<winrt::IInspectable>::CastOrUnbox(static_cast<ItemsRepeater*>(this)->GetValue(s_ItemTemplateProperty));
}

void ItemsRepeaterProperties::Layout(winrt::Layout const& value)
{
    static_cast<ItemsRepeater*>(this)->SetValue(s_LayoutProperty, ValueHelper<winrt::Layout>::BoxValueIfNecessary(value));
}

winrt::Layout ItemsRepeaterProperties::Layout()
{
    return ValueHelper<winrt::Layout>::CastOrUnbox(static_cast<ItemsRepeater*>(this)->GetValue(s_LayoutProperty));
}

void ItemsRepeaterProperties::VerticalCacheLength(double value)
{
    static_cast<ItemsRepeater*>(this)->SetValue(s_VerticalCacheLengthProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double ItemsRepeaterProperties::VerticalCacheLength()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ItemsRepeater*>(this)->GetValue(s_VerticalCacheLengthProperty));
}

winrt::event_token ItemsRepeaterProperties::ElementClearing(winrt::TypedEventHandler<winrt::ItemsRepeater, winrt::ItemsRepeaterElementClearingEventArgs> const& value)
{
    return m_elementClearingEventSource.add(value);
}

void ItemsRepeaterProperties::ElementClearing(winrt::event_token const& token)
{
    m_elementClearingEventSource.remove(token);
}

winrt::event_token ItemsRepeaterProperties::ElementIndexChanged(winrt::TypedEventHandler<winrt::ItemsRepeater, winrt::ItemsRepeaterElementIndexChangedEventArgs> const& value)
{
    return m_elementIndexChangedEventSource.add(value);
}

void ItemsRepeaterProperties::ElementIndexChanged(winrt::event_token const& token)
{
    m_elementIndexChangedEventSource.remove(token);
}

winrt::event_token ItemsRepeaterProperties::ElementPrepared(winrt::TypedEventHandler<winrt::ItemsRepeater, winrt::ItemsRepeaterElementPreparedEventArgs> const& value)
{
    return m_elementPreparedEventSource.add(value);
}

void ItemsRepeaterProperties::ElementPrepared(winrt::event_token const& token)
{
    m_elementPreparedEventSource.remove(token);
}
