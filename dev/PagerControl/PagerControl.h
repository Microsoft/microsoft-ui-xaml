﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include "pch.h"
#include "common.h"

#include "PagerControl.g.h"
#include "PagerControl.properties.h"

class PagerControl :
    public ReferenceTracker<PagerControl, winrt::implementation::PagerControlT>,
    public PagerControlProperties
{

public:
    PagerControl();
    ~PagerControl();

    // IFrameworkElement
    void OnApplyTemplate();
    void OnPropertyChanged(const winrt::DependencyPropertyChangedEventArgs& args);

    void RaiseSelectedIndexChanged();
    void OnDisplayModeChanged();
    void UpdateDisplayModeAutoState();
    void UpdateTemplateSettingElementLists();
    void OnSelectedIndexChanged(const int oldIndex);
    void OnButtonVisibilityChanged(const winrt::PagerControlButtonVisibility visibility,
        const winrt::hstring visibleStateName,
        const winrt::hstring hiddenStateName,
        const int hiddenOnEdgeSelectedIndexCriteria);
    void UpdateOnEdgeButtonVisualStates();

    void ComboBoxSelectionChanged(const winrt::IInspectable& sender, const winrt::SelectionChangedEventArgs& args);
    void NumberBoxValueChanged(const winrt::IInspectable& sender, const winrt::NumberBoxValueChangedEventArgs& args);

    void FirstButtonClicked(const IInspectable& sender, const winrt::RoutedEventArgs& args);
    void PreviousButtonClicked(const IInspectable& sender, const winrt::RoutedEventArgs& args);
    void NextButtonClicked(const IInspectable& sender, const winrt::RoutedEventArgs& args);
    void LastButtonClicked(const IInspectable& sender, const winrt::RoutedEventArgs& args);

private:
    int m_lastSelectedPageIndex = -1;

    tracker_ref<winrt::ComboBox> m_comboBox{ this };
    tracker_ref<winrt::NumberBox> m_numberBox{ this };

    winrt::ComboBox::SelectionChanged_revoker m_comboBoxSelectionChangedRevoker{};
    winrt::NumberBox::ValueChanged_revoker m_numberBoxValueChangedRevoker{};
    winrt::Button::Click_revoker m_firstPageButtonClickRevoker{};
    winrt::Button::Click_revoker m_previousPageButtonClickRevoker{};
    winrt::Button::Click_revoker m_nextPageButtonClickRevoker{};
    winrt::Button::Click_revoker m_lastPageButtonClickRevoker{};

    winrt::IObservableVector<IInspectable> m_comboBoxEntries{};
    winrt::IObservableVector<IInspectable> m_numberPanelElements{};

};

