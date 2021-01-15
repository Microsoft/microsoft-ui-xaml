﻿using System;
using Windows.UI.Xaml.Controls;
using System.Collections.Generic;
using System.Linq;
using PipsPagerSelectedIndexChangedEventArgs = Microsoft.UI.Xaml.Controls.PipsPagerSelectedIndexChangedEventArgs;
using PipsPager = Microsoft.UI.Xaml.Controls.PipsPager;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Media;
using System.Collections.ObjectModel;
using Windows.UI.Xaml.Media.Imaging;
using Windows.Foundation;

namespace MUXControlsTestApp
{
    public sealed partial class PipsPagerExamples : Page
    {
        private int MinRowSpacing = 8;
        private int TotalNumberOfDisplayedObjects = 50;
        private double ButtonListPreviousOffset = 0.0;
        private double PersonInfoListPreviousOffset = 0.0;
        private ScrollViewer PersonInfoListScrollViewer;
        public List<string> Pictures = new List<string>()
        {

            "Assets/ingredient1.png",
            "Assets/ingredient2.png",
            "Assets/ingredient3.png",
            "Assets/ingredient4.png",
            "Assets/ingredient5.png",
            "Assets/ingredient6.png",
            "Assets/ingredient7.png",
            "Assets/ingredient8.png",
        };

        public PipsPagerExamples()
        {
            this.InitializeComponent();
            PersonInfoList.ItemsSource = CreatePersonInfoList();
            ButtonListRepeater.ItemsSource = CreateButtonListItems();
            this.Loaded += OnLoaded;
        }

        private void OnLoaded(object sender, RoutedEventArgs e)
        {
            ButtonListPager.NumberOfPages = (int)Math.Ceiling(ButtonListScrollViewer.ExtentHeight / ButtonListScrollViewer.ViewportHeight);
            SetButtonListRepeaterSize();
            PersonInfoListScrollViewer = FindInnerScrollViewer(PersonInfoList);
            PersonInfoListScrollViewer.ViewChanged += PersonInfoList_ViewChanged;
            PersonInfoListPager.NumberOfPages = (int)Math.Ceiling(PersonInfoListScrollViewer.ExtentHeight / PersonInfoListScrollViewer.ViewportHeight);
        }

        private void SetButtonListRepeaterSize()
        {
            DataTemplate dt = ButtonListRepeater.ItemTemplate as DataTemplate;
            Image img = VisualTreeHelper.GetChild(dt.LoadContent() as StackPanel, 0) as Image;
            img.Source = new BitmapImage(new Uri("ms-appx:/Assets/ingredient1.png"));
            img.Measure(new Size(double.PositiveInfinity, double.PositiveInfinity));
            var numberOfPages = (int)Math.Ceiling(ButtonListScrollViewer.ExtentHeight / ButtonListScrollViewer.ViewportHeight);
            ButtonListRepeater.Height = ButtonListScrollViewer.ViewportHeight * numberOfPages + MinRowSpacing * (numberOfPages - 1); ;
        }

        private void PersonInfoListPager_SelectedIndexChanged(PipsPager sender, PipsPagerSelectedIndexChangedEventArgs args)
        {
            if (PersonInfoListScrollViewer != null)
            {
                PersonInfoListScrollViewer.ChangeView(null, args.NewPageIndex * PersonInfoListScrollViewer.ViewportHeight, null);
            }
        }

        private void PersonInfoList_ViewChanged(object sender, ScrollViewerViewChangedEventArgs e)
        {
            if (!e.IsIntermediate)
            {
                OnViewChanged(PersonInfoListScrollViewer, PersonInfoListPager, ref PersonInfoListPreviousOffset);
            }
        }

        private void ButtonListScrollViewer_ViewChanged(object sender, ScrollViewerViewChangedEventArgs e)
        {
            if (!e.IsIntermediate)
            {
                OnViewChanged(ButtonListScrollViewer, ButtonListPager, ref ButtonListPreviousOffset, MinRowSpacing);
            }
        }

        private void ButtonListPager_SelectedIndexChanged(PipsPager sender, PipsPagerSelectedIndexChangedEventArgs args)
        {
            ButtonListScrollViewer.ChangeView(null, args.NewPageIndex * (ButtonListScrollViewer.ViewportHeight + MinRowSpacing), null);
        }

        private ObservableCollection<PersonInfo> CreatePersonInfoList()
        {
            ObservableCollection<PersonInfo> items = new ObservableCollection<PersonInfo>();
            for (int i = 0; i < 15; i++)
            {
                items.Add(new PersonInfo($"RandomName{i}", $"RandomSurname{i}"));
            }
            return items;
        }

        private string[] CreateButtonListItems()
        {
            var rnd = new Random();
            var items = new string[TotalNumberOfDisplayedObjects];
            for (int i = 0; i < TotalNumberOfDisplayedObjects; i++)
            {
                items[i] = $"Assets/ingredient{rnd.Next(1, 100) % 4 + 1}.png";
            }
            return items;
        }

        private ScrollViewer FindInnerScrollViewer(ListView lv)
        {
            Panel p = lv.ItemsPanelRoot;
            UIElement parent = VisualTreeHelper.GetParent(p) as UIElement;
            while (parent != null && !(parent is ScrollViewer))
                parent = VisualTreeHelper.GetParent(parent) as UIElement;

            return parent as ScrollViewer;
        }

        private void OnViewChanged(ScrollViewer sv, PipsPager pager, ref double previousVerticalOffset, double rowSpacing = 0.0)
        {
            var newVerticalOffset = sv.VerticalOffset;

            if (newVerticalOffset <= previousVerticalOffset)
            {
                pager.SelectedPageIndex = (int)Math.Floor(sv.VerticalOffset / (sv.ViewportHeight + rowSpacing));
            }
            else
            {
                pager.SelectedPageIndex = (int)Math.Ceiling(sv.VerticalOffset / (sv.ViewportHeight + rowSpacing));
            }

            previousVerticalOffset = newVerticalOffset;
        }
    }

    public class PersonInfo
    {
        public PersonInfo(string name, string surname)
        {
            FullName = $"{name} {surname}";
            Initials = $"{Char.ToUpper(name.ElementAtOrDefault(0))}{Char.ToUpper(surname.ElementAtOrDefault(0))}";
        }

        public string FullName { get; set; }
        public string Initials { get; set; }
    }
}