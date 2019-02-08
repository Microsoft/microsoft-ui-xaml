// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "Scroller.h"

CppWinRTActivatableClassWithDPFactory(Scroller)

GlobalDependencyProperty ScrollerProperties::s_BackgroundProperty{ nullptr };
GlobalDependencyProperty ScrollerProperties::s_ComputedHorizontalScrollModeProperty{ nullptr };
GlobalDependencyProperty ScrollerProperties::s_ComputedVerticalScrollModeProperty{ nullptr };
GlobalDependencyProperty ScrollerProperties::s_ContentProperty{ nullptr };
GlobalDependencyProperty ScrollerProperties::s_ContentOrientationProperty{ nullptr };
GlobalDependencyProperty ScrollerProperties::s_HorizontalAnchorRatioProperty{ nullptr };
GlobalDependencyProperty ScrollerProperties::s_HorizontalScrollChainingModeProperty{ nullptr };
GlobalDependencyProperty ScrollerProperties::s_HorizontalScrollModeProperty{ nullptr };
GlobalDependencyProperty ScrollerProperties::s_HorizontalScrollRailingModeProperty{ nullptr };
GlobalDependencyProperty ScrollerProperties::s_IgnoredInputKindProperty{ nullptr };
GlobalDependencyProperty ScrollerProperties::s_IsAnchoredAtHorizontalExtentProperty{ nullptr };
GlobalDependencyProperty ScrollerProperties::s_IsAnchoredAtVerticalExtentProperty{ nullptr };
GlobalDependencyProperty ScrollerProperties::s_MaxZoomFactorProperty{ nullptr };
GlobalDependencyProperty ScrollerProperties::s_MinZoomFactorProperty{ nullptr };
GlobalDependencyProperty ScrollerProperties::s_VerticalAnchorRatioProperty{ nullptr };
GlobalDependencyProperty ScrollerProperties::s_VerticalScrollChainingModeProperty{ nullptr };
GlobalDependencyProperty ScrollerProperties::s_VerticalScrollModeProperty{ nullptr };
GlobalDependencyProperty ScrollerProperties::s_VerticalScrollRailingModeProperty{ nullptr };
GlobalDependencyProperty ScrollerProperties::s_ZoomChainingModeProperty{ nullptr };
GlobalDependencyProperty ScrollerProperties::s_ZoomModeProperty{ nullptr };

ScrollerProperties::ScrollerProperties()
    : m_anchorRequestedEventSource{static_cast<Scroller*>(this)}
    , m_bringingIntoViewEventSource{static_cast<Scroller*>(this)}
    , m_changingOffsetsEventSource{static_cast<Scroller*>(this)}
    , m_changingZoomFactorEventSource{static_cast<Scroller*>(this)}
    , m_extentChangedEventSource{static_cast<Scroller*>(this)}
    , m_stateChangedEventSource{static_cast<Scroller*>(this)}
    , m_viewChangeCompletedEventSource{static_cast<Scroller*>(this)}
    , m_viewChangedEventSource{static_cast<Scroller*>(this)}
{
    EnsureProperties();
}

