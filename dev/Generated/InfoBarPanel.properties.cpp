// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "InfoBarPanel.h"

namespace winrt::Microsoft::UI::Xaml::Controls::Primitives
{
    CppWinRTActivatableClassWithDPFactory(InfoBarPanel)
}

#include "InfoBarPanel.g.cpp"

GlobalDependencyProperty InfoBarPanelProperties::s_PaddingInHorizontalOrientationProperty{ nullptr };
GlobalDependencyProperty InfoBarPanelProperties::s_PaddingInVerticalOrientationProperty{ nullptr };
GlobalDependencyProperty InfoBarPanelProperties::s_SpacingInHorizontalOrientationProperty{ nullptr };
GlobalDependencyProperty InfoBarPanelProperties::s_SpacingInVerticalOrientationProperty{ nullptr };

InfoBarPanelProperties::InfoBarPanelProperties()
{
    EnsureProperties();
}

void InfoBarPanelProperties::EnsureProperties()
{
    if (!s_PaddingInHorizontalOrientationProperty)
    {
        s_PaddingInHorizontalOrientationProperty =
            InitializeDependencyProperty(
                L"PaddingInHorizontalOrientation",
                winrt::name_of<winrt::Thickness>(),
                winrt::name_of<winrt::InfoBarPanel>(),
                false /* isAttached */,
                ValueHelper<winrt::Thickness>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_PaddingInVerticalOrientationProperty)
    {
        s_PaddingInVerticalOrientationProperty =
            InitializeDependencyProperty(
                L"PaddingInVerticalOrientation",
                winrt::name_of<winrt::Thickness>(),
                winrt::name_of<winrt::InfoBarPanel>(),
                false /* isAttached */,
                ValueHelper<winrt::Thickness>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_SpacingInHorizontalOrientationProperty)
    {
        s_SpacingInHorizontalOrientationProperty =
            InitializeDependencyProperty(
                L"SpacingInHorizontalOrientation",
                winrt::name_of<winrt::Thickness>(),
                winrt::name_of<winrt::InfoBarPanel>(),
                true /* isAttached */,
                ValueHelper<winrt::Thickness>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_SpacingInVerticalOrientationProperty)
    {
        s_SpacingInVerticalOrientationProperty =
            InitializeDependencyProperty(
                L"SpacingInVerticalOrientation",
                winrt::name_of<winrt::Thickness>(),
                winrt::name_of<winrt::InfoBarPanel>(),
                true /* isAttached */,
                ValueHelper<winrt::Thickness>::BoxedDefaultValue(),
                nullptr);
    }
}

void InfoBarPanelProperties::ClearProperties()
{
    s_PaddingInHorizontalOrientationProperty = nullptr;
    s_PaddingInVerticalOrientationProperty = nullptr;
    s_SpacingInHorizontalOrientationProperty = nullptr;
    s_SpacingInVerticalOrientationProperty = nullptr;
}

void InfoBarPanelProperties::PaddingInHorizontalOrientation(winrt::Thickness const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<InfoBarPanel*>(this)->SetValue(s_PaddingInHorizontalOrientationProperty, ValueHelper<winrt::Thickness>::BoxValueIfNecessary(value));
    }
}

winrt::Thickness InfoBarPanelProperties::PaddingInHorizontalOrientation()
{
    return ValueHelper<winrt::Thickness>::CastOrUnbox(static_cast<InfoBarPanel*>(this)->GetValue(s_PaddingInHorizontalOrientationProperty));
}

void InfoBarPanelProperties::PaddingInVerticalOrientation(winrt::Thickness const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<InfoBarPanel*>(this)->SetValue(s_PaddingInVerticalOrientationProperty, ValueHelper<winrt::Thickness>::BoxValueIfNecessary(value));
    }
}

winrt::Thickness InfoBarPanelProperties::PaddingInVerticalOrientation()
{
    return ValueHelper<winrt::Thickness>::CastOrUnbox(static_cast<InfoBarPanel*>(this)->GetValue(s_PaddingInVerticalOrientationProperty));
}


void InfoBarPanelProperties::SetSpacingInHorizontalOrientation(winrt::DependencyObject const& target, winrt::Thickness const& value)
{
    target.SetValue(s_SpacingInHorizontalOrientationProperty, ValueHelper<winrt::Thickness>::BoxValueIfNecessary(value));
}

winrt::Thickness InfoBarPanelProperties::GetSpacingInHorizontalOrientation(winrt::DependencyObject const& target)
{
    return ValueHelper<winrt::Thickness>::CastOrUnbox(target.GetValue(s_SpacingInHorizontalOrientationProperty));
}


void InfoBarPanelProperties::SetSpacingInVerticalOrientation(winrt::DependencyObject const& target, winrt::Thickness const& value)
{
    target.SetValue(s_SpacingInVerticalOrientationProperty, ValueHelper<winrt::Thickness>::BoxValueIfNecessary(value));
}

winrt::Thickness InfoBarPanelProperties::GetSpacingInVerticalOrientation(winrt::DependencyObject const& target)
{
    return ValueHelper<winrt::Thickness>::CastOrUnbox(target.GetValue(s_SpacingInVerticalOrientationProperty));
}
