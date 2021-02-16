# WinRT API changes for Desktop apps

In WinUI 3 Preview 4, we have made changes to the way Windowing works in Desktop apps, by no longer creating a CoreWindow or CoreApplicationView. As a result, many WinRT APIs will no longer be supported in Dekstop apps. This document will list out APIs that have been affected by this change, with replacement or workaround APIs that will allow you to achieve the same functionality. 

This doc will continue to be updated as our community files bugs and as we identify more workarounds/replacements. If you are encountering issues with an API not listed here, please go ahead and [file a bug](https://github.com/microsoft/microsoft-ui-xaml/issues/new?assignees=&labels=&template=bug_report.md&title=) on this repo with the API in question and what you are trying to achieve by using it. 

## ApplicationView
This API is no longer supported in Desktop apps, and neither are any of its members or other APIs that depend on it. Below is a list of workarounds the team has identified for members or dependencies of the ApplicationView class.

- [`ApplicationViewTitleBar.ExtendViewIntoTitleBar`](https://docs.microsoft.com/en-us/uwp/api/windows.applicationmodel.core.coreapplicationviewtitlebar.extendviewintotitlebar?view=winrt-19041) 
    
    Use `Window.ExtendsContentIntoTitleBar` instead. This API was added in Preview 4 and is intended as a permanent replacement in WinUI 3. API reference documentation for this is coming soon.

## CoreWindow
This API is no longer supported in Desktop apps, and neither are any of its members or other APIs that depend on it. Below is a list of workarounds the team has identified for members or dependencies of the CoreWindow class.

- [`CoreWindow.GetKeyState()`]((https://docs.microsoft.com/en-us/uwp/api/windows.ui.core.corewindow.getkeystate?view=winrt-19041) ) 

    Use [`KeyboardInput.GetKeyStateForCurrentThread`](https://docs.microsoft.com/en-us/windows/winui/api/microsoft.ui.input.keyboardinput.getkeystateforcurrentthread?view=winui-3.0-preview) instead.

- [`CoreWindow.PointerCursor`](https://docs.microsoft.com/en-us/uwp/api/windows.ui.core.corewindow.pointercursor?view=winrt-19041) 

    Use [`UIElement.ProtectedCursor`](https://docs.microsoft.com/windows/winui/api/microsoft.ui.xaml.uielement.protectedcursor?view=winui-3.0-preview) instead. Note that you'll need to have a subclass of UIElement to access this API. 

## CoreDispatcher
This API is no longer supported in Desktop apps, and neither are any of its members or other APIs that depend on it. Below is a list of workarounds the team has identified for members or dependencies of the CoreDispatcher class.

- [`Window.Dispatcher`](https://docs.microsoft.com/en-us/windows/winui/api/microsoft.ui.xaml.window.dispatcher?view=winui-3.0-preview) or [`CoreDispatcher`](https://docs.microsoft.com/en-us/uwp/api/windows.ui.core.coredispatcher?view=winrt-19041)

    Use [`DispatcherQueue`](https://docs.microsoft.com/en-us/windows/winui/api/microsoft.ui.xaml.window.dispatcherqueue?view=winui-3.0-preview) instead. `DispatcherQueue` is the permanent WinUI 3 replacement for `Dispatcher` and `CoreDispatcher`.

## CoreApplicationView
This API is no longer supported in Desktop apps, and neither are any of its members or other APIs that depend on it.

## DisplayInformation
This API is no longer supported in Desktop apps, and neither are any of its members or other APIs that depend on it. Below is a list of workarounds the team has identified for members or dependencies of the DisplayInformation class.
 - [`DisplayInformation.LogicalDpi`](https://docs.microsoft.com/en-us/uwp/api/windows.graphics.display.displayinformation.logicaldpi?view=winrt-19041)
    
    Use [`XamlRoot.RasterizationScale`](https://docs.microsoft.com/en-us/windows/winui/api/microsoft.ui.xaml.xamlroot.rasterizationscale?view=winui-3.0-preview) instead, and listen for changes on the [`XamlRoot.Changed`](https://docs.microsoft.com/uwp/api/windows.ui.xaml.xamlroot.changed?view=winrt-19041) event. 

- [`DisplayInformation.RawPixelsPerViewPixel`](https://docs.microsoft.com/uwp/api/windows.graphics.display.displayinformation.rawpixelsperviewpixel?view=winrt-19041)

    Use [`XamlRoot.RasterizationScale`](https://docs.microsoft.com/en-us/windows/winui/api/microsoft.ui.xaml.xamlroot.rasterizationscale?view=winui-3.0-preview) instead. 

## UIViewSettings
This API is no longer supported in Desktop apps, and neither are any of its members or other APIs that depend on it. Below is a list of workarounds the team has identified for members or dependencies of the UIViewSettings class.

- [`UIViewSettings.GetForCurrentView()`](https://docs.microsoft.com/en-us/uwp/api/windows.ui.viewmanagement.uiviewsettings.getforcurrentview?view=winrt-19041)

    No alternative - `UIViewSettings` is not intended to be supported in Desktop apps.

## SystemNavigationManager

This API is no longer supported in Desktop apps, and neither are any of its members or other APIs that depend on it. Below is a list of workarounds the team has identified for members or dependencies of the SystemNavigationManager class.

- [`SystemNavigationManager.GetForCurrentView()`](https://docs.microsoft.com/en-us/uwp/api/windows.ui.core.systemnavigationmanager.getforcurrentview?view=winrt-19041)

    No alternative - this functionality is not intended to be supported in Desktop apps. 

