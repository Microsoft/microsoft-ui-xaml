// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class TeachingTipProperties
{
public:
    TeachingTipProperties();

    void ActionButtonCommand(winrt::ICommand const& value);
    winrt::ICommand ActionButtonCommand();

    void ActionButtonCommandParameter(winrt::IInspectable const& value);
    winrt::IInspectable ActionButtonCommandParameter();

    void ActionButtonStyle(winrt::Style const& value);
    winrt::Style ActionButtonStyle();

    void ActionButtonText(winrt::hstring const& value);
    winrt::hstring ActionButtonText();

    void CloseButtonCommand(winrt::ICommand const& value);
    winrt::ICommand CloseButtonCommand();

    void CloseButtonCommandParameter(winrt::IInspectable const& value);
    winrt::IInspectable CloseButtonCommandParameter();

    void CloseButtonStyle(winrt::Style const& value);
    winrt::Style CloseButtonStyle();

    void CloseButtonText(winrt::hstring const& value);
    winrt::hstring CloseButtonText();

    void HeroContent(winrt::UIElement const& value);
    winrt::UIElement HeroContent();

    void HeroContentPlacement(winrt::TeachingTipHeroContentPlacementMode const& value);
    winrt::TeachingTipHeroContentPlacementMode HeroContentPlacement();

    void IconSource(winrt::IconSource const& value);
    winrt::IconSource IconSource();

    void IsLightDismissEnabled(bool value);
    bool IsLightDismissEnabled();

    void IsOpen(bool value);
    bool IsOpen();

    void Placement(winrt::TeachingTipPlacementMode const& value);
    winrt::TeachingTipPlacementMode Placement();

    void Subtext(winrt::hstring const& value);
    winrt::hstring Subtext();

    void Target(winrt::FrameworkElement const& value);
    winrt::FrameworkElement Target();

    void TargetOffset(winrt::Thickness const& value);
    winrt::Thickness TargetOffset();

    void TemplateSettings(winrt::TeachingTipTemplateSettings const& value);
    winrt::TeachingTipTemplateSettings TemplateSettings();

    void Title(winrt::hstring const& value);
    winrt::hstring Title();

    static winrt::DependencyProperty ActionButtonCommandProperty() { return s_ActionButtonCommandProperty; }
    static winrt::DependencyProperty ActionButtonCommandParameterProperty() { return s_ActionButtonCommandParameterProperty; }
    static winrt::DependencyProperty ActionButtonStyleProperty() { return s_ActionButtonStyleProperty; }
    static winrt::DependencyProperty ActionButtonTextProperty() { return s_ActionButtonTextProperty; }
    static winrt::DependencyProperty CloseButtonCommandProperty() { return s_CloseButtonCommandProperty; }
    static winrt::DependencyProperty CloseButtonCommandParameterProperty() { return s_CloseButtonCommandParameterProperty; }
    static winrt::DependencyProperty CloseButtonStyleProperty() { return s_CloseButtonStyleProperty; }
    static winrt::DependencyProperty CloseButtonTextProperty() { return s_CloseButtonTextProperty; }
    static winrt::DependencyProperty HeroContentProperty() { return s_HeroContentProperty; }
    static winrt::DependencyProperty HeroContentPlacementProperty() { return s_HeroContentPlacementProperty; }
    static winrt::DependencyProperty IconSourceProperty() { return s_IconSourceProperty; }
    static winrt::DependencyProperty IsLightDismissEnabledProperty() { return s_IsLightDismissEnabledProperty; }
    static winrt::DependencyProperty IsOpenProperty() { return s_IsOpenProperty; }
    static winrt::DependencyProperty PlacementProperty() { return s_PlacementProperty; }
    static winrt::DependencyProperty SubtextProperty() { return s_SubtextProperty; }
    static winrt::DependencyProperty TargetProperty() { return s_TargetProperty; }
    static winrt::DependencyProperty TargetOffsetProperty() { return s_TargetOffsetProperty; }
    static winrt::DependencyProperty TemplateSettingsProperty() { return s_TemplateSettingsProperty; }
    static winrt::DependencyProperty TitleProperty() { return s_TitleProperty; }

    static GlobalDependencyProperty s_ActionButtonCommandProperty;
    static GlobalDependencyProperty s_ActionButtonCommandParameterProperty;
    static GlobalDependencyProperty s_ActionButtonStyleProperty;
    static GlobalDependencyProperty s_ActionButtonTextProperty;
    static GlobalDependencyProperty s_CloseButtonCommandProperty;
    static GlobalDependencyProperty s_CloseButtonCommandParameterProperty;
    static GlobalDependencyProperty s_CloseButtonStyleProperty;
    static GlobalDependencyProperty s_CloseButtonTextProperty;
    static GlobalDependencyProperty s_HeroContentProperty;
    static GlobalDependencyProperty s_HeroContentPlacementProperty;
    static GlobalDependencyProperty s_IconSourceProperty;
    static GlobalDependencyProperty s_IsLightDismissEnabledProperty;
    static GlobalDependencyProperty s_IsOpenProperty;
    static GlobalDependencyProperty s_PlacementProperty;
    static GlobalDependencyProperty s_SubtextProperty;
    static GlobalDependencyProperty s_TargetProperty;
    static GlobalDependencyProperty s_TargetOffsetProperty;
    static GlobalDependencyProperty s_TemplateSettingsProperty;
    static GlobalDependencyProperty s_TitleProperty;

    winrt::event_token ActionButtonClick(winrt::TypedEventHandler<winrt::TeachingTip, winrt::IInspectable> const& value);
    void ActionButtonClick(winrt::event_token const& token);
    winrt::event_token CloseButtonClick(winrt::TypedEventHandler<winrt::TeachingTip, winrt::IInspectable> const& value);
    void CloseButtonClick(winrt::event_token const& token);
    winrt::event_token Closed(winrt::TypedEventHandler<winrt::TeachingTip, winrt::TeachingTipClosedEventArgs> const& value);
    void Closed(winrt::event_token const& token);
    winrt::event_token Closing(winrt::TypedEventHandler<winrt::TeachingTip, winrt::TeachingTipClosingEventArgs> const& value);
    void Closing(winrt::event_token const& token);

    event_source<winrt::TypedEventHandler<winrt::TeachingTip, winrt::IInspectable>> m_actionButtonClickEventSource;
    event_source<winrt::TypedEventHandler<winrt::TeachingTip, winrt::IInspectable>> m_closeButtonClickEventSource;
    event_source<winrt::TypedEventHandler<winrt::TeachingTip, winrt::TeachingTipClosedEventArgs>> m_closedEventSource;
    event_source<winrt::TypedEventHandler<winrt::TeachingTip, winrt::TeachingTipClosingEventArgs>> m_closingEventSource;

    static void EnsureProperties();
    static void ClearProperties();

    static void OnPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);
};
