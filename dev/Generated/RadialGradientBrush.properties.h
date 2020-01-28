// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class RadialGradientBrushProperties
{
public:
    RadialGradientBrushProperties();

    void EllipseCenter(winrt::Point const& value);
    winrt::Point EllipseCenter();

    void EllipseRadius(winrt::Point const& value);
    winrt::Point EllipseRadius();

    void GradientOriginOffset(winrt::Point const& value);
    winrt::Point GradientOriginOffset();

    void InterpolationSpace(winrt::CompositionColorSpace const& value);
    winrt::CompositionColorSpace InterpolationSpace();

    void MappingMode(winrt::BrushMappingMode const& value);
    winrt::BrushMappingMode MappingMode();

    void SpreadMethod(winrt::GradientSpreadMethod const& value);
    winrt::GradientSpreadMethod SpreadMethod();

    static winrt::DependencyProperty EllipseCenterProperty() { return s_EllipseCenterProperty; }
    static winrt::DependencyProperty EllipseRadiusProperty() { return s_EllipseRadiusProperty; }
    static winrt::DependencyProperty GradientOriginOffsetProperty() { return s_GradientOriginOffsetProperty; }
    static winrt::DependencyProperty InterpolationSpaceProperty() { return s_InterpolationSpaceProperty; }
    static winrt::DependencyProperty MappingModeProperty() { return s_MappingModeProperty; }
    static winrt::DependencyProperty SpreadMethodProperty() { return s_SpreadMethodProperty; }

    static GlobalDependencyProperty s_EllipseCenterProperty;
    static GlobalDependencyProperty s_EllipseRadiusProperty;
    static GlobalDependencyProperty s_GradientOriginOffsetProperty;
    static GlobalDependencyProperty s_InterpolationSpaceProperty;
    static GlobalDependencyProperty s_MappingModeProperty;
    static GlobalDependencyProperty s_SpreadMethodProperty;

    static void EnsureProperties();
    static void ClearProperties();

    static void OnEllipseCenterPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnEllipseRadiusPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnGradientOriginOffsetPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnInterpolationSpacePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnMappingModePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnSpreadMethodPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);
};
