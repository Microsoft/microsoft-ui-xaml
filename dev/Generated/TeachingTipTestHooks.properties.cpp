// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "TeachingTipTestHooks.h"

CppWinRTActivatableClassWithBasicFactory(TeachingTipTestHooks)


TeachingTipTestHooksProperties::TeachingTipTestHooksProperties()
    : m_effectiveHeroContentPlacementChangedEventSource{static_cast<TeachingTipTestHooks*>(this)}
    , m_effectivePlacementChangedEventSource{static_cast<TeachingTipTestHooks*>(this)}
    , m_idleStatusChangedEventSource{static_cast<TeachingTipTestHooks*>(this)}
    , m_offsetChangedEventSource{static_cast<TeachingTipTestHooks*>(this)}
    , m_openedStatusChangedEventSource{static_cast<TeachingTipTestHooks*>(this)}
    , m_subtitleVisibilityChangedEventSource{static_cast<TeachingTipTestHooks*>(this)}
    , m_titleVisibilityChangedEventSource{static_cast<TeachingTipTestHooks*>(this)}
{
}

void TeachingTipTestHooksProperties::EnsureProperties()
{
}

void TeachingTipTestHooksProperties::ClearProperties()
{
}

winrt::event_token TeachingTipTestHooksProperties::EffectiveHeroContentPlacementChanged(winrt::TypedEventHandler<winrt::TeachingTip, winrt::IInspectable> const& value)
{
    return m_effectiveHeroContentPlacementChangedEventSource.add(value);
}

void TeachingTipTestHooksProperties::EffectiveHeroContentPlacementChanged(winrt::event_token const& token)
{
    m_effectiveHeroContentPlacementChangedEventSource.remove(token);
}

winrt::event_token TeachingTipTestHooksProperties::EffectivePlacementChanged(winrt::TypedEventHandler<winrt::TeachingTip, winrt::IInspectable> const& value)
{
    return m_effectivePlacementChangedEventSource.add(value);
}

void TeachingTipTestHooksProperties::EffectivePlacementChanged(winrt::event_token const& token)
{
    m_effectivePlacementChangedEventSource.remove(token);
}

winrt::event_token TeachingTipTestHooksProperties::IdleStatusChanged(winrt::TypedEventHandler<winrt::TeachingTip, winrt::IInspectable> const& value)
{
    return m_idleStatusChangedEventSource.add(value);
}

void TeachingTipTestHooksProperties::IdleStatusChanged(winrt::event_token const& token)
{
    m_idleStatusChangedEventSource.remove(token);
}

winrt::event_token TeachingTipTestHooksProperties::OffsetChanged(winrt::TypedEventHandler<winrt::TeachingTip, winrt::IInspectable> const& value)
{
    return m_offsetChangedEventSource.add(value);
}

void TeachingTipTestHooksProperties::OffsetChanged(winrt::event_token const& token)
{
    m_offsetChangedEventSource.remove(token);
}

winrt::event_token TeachingTipTestHooksProperties::OpenedStatusChanged(winrt::TypedEventHandler<winrt::TeachingTip, winrt::IInspectable> const& value)
{
    return m_openedStatusChangedEventSource.add(value);
}

void TeachingTipTestHooksProperties::OpenedStatusChanged(winrt::event_token const& token)
{
    m_openedStatusChangedEventSource.remove(token);
}

winrt::event_token TeachingTipTestHooksProperties::SubtitleVisibilityChanged(winrt::TypedEventHandler<winrt::TeachingTip, winrt::IInspectable> const& value)
{
    return m_subtitleVisibilityChangedEventSource.add(value);
}

void TeachingTipTestHooksProperties::SubtitleVisibilityChanged(winrt::event_token const& token)
{
    m_subtitleVisibilityChangedEventSource.remove(token);
}

winrt::event_token TeachingTipTestHooksProperties::TitleVisibilityChanged(winrt::TypedEventHandler<winrt::TeachingTip, winrt::IInspectable> const& value)
{
    return m_titleVisibilityChangedEventSource.add(value);
}

void TeachingTipTestHooksProperties::TitleVisibilityChanged(winrt::event_token const& token)
{
    m_titleVisibilityChangedEventSource.remove(token);
}
