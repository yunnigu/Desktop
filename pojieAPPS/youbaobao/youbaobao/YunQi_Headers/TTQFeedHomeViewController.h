//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTQTableViewController.h"

#import "IMY_ThemeChangeProtocol-Protocol.h"

@class NSString, TTQHome3ViewModel, TTQRefreshHeader, TTQScrollToTopButton;
@protocol IMYITableViewAdManager;

@interface TTQFeedHomeViewController : TTQTableViewController <IMY_ThemeChangeProtocol>
{
    CDUnknownBlockType _scrollToViewController;
    id <IMYITableViewAdManager> _adManager;
    TTQHome3ViewModel *_viewModel;
    TTQRefreshHeader *_refreshHeader;
    TTQScrollToTopButton *_scrollToTopButton;
}

@property(retain, nonatomic) TTQScrollToTopButton *scrollToTopButton; // @synthesize scrollToTopButton=_scrollToTopButton;
@property(retain, nonatomic) TTQRefreshHeader *refreshHeader; // @synthesize refreshHeader=_refreshHeader;
@property(retain, nonatomic) TTQHome3ViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) id <IMYITableViewAdManager> adManager; // @synthesize adManager=_adManager;
@property(copy, nonatomic) CDUnknownBlockType scrollToViewController; // @synthesize scrollToViewController=_scrollToViewController;
- (void).cxx_destruct;
- (void)finishedRequest:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)longPressAction:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)imy_themeChanged;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)bindViewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
