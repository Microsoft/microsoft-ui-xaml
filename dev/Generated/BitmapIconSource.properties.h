// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class BitmapIconSourceProperties
{
public:
    BitmapIconSourceProperties();

    void ShowAsMonochrome(bool value);
    bool ShowAsMonochrome();

    void UriSource(winrt::Uri const& value);
    winrt::Uri UriSource();

    static winrt::DependencyProperty ShowAsMonochromeProperty() { return s_ShowAsMonochromeProperty; }
    static winrt::DependencyProperty UriSourceProperty() { return s_UriSourceProperty; }

    static GlobalDependencyProperty s_ShowAsMonochromeProperty;
    static GlobalDependencyProperty s_UriSourceProperty;

    static void EnsureProperties();
    static void ClearProperties();

    static void OnShowAsMonochromePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnUriSourcePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);
};
