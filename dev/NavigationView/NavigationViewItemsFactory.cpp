﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#include "pch.h"
#include "NavigationViewItemsFactory.h"
#include "NavigationViewItemBase.h"
#include "NavigationViewItem.h"
#include "ItemTemplateWrapper.h"
#include <ElementFactoryRecycleArgs.h>

void NavigationViewItemsFactory::UserElementFactory(winrt::IInspectable const& newValue)
{
    m_itemTemplateWrapper = newValue.try_as<winrt::IElementFactoryShim>();
    if (!m_itemTemplateWrapper)
    {
        // ItemTemplate set does not implement IElementFactoryShim. We also 
        // want to support DataTemplate and DataTemplateSelectors automagically.
        if (auto dataTemplate = newValue.try_as<winrt::DataTemplate>())
        {
            m_itemTemplateWrapper = winrt::make<ItemTemplateWrapper>(dataTemplate);
        }
        else if (auto selector = newValue.try_as<winrt::DataTemplateSelector>())
        {
            m_itemTemplateWrapper = winrt::make<ItemTemplateWrapper>(selector);
        }
    }

    navigationViewItemPool = std::vector<winrt::NavigationViewItem>();
}

// Retrieve the element that will be displayed for a specific data item.
// If the resolved element is not derived from NavigationViewItemBase, wrap in a NavigationViewItem before returning.
winrt::UIElement NavigationViewItemsFactory::GetElementCore(winrt::ElementFactoryGetArgs const& args)
{
    auto const newContent = [itemTemplateWrapper = m_itemTemplateWrapper, args]() {
        if (itemTemplateWrapper)
        {
            return itemTemplateWrapper.GetElement(args).as<winrt::IInspectable>();
        }
        return args.Data();
    }();

    // Element is already of expected type, just return it
    if (auto const newItem = newContent.try_as<winrt::NavigationViewItemBase>())
    {
        return newItem;
    }

    // Get or create a wrapping container for the data
    auto const nvi = [this]() {
        if (navigationViewItemPool.size() > 0)
        {
            auto nvi = navigationViewItemPool.back();
            navigationViewItemPool.pop_back();
            return nvi;
        }
        return winrt::make_self<NavigationViewItem>().try_as<winrt::NavigationViewItem>();
    }();

    auto const nviImpl = winrt::get_self<NavigationViewItem>(nvi);
    nviImpl->CreatedByNavigationViewItemsFactory(true);

    // If a user provided item template exists, just pass the template and data down to the ContentPresenter of the NavigationViewItem
    if (m_itemTemplateWrapper)
    {
        if (auto itemTemplateWrapper = m_itemTemplateWrapper.try_as<ItemTemplateWrapper>())
        {
            // Recycle newContent
            auto const tempArgs = winrt::make_self<ElementFactoryRecycleArgs>();
            tempArgs->Element(newContent.try_as<winrt::UIElement>());
            m_itemTemplateWrapper.RecycleElement(static_cast<winrt::ElementFactoryRecycleArgs>(*tempArgs));


            nviImpl->Content(args.Data());
            nviImpl->ContentTemplate(itemTemplateWrapper->Template());
            nviImpl->ContentTemplateSelector(itemTemplateWrapper->TemplateSelector());
            return *nviImpl;
        }
    }

    nviImpl->Content(newContent);
    return *nviImpl;
}

void NavigationViewItemsFactory::RecycleElementCore(winrt::ElementFactoryRecycleArgs const& args)
{
    if (auto element = args.Element())
    {
        if (auto nvi = element.try_as<winrt::NavigationViewItem>())
        {
            auto const nviImpl = winrt::get_self<NavigationViewItem>(nvi);
            // Check whether we wrapped the element in a NavigationViewItem ourselves.
            // If yes, we are responsible for recycling it.
            if (nviImpl->CreatedByNavigationViewItemsFactory())
            {
                nviImpl->CreatedByNavigationViewItemsFactory(false);
                args.Element(nullptr);

                // Retain the NVI that we created for future re-use
                navigationViewItemPool.push_back(nvi);

                // Retrieve the proper element that requires recycling for a user defined item template
                // and update the args correspondingly
                if (m_itemTemplateWrapper)
                {
                    // TODO: Retrieve and element and add to the args
                }
            }
        }

        if (m_itemTemplateWrapper)
        {
            m_itemTemplateWrapper.RecycleElement(args);
        }
        else
        {
            // We want to unlink the containers from the parent repeater
            // in case we are required to move it to a different repeater.
            if (auto panel = args.Parent().try_as<winrt::Panel>())
            {
                auto children = panel.Children();
                unsigned int childIndex = 0;
                if (children.IndexOf(element, childIndex))
                {
                    children.RemoveAt(childIndex);
                }
            }
        }
    }
}
