// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class ExpanderTemplateSettingsProperties
{
public:
    ExpanderTemplateSettingsProperties();

    void ContentHeight(double value);
    double ContentHeight();

    void Dispatcher(winrt::CoreDispatcher const& value);
    winrt::CoreDispatcher Dispatcher();

    void NegativeContentHeight(double value);
    double NegativeContentHeight();

    static winrt::DependencyProperty ContentHeightProperty() { return s_ContentHeightProperty; }
    static winrt::DependencyProperty DispatcherProperty() { return s_DispatcherProperty; }
    static winrt::DependencyProperty NegativeContentHeightProperty() { return s_NegativeContentHeightProperty; }

    static GlobalDependencyProperty s_ContentHeightProperty;
    static GlobalDependencyProperty s_DispatcherProperty;
    static GlobalDependencyProperty s_NegativeContentHeightProperty;

    static void EnsureProperties();
    static void ClearProperties();
};
