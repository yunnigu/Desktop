//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

@class IMYMineUserInfoAddressVM, IMYSimpleTableView;

@interface IMYMineUserInfoAddressVC : IMYPublicBaseViewController
{
    _Bool _isYoubiWeb;
    CDUnknownBlockType _addressVCCallBack;
    CDUnknownBlockType _webCallBack;
    IMYSimpleTableView *_tableView;
    IMYMineUserInfoAddressVM *_viewModel;
}

@property(retain, nonatomic) IMYMineUserInfoAddressVM *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) IMYSimpleTableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType webCallBack; // @synthesize webCallBack=_webCallBack;
@property(nonatomic) _Bool isYoubiWeb; // @synthesize isYoubiWeb=_isYoubiWeb;
@property(copy, nonatomic) CDUnknownBlockType addressVCCallBack; // @synthesize addressVCCallBack=_addressVCCallBack;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)saveWithIsTopLeft:(_Bool)arg1;
- (void)saveButtonClicked;
- (void)setupTableFooterView;
- (void)setupTableHeaderView;
- (void)imy_topLeftButtonTouchupInside;
- (void)setupTableView;
- (void)setupViewModel;
- (void)viewDidLoad;

@end
