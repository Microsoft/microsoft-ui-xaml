// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "TreeViewNode.h"

CppWinRTActivatableClassWithDPFactory(TreeViewNode)

GlobalDependencyProperty TreeViewNodeProperties::s_ContentProperty{ nullptr };
GlobalDependencyProperty TreeViewNodeProperties::s_DepthProperty{ nullptr };
GlobalDependencyProperty TreeViewNodeProperties::s_HasChildrenProperty{ nullptr };
GlobalDependencyProperty TreeViewNodeProperties::s_IsExpandedProperty{ nullptr };

TreeViewNodeProperties::TreeViewNodeProperties()
{
    EnsureProperties();
}

void TreeViewNodeProperties::EnsureProperties()
{
    if (!s_ContentProperty)
    {
        s_ContentProperty =
            InitializeDependencyProperty(
                L"Content",
                winrt::name_of<winrt::IInspectable>(),
                winrt::name_of<winrt::TreeViewNode>(),
                false /* isAttached */,
                ValueHelper<winrt::IInspectable>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_DepthProperty)
    {
        s_DepthProperty =
            InitializeDependencyProperty(
                L"Depth",
                winrt::name_of<int>(),
                winrt::name_of<winrt::TreeViewNode>(),
                false /* isAttached */,
                ValueHelper<int>::BoxValueIfNecessary(-1),
                nullptr);
    }
    if (!s_HasChildrenProperty)
    {
        s_HasChildrenProperty =
            InitializeDependencyProperty(
                L"HasChildren",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::TreeViewNode>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnHasChildrenPropertyChanged));
    }
    if (!s_IsExpandedProperty)
    {
        s_IsExpandedProperty =
            InitializeDependencyProperty(
                L"IsExpanded",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::TreeViewNode>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnIsExpandedPropertyChanged));
    }
}

void TreeViewNodeProperties::ClearProperties()
{
    s_ContentProperty = nullptr;
    s_DepthProperty = nullptr;
    s_HasChildrenProperty = nullptr;
    s_IsExpandedProperty = nullptr;
}

void TreeViewNodeProperties::OnHasChildrenPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TreeViewNode>();
    winrt::get_self<TreeViewNode>(owner)->OnPropertyChanged(args);
}
void TreeViewNodeProperties::OnIsExpandedPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TreeViewNode>();
    winrt::get_self<TreeViewNode>(owner)->OnPropertyChanged(args);
}

void TreeViewNodeProperties::Content(winrt::IInspectable const& value)
{
    static_cast<TreeViewNode*>(this)->SetValue(s_ContentProperty, ValueHelper<winrt::IInspectable>::BoxValueIfNecessary(value));
}

winrt::IInspectable TreeViewNodeProperties::Content()
{
    return ValueHelper<winrt::IInspectable>::CastOrUnbox(static_cast<TreeViewNode*>(this)->GetValue(s_ContentProperty));
}

void TreeViewNodeProperties::Depth(int value)
{
    static_cast<TreeViewNode*>(this)->SetValue(s_DepthProperty, ValueHelper<int>::BoxValueIfNecessary(value));
}

int TreeViewNodeProperties::Depth()
{
    return ValueHelper<int>::CastOrUnbox(static_cast<TreeViewNode*>(this)->GetValue(s_DepthProperty));
}

void TreeViewNodeProperties::HasChildren(bool value)
{
    static_cast<TreeViewNode*>(this)->SetValue(s_HasChildrenProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool TreeViewNodeProperties::HasChildren()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<TreeViewNode*>(this)->GetValue(s_HasChildrenProperty));
}

void TreeViewNodeProperties::IsExpanded(bool value)
{
    static_cast<TreeViewNode*>(this)->SetValue(s_IsExpandedProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool TreeViewNodeProperties::IsExpanded()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<TreeViewNode*>(this)->GetValue(s_IsExpandedProperty));
}
