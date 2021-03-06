//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MRTWhyJoinModel, NSString, UIButton, UILabel, UITableView;

@interface MRTWhyJoinViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    MRTWhyJoinModel *_model;
    UITableView *_tableView;
    UILabel *_headerLabel;
    UIButton *_doneButton;
    UIButton *_notNowButton;
}

@property(nonatomic) __weak UIButton *notNowButton; // @synthesize notNowButton=_notNowButton;
@property(nonatomic) __weak UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(nonatomic) __weak UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MRTWhyJoinModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)notNowTapped:(id)arg1;
- (void)doneTapped:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)oneButtonOverlayLayoutMarginsWillChange:(struct UIEdgeInsets)arg1;
- (void)updateView:(id)arg1 withLayoutMargins:(struct UIEdgeInsets)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

