﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include "pch.h"
#include "common.h"

#include "BreadcrumbItem.g.h"

class BreadcrumbItem :
    public ReferenceTracker<BreadcrumbItem, winrt::implementation::BreadcrumbItemT>
{
public:
    BreadcrumbItem();
    ~BreadcrumbItem();

    // IFrameworkElement
    void OnApplyTemplate();
    void RevokeListeners();

    // internal
    void ResetVisualProperties();
    void SetPropertiesForLastNode();
    void SetPropertiesForEllipsisNode();
    void SetItemsRepeater(const winrt::Breadcrumb& parent);
    void SetFlyoutDataTemplate(const winrt::IInspectable& newDataTemplate);

private:
    void OnLoadedEvent(const winrt::IInspectable& sender, const winrt::RoutedEventArgs& args);
    void OnEllipsisItemClick(const winrt::IInspectable& sender, const winrt::RoutedEventArgs& args);
    void OnBreadcrumbItemClick(const winrt::IInspectable& sender, const winrt::RoutedEventArgs & args);
    void OnFlyoutElementPreparedEvent(winrt::ItemsRepeater sender, winrt::ItemsRepeaterElementPreparedEventArgs args);
    void OnFlyoutElementKeyDownEvent(const winrt::IInspectable& sender, const winrt::KeyRoutedEventArgs&);
    void OnFlyoutElementClickEvent(const winrt::IInspectable& sender, const winrt::RoutedEventArgs& args);

    void OpenFlyout();
    void CloseFlyout();

    void InstantiateFlyout();
    winrt::IInspectable CloneEllipsisItemSource(const winrt::Collections::IVector<winrt::IInspectable>& ellipsisItemsSource);

    bool m_isEllipsisNode{};
    bool m_isLastNode{};
    bool m_isChevronVisible{};
    winrt::GridLength m_chevronOriginalWidth;

    tracker_ref<winrt::Button> m_breadcrumbItemButton{ this };
    tracker_ref<winrt::Grid> m_rootGrid{ this };
    tracker_ref<winrt::Grid> m_secondaryButtonGrid{ this };
    tracker_ref<winrt::Grid> m_splitButtonBorder{ this };
    tracker_ref<winrt::Button> m_primaryButton{ this };
    tracker_ref<winrt::Button> m_secondaryButton{ this };
    tracker_ref<winrt::FlyoutBase> m_flyout{ this };
    tracker_ref<winrt::ItemsRepeater> m_flyoutRepeater{ this };
    tracker_ref<winrt::Breadcrumb> m_parentBreadcrumb{ this };
    tracker_ref<winrt::DataTemplate> m_flyoutDataTemplate{ this };

    winrt::Button::Loaded_revoker m_breadcrumbItemButtonLoadedRevoker{};
    winrt::Button::Click_revoker m_breadcrumbItemButtonClickRevoker{};
    winrt::ItemsRepeater::ElementPrepared_revoker m_flyoutRepeaterElementPreparedRevoker{};
    winrt::Button::Click_revoker m_clickRevoker{};

    winrt::UIElement::PointerPressed_revoker m_pointerPressedRevoker{};
};
