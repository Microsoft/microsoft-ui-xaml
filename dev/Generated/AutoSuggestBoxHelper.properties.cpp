// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "AutoSuggestBoxHelper.h"

CppWinRTActivatableClassWithDPFactory(AutoSuggestBoxHelper)

GlobalDependencyProperty AutoSuggestBoxHelperProperties::s_KeepInteriorCornersSquareProperty{ nullptr };

AutoSuggestBoxHelperProperties::AutoSuggestBoxHelperProperties()
{
    EnsureProperties();
}

void AutoSuggestBoxHelperProperties::EnsureProperties()
{
    if (!s_KeepInteriorCornersSquareProperty)
    {
        s_KeepInteriorCornersSquareProperty =
            InitializeDependencyProperty(
                L"KeepInteriorCornersSquare",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::AutoSuggestBoxHelper>(),
                true /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(false),
                &AutoSuggestBoxHelper::OnKeepInteriorCornersSquarePropertyChanged);
    }
}

void AutoSuggestBoxHelperProperties::ClearProperties()
{
    s_KeepInteriorCornersSquareProperty = nullptr;
}


void AutoSuggestBoxHelperProperties::SetKeepInteriorCornersSquare(winrt::AutoSuggestBox const& target, bool value)
{
    target.SetValue(s_KeepInteriorCornersSquareProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool AutoSuggestBoxHelperProperties::GetKeepInteriorCornersSquare(winrt::AutoSuggestBox const& target)
{
    return ValueHelper<bool>::CastOrUnbox(target.GetValue(s_KeepInteriorCornersSquareProperty));
}
