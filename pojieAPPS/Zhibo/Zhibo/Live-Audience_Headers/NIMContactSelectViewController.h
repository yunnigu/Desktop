//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "NIMContactPickedViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NIMContactSelectTabView, NSArray, NSDictionary, NSMutableArray, NSString, UITableView;
@protocol NIMContactSelectConfig, NIMContactSelectDelegate;

@interface NIMContactSelectViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, NIMContactPickedViewDelegate>
{
    NSMutableArray *_selectecContacts;
    UITableView *_tableView;
    id <NIMContactSelectConfig> _config;
    id <NIMContactSelectDelegate> _delegate;
    CDUnknownBlockType _finshBlock;
    CDUnknownBlockType _cancelBlock;
    NIMContactSelectTabView *_selectIndicatorView;
    long long _maxSelectCount;
    NSDictionary *_contentDic;
    NSArray *_sectionTitles;
}

@property(retain, nonatomic) NSArray *sectionTitles; // @synthesize sectionTitles=_sectionTitles;
@property(retain, nonatomic) NSDictionary *contentDic; // @synthesize contentDic=_contentDic;
@property(nonatomic) long long maxSelectCount; // @synthesize maxSelectCount=_maxSelectCount;
@property(retain, nonatomic) NIMContactSelectTabView *selectIndicatorView; // @synthesize selectIndicatorView=_selectIndicatorView;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType finshBlock; // @synthesize finshBlock=_finshBlock;
@property(nonatomic) __weak id <NIMContactSelectDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <NIMContactSelectConfig> config; // @synthesize config=_config;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)removeUser:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)makeData;
- (void)onDoneBtnClick:(id)arg1;
- (void)onCancelBtnClick:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)show;
- (void)viewDidLayoutSubviews;
- (id)detailTitle;
- (void)refreshDetailTitle;
- (void)setUpNav;
- (void)viewDidLoad;
- (id)initWithConfig:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