void ScrollerProperties::EnsureProperties()
{
    if (!s_BackgroundProperty)
    {
        s_BackgroundProperty =
            InitializeDependencyProperty(
                L"Background",
                winrt::name_of<winrt::Brush>(),
                winrt::name_of<winrt::Scroller>(),
                false /* isAttached */,
                ValueHelper<winrt::Brush>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_ComputedHorizontalScrollModeProperty)
    {
        s_ComputedHorizontalScrollModeProperty =
            InitializeDependencyProperty(
                L"ComputedHorizontalScrollMode",
                winrt::name_of<winrt::ScrollMode>(),
                winrt::name_of<winrt::Scroller>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollMode>::BoxValueIfNecessary(Scroller::s_defaultComputedVerticalScrollMode),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_ComputedVerticalScrollModeProperty)
    {
        s_ComputedVerticalScrollModeProperty =
            InitializeDependencyProperty(
                L"ComputedVerticalScrollMode",
                winrt::name_of<winrt::ScrollMode>(),
                winrt::name_of<winrt::Scroller>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollMode>::BoxValueIfNecessary(Scroller::s_defaultComputedVerticalScrollMode),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_ContentProperty)
    {
        s_ContentProperty =
            InitializeDependencyProperty(
                L"Content",
                winrt::name_of<winrt::UIElement>(),
                winrt::name_of<winrt::Scroller>(),
                false /* isAttached */,
                ValueHelper<winrt::UIElement>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_ContentOrientationProperty)
    {
        s_ContentOrientationProperty =
            InitializeDependencyProperty(
                L"ContentOrientation",
                winrt::name_of<winrt::ContentOrientation>(),
                winrt::name_of<winrt::Scroller>(),
                false /* isAttached */,
                ValueHelper<winrt::ContentOrientation>::BoxValueIfNecessary(Scroller::s_defaultContentOrientation),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_HorizontalAnchorRatioProperty)
    {
        s_HorizontalAnchorRatioProperty =
            InitializeDependencyProperty(
                L"HorizontalAnchorRatio",
                winrt::name_of<double>(),
                winrt::name_of<winrt::Scroller>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(Scroller::s_defaultAnchorRatio),
                &OnPropertyChanged_ValidateAnchorRatio);
    }
    if (!s_HorizontalScrollChainingModeProperty)
    {
        s_HorizontalScrollChainingModeProperty =
            InitializeDependencyProperty(
                L"HorizontalScrollChainingMode",
                winrt::name_of<winrt::ChainingMode>(),
                winrt::name_of<winrt::Scroller>(),
                false /* isAttached */,
                ValueHelper<winrt::ChainingMode>::BoxValueIfNecessary(Scroller::s_defaultHorizontalScrollChainingMode),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_HorizontalScrollModeProperty)
    {
        s_HorizontalScrollModeProperty =
            InitializeDependencyProperty(
                L"HorizontalScrollMode",
                winrt::name_of<winrt::ScrollMode>(),
                winrt::name_of<winrt::Scroller>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollMode>::BoxValueIfNecessary(Scroller::s_defaultHorizontalScrollMode),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_HorizontalScrollRailingModeProperty)
    {
        s_HorizontalScrollRailingModeProperty =
            InitializeDependencyProperty(
                L"HorizontalScrollRailingMode",
                winrt::name_of<winrt::RailingMode>(),
                winrt::name_of<winrt::Scroller>(),
                false /* isAttached */,
                ValueHelper<winrt::RailingMode>::BoxValueIfNecessary(Scroller::s_defaultHorizontalScrollRailingMode),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_IgnoredInputKindProperty)
    {
        s_IgnoredInputKindProperty =
            InitializeDependencyProperty(
                L"IgnoredInputKind",
                winrt::name_of<winrt::InputKind>(),
                winrt::name_of<winrt::Scroller>(),
                false /* isAttached */,
                ValueHelper<winrt::InputKind>::BoxValueIfNecessary(Scroller::s_defaultIgnoredInputKind),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_IsAnchoredAtHorizontalExtentProperty)
    {
        s_IsAnchoredAtHorizontalExtentProperty =
            InitializeDependencyProperty(
                L"IsAnchoredAtHorizontalExtent",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::Scroller>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(Scroller::s_defaultAnchorAtExtent),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_IsAnchoredAtVerticalExtentProperty)
    {
        s_IsAnchoredAtVerticalExtentProperty =
            InitializeDependencyProperty(
                L"IsAnchoredAtVerticalExtent",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::Scroller>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(Scroller::s_defaultAnchorAtExtent),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_MaxZoomFactorProperty)
    {
        s_MaxZoomFactorProperty =
            InitializeDependencyProperty(
                L"MaxZoomFactor",
                winrt::name_of<double>(),
                winrt::name_of<winrt::Scroller>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(Scroller::s_defaultMaxZoomFactor),
                &OnPropertyChanged_ValidateZoomFactoryBoundary);
    }
    if (!s_MinZoomFactorProperty)
    {
        s_MinZoomFactorProperty =
            InitializeDependencyProperty(
                L"MinZoomFactor",
                winrt::name_of<double>(),
                winrt::name_of<winrt::Scroller>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(Scroller::s_defaultMinZoomFactor),
                &OnPropertyChanged_ValidateZoomFactoryBoundary);
    }
    if (!s_VerticalAnchorRatioProperty)
    {
        s_VerticalAnchorRatioProperty =
            InitializeDependencyProperty(
                L"VerticalAnchorRatio",
                winrt::name_of<double>(),
                winrt::name_of<winrt::Scroller>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(Scroller::s_defaultAnchorRatio),
                &OnPropertyChanged_ValidateAnchorRatio);
    }
    if (!s_VerticalScrollChainingModeProperty)
    {
        s_VerticalScrollChainingModeProperty =
            InitializeDependencyProperty(
                L"VerticalScrollChainingMode",
                winrt::name_of<winrt::ChainingMode>(),
                winrt::name_of<winrt::Scroller>(),
                false /* isAttached */,
                ValueHelper<winrt::ChainingMode>::BoxValueIfNecessary(Scroller::s_defaultVerticalScrollChainingMode),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_VerticalScrollModeProperty)
    {
        s_VerticalScrollModeProperty =
            InitializeDependencyProperty(
                L"VerticalScrollMode",
                winrt::name_of<winrt::ScrollMode>(),
                winrt::name_of<winrt::Scroller>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollMode>::BoxValueIfNecessary(Scroller::s_defaultVerticalScrollMode),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_VerticalScrollRailingModeProperty)
    {
        s_VerticalScrollRailingModeProperty =
            InitializeDependencyProperty(
                L"VerticalScrollRailingMode",
                winrt::name_of<winrt::RailingMode>(),
                winrt::name_of<winrt::Scroller>(),
                false /* isAttached */,
                ValueHelper<winrt::RailingMode>::BoxValueIfNecessary(Scroller::s_defaultVerticalScrollRailingMode),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_ZoomChainingModeProperty)
    {
        s_ZoomChainingModeProperty =
            InitializeDependencyProperty(
                L"ZoomChainingMode",
                winrt::name_of<winrt::ChainingMode>(),
                winrt::name_of<winrt::Scroller>(),
                false /* isAttached */,
                ValueHelper<winrt::ChainingMode>::BoxValueIfNecessary(Scroller::s_defaultZoomChainingMode),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_ZoomModeProperty)
    {
        s_ZoomModeProperty =
            InitializeDependencyProperty(
                L"ZoomMode",
                winrt::name_of<winrt::ZoomMode>(),
                winrt::name_of<winrt::Scroller>(),
                false /* isAttached */,
                ValueHelper<winrt::ZoomMode>::BoxValueIfNecessary(Scroller::s_defaultZoomMode),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
}

void ScrollerProperties::ClearProperties()
{
    s_BackgroundProperty = nullptr;
    s_ComputedHorizontalScrollModeProperty = nullptr;
    s_ComputedVerticalScrollModeProperty = nullptr;
    s_ContentProperty = nullptr;
    s_ContentOrientationProperty = nullptr;
    s_HorizontalAnchorRatioProperty = nullptr;
    s_HorizontalScrollChainingModeProperty = nullptr;
    s_HorizontalScrollModeProperty = nullptr;
    s_HorizontalScrollRailingModeProperty = nullptr;
    s_IgnoredInputKindProperty = nullptr;
    s_IsAnchoredAtHorizontalExtentProperty = nullptr;
    s_IsAnchoredAtVerticalExtentProperty = nullptr;
    s_MaxZoomFactorProperty = nullptr;
    s_MinZoomFactorProperty = nullptr;
    s_VerticalAnchorRatioProperty = nullptr;
    s_VerticalScrollChainingModeProperty = nullptr;
    s_VerticalScrollModeProperty = nullptr;
    s_VerticalScrollRailingModeProperty = nullptr;
    s_ZoomChainingModeProperty = nullptr;
    s_ZoomModeProperty = nullptr;
}

void ScrollerProperties::OnPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::Scroller>();
    winrt::get_self<Scroller>(owner)->OnPropertyChanged(args);
}
void ScrollerProperties::OnPropertyChanged_ValidateAnchorRatio(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::Scroller>();

    auto value = winrt::unbox_value<double>(args.NewValue());
    auto coercedValue = value;
    winrt::get_self<Scroller>(owner)->ValidateAnchorRatio(coercedValue);
    if (std::memcmp(&value, &coercedValue, sizeof(value)) != 0) // use memcmp to avoid tripping over nan
    {
        sender.SetValue(args.Property(), winrt::box_value<double>(coercedValue));
        return;
    }

    winrt::get_self<Scroller>(owner)->OnPropertyChanged(args);
}
void ScrollerProperties::OnPropertyChanged_ValidateZoomFactoryBoundary(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::Scroller>();

    auto value = winrt::unbox_value<double>(args.NewValue());
    auto coercedValue = value;
    winrt::get_self<Scroller>(owner)->ValidateZoomFactoryBoundary(coercedValue);
    if (std::memcmp(&value, &coercedValue, sizeof(value)) != 0) // use memcmp to avoid tripping over nan
    {
        sender.SetValue(args.Property(), winrt::box_value<double>(coercedValue));
        return;
    }

    winrt::get_self<Scroller>(owner)->OnPropertyChanged(args);
}

void ScrollerProperties::Background(winrt::Brush const& value)
{
    static_cast<Scroller*>(this)->SetValue(s_BackgroundProperty, ValueHelper<winrt::Brush>::BoxValueIfNecessary(value));
}

winrt::Brush ScrollerProperties::Background()
{
    return ValueHelper<winrt::Brush>::CastOrUnbox(static_cast<Scroller*>(this)->GetValue(s_BackgroundProperty));
}

void ScrollerProperties::ComputedHorizontalScrollMode(winrt::ScrollMode const& value)
{
    static_cast<Scroller*>(this)->SetValue(s_ComputedHorizontalScrollModeProperty, ValueHelper<winrt::ScrollMode>::BoxValueIfNecessary(value));
}

winrt::ScrollMode ScrollerProperties::ComputedHorizontalScrollMode()
{
    return ValueHelper<winrt::ScrollMode>::CastOrUnbox(static_cast<Scroller*>(this)->GetValue(s_ComputedHorizontalScrollModeProperty));
}

void ScrollerProperties::ComputedVerticalScrollMode(winrt::ScrollMode const& value)
{
    static_cast<Scroller*>(this)->SetValue(s_ComputedVerticalScrollModeProperty, ValueHelper<winrt::ScrollMode>::BoxValueIfNecessary(value));
}

winrt::ScrollMode ScrollerProperties::ComputedVerticalScrollMode()
{
    return ValueHelper<winrt::ScrollMode>::CastOrUnbox(static_cast<Scroller*>(this)->GetValue(s_ComputedVerticalScrollModeProperty));
}

void ScrollerProperties::Content(winrt::UIElement const& value)
{
    static_cast<Scroller*>(this)->SetValue(s_ContentProperty, ValueHelper<winrt::UIElement>::BoxValueIfNecessary(value));
}

winrt::UIElement ScrollerProperties::Content()
{
    return ValueHelper<winrt::UIElement>::CastOrUnbox(static_cast<Scroller*>(this)->GetValue(s_ContentProperty));
}

void ScrollerProperties::ContentOrientation(winrt::ContentOrientation const& value)
{
    static_cast<Scroller*>(this)->SetValue(s_ContentOrientationProperty, ValueHelper<winrt::ContentOrientation>::BoxValueIfNecessary(value));
}

winrt::ContentOrientation ScrollerProperties::ContentOrientation()
{
    return ValueHelper<winrt::ContentOrientation>::CastOrUnbox(static_cast<Scroller*>(this)->GetValue(s_ContentOrientationProperty));
}

void ScrollerProperties::HorizontalAnchorRatio(double value)
{
    static_cast<Scroller*>(this)->ValidateAnchorRatio(value);
    static_cast<Scroller*>(this)->SetValue(s_HorizontalAnchorRatioProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double ScrollerProperties::HorizontalAnchorRatio()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<Scroller*>(this)->GetValue(s_HorizontalAnchorRatioProperty));
}

void ScrollerProperties::HorizontalScrollChainingMode(winrt::ChainingMode const& value)
{
    static_cast<Scroller*>(this)->SetValue(s_HorizontalScrollChainingModeProperty, ValueHelper<winrt::ChainingMode>::BoxValueIfNecessary(value));
}

winrt::ChainingMode ScrollerProperties::HorizontalScrollChainingMode()
{
    return ValueHelper<winrt::ChainingMode>::CastOrUnbox(static_cast<Scroller*>(this)->GetValue(s_HorizontalScrollChainingModeProperty));
}

void ScrollerProperties::HorizontalScrollMode(winrt::ScrollMode const& value)
{
    static_cast<Scroller*>(this)->SetValue(s_HorizontalScrollModeProperty, ValueHelper<winrt::ScrollMode>::BoxValueIfNecessary(value));
}

winrt::ScrollMode ScrollerProperties::HorizontalScrollMode()
{
    return ValueHelper<winrt::ScrollMode>::CastOrUnbox(static_cast<Scroller*>(this)->GetValue(s_HorizontalScrollModeProperty));
}

void ScrollerProperties::HorizontalScrollRailingMode(winrt::RailingMode const& value)
{
    static_cast<Scroller*>(this)->SetValue(s_HorizontalScrollRailingModeProperty, ValueHelper<winrt::RailingMode>::BoxValueIfNecessary(value));
}

winrt::RailingMode ScrollerProperties::HorizontalScrollRailingMode()
{
    return ValueHelper<winrt::RailingMode>::CastOrUnbox(static_cast<Scroller*>(this)->GetValue(s_HorizontalScrollRailingModeProperty));
}

void ScrollerProperties::IgnoredInputKind(winrt::InputKind const& value)
{
    static_cast<Scroller*>(this)->SetValue(s_IgnoredInputKindProperty, ValueHelper<winrt::InputKind>::BoxValueIfNecessary(value));
}

winrt::InputKind ScrollerProperties::IgnoredInputKind()
{
    return ValueHelper<winrt::InputKind>::CastOrUnbox(static_cast<Scroller*>(this)->GetValue(s_IgnoredInputKindProperty));
}

void ScrollerProperties::IsAnchoredAtHorizontalExtent(bool value)
{
    static_cast<Scroller*>(this)->SetValue(s_IsAnchoredAtHorizontalExtentProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool ScrollerProperties::IsAnchoredAtHorizontalExtent()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<Scroller*>(this)->GetValue(s_IsAnchoredAtHorizontalExtentProperty));
}

void ScrollerProperties::IsAnchoredAtVerticalExtent(bool value)
{
    static_cast<Scroller*>(this)->SetValue(s_IsAnchoredAtVerticalExtentProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool ScrollerProperties::IsAnchoredAtVerticalExtent()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<Scroller*>(this)->GetValue(s_IsAnchoredAtVerticalExtentProperty));
}

void ScrollerProperties::MaxZoomFactor(double value)
{
    static_cast<Scroller*>(this)->ValidateZoomFactoryBoundary(value);
    static_cast<Scroller*>(this)->SetValue(s_MaxZoomFactorProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double ScrollerProperties::MaxZoomFactor()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<Scroller*>(this)->GetValue(s_MaxZoomFactorProperty));
}

void ScrollerProperties::MinZoomFactor(double value)
{
    static_cast<Scroller*>(this)->ValidateZoomFactoryBoundary(value);
    static_cast<Scroller*>(this)->SetValue(s_MinZoomFactorProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double ScrollerProperties::MinZoomFactor()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<Scroller*>(this)->GetValue(s_MinZoomFactorProperty));
}

void ScrollerProperties::VerticalAnchorRatio(double value)
{
    static_cast<Scroller*>(this)->ValidateAnchorRatio(value);
    static_cast<Scroller*>(this)->SetValue(s_VerticalAnchorRatioProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double ScrollerProperties::VerticalAnchorRatio()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<Scroller*>(this)->GetValue(s_VerticalAnchorRatioProperty));
}

void ScrollerProperties::VerticalScrollChainingMode(winrt::ChainingMode const& value)
{
    static_cast<Scroller*>(this)->SetValue(s_VerticalScrollChainingModeProperty, ValueHelper<winrt::ChainingMode>::BoxValueIfNecessary(value));
}

winrt::ChainingMode ScrollerProperties::VerticalScrollChainingMode()
{
    return ValueHelper<winrt::ChainingMode>::CastOrUnbox(static_cast<Scroller*>(this)->GetValue(s_VerticalScrollChainingModeProperty));
}

void ScrollerProperties::VerticalScrollMode(winrt::ScrollMode const& value)
{
    static_cast<Scroller*>(this)->SetValue(s_VerticalScrollModeProperty, ValueHelper<winrt::ScrollMode>::BoxValueIfNecessary(value));
}

winrt::ScrollMode ScrollerProperties::VerticalScrollMode()
{
    return ValueHelper<winrt::ScrollMode>::CastOrUnbox(static_cast<Scroller*>(this)->GetValue(s_VerticalScrollModeProperty));
}

void ScrollerProperties::VerticalScrollRailingMode(winrt::RailingMode const& value)
{
    static_cast<Scroller*>(this)->SetValue(s_VerticalScrollRailingModeProperty, ValueHelper<winrt::RailingMode>::BoxValueIfNecessary(value));
}

winrt::RailingMode ScrollerProperties::VerticalScrollRailingMode()
{
    return ValueHelper<winrt::RailingMode>::CastOrUnbox(static_cast<Scroller*>(this)->GetValue(s_VerticalScrollRailingModeProperty));
}

void ScrollerProperties::ZoomChainingMode(winrt::ChainingMode const& value)
{
    static_cast<Scroller*>(this)->SetValue(s_ZoomChainingModeProperty, ValueHelper<winrt::ChainingMode>::BoxValueIfNecessary(value));
}

winrt::ChainingMode ScrollerProperties::ZoomChainingMode()
{
    return ValueHelper<winrt::ChainingMode>::CastOrUnbox(static_cast<Scroller*>(this)->GetValue(s_ZoomChainingModeProperty));
}

void ScrollerProperties::ZoomMode(winrt::ZoomMode const& value)
{
    static_cast<Scroller*>(this)->SetValue(s_ZoomModeProperty, ValueHelper<winrt::ZoomMode>::BoxValueIfNecessary(value));
}

winrt::ZoomMode ScrollerProperties::ZoomMode()
{
    return ValueHelper<winrt::ZoomMode>::CastOrUnbox(static_cast<Scroller*>(this)->GetValue(s_ZoomModeProperty));
}

winrt::event_token ScrollerProperties::AnchorRequested(winrt::TypedEventHandler<winrt::Scroller, winrt::ScrollerAnchorRequestedEventArgs> const& value)
{
    return m_anchorRequestedEventSource.add(value);
}

void ScrollerProperties::AnchorRequested(winrt::event_token const& token)
{
    m_anchorRequestedEventSource.remove(token);
}

winrt::event_token ScrollerProperties::BringingIntoView(winrt::TypedEventHandler<winrt::Scroller, winrt::ScrollerBringingIntoViewEventArgs> const& value)
{
    return m_bringingIntoViewEventSource.add(value);
}

void ScrollerProperties::BringingIntoView(winrt::event_token const& token)
{
    m_bringingIntoViewEventSource.remove(token);
}

winrt::event_token ScrollerProperties::ChangingOffsets(winrt::TypedEventHandler<winrt::Scroller, winrt::ScrollerChangingOffsetsEventArgs> const& value)
{
    return m_changingOffsetsEventSource.add(value);
}

void ScrollerProperties::ChangingOffsets(winrt::event_token const& token)
{
    m_changingOffsetsEventSource.remove(token);
}

winrt::event_token ScrollerProperties::ChangingZoomFactor(winrt::TypedEventHandler<winrt::Scroller, winrt::ScrollerChangingZoomFactorEventArgs> const& value)
{
    return m_changingZoomFactorEventSource.add(value);
}

void ScrollerProperties::ChangingZoomFactor(winrt::event_token const& token)
{
    m_changingZoomFactorEventSource.remove(token);
}

winrt::event_token ScrollerProperties::ExtentChanged(winrt::TypedEventHandler<winrt::Scroller, winrt::IInspectable> const& value)
{
    return m_extentChangedEventSource.add(value);
}

void ScrollerProperties::ExtentChanged(winrt::event_token const& token)
{
    m_extentChangedEventSource.remove(token);
}

winrt::event_token ScrollerProperties::StateChanged(winrt::TypedEventHandler<winrt::Scroller, winrt::IInspectable> const& value)
{
    return m_stateChangedEventSource.add(value);
}

void ScrollerProperties::StateChanged(winrt::event_token const& token)
{
    m_stateChangedEventSource.remove(token);
}

winrt::event_token ScrollerProperties::ViewChangeCompleted(winrt::TypedEventHandler<winrt::Scroller, winrt::ScrollerViewChangeCompletedEventArgs> const& value)
{
    return m_viewChangeCompletedEventSource.add(value);
}

void ScrollerProperties::ViewChangeCompleted(winrt::event_token const& token)
{
    m_viewChangeCompletedEventSource.remove(token);
}

winrt::event_token ScrollerProperties::ViewChanged(winrt::TypedEventHandler<winrt::Scroller, winrt::IInspectable> const& value)
{
    return m_viewChangedEventSource.add(value);
}

void ScrollerProperties::ViewChanged(winrt::event_token const& token)
{
    m_viewChangedEventSource.remove(token);
}
