//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYEBH5ViewController.h"

#import "IMYEBHomeViewControllerProtocol-Protocol.h"

@class NSString, RACSignal;

@interface IMYEBH5HomeVC : IMYEBH5ViewController <IMYEBHomeViewControllerProtocol>
{
    _Bool _isSign;
    _Bool _isShowNewFloat;
    RACSignal *_requestFinishedSignal;
    long long _gotoShowID;
    long long _gotoShowType;
    NSString *_alertMessage;
}

@property(copy, nonatomic) NSString *alertMessage; // @synthesize alertMessage=_alertMessage;
@property(nonatomic) long long gotoShowType; // @synthesize gotoShowType=_gotoShowType;
@property(nonatomic) long long gotoShowID; // @synthesize gotoShowID=_gotoShowID;
@property(nonatomic) _Bool isShowNewFloat; // @synthesize isShowNewFloat=_isShowNewFloat;
@property(nonatomic) _Bool isSign; // @synthesize isSign=_isSign;
@property(readonly, nonatomic) RACSignal *requestFinishedSignal; // @synthesize requestFinishedSignal=_requestFinishedSignal;
- (void).cxx_destruct;
- (void)onPullRefreshAction;
- (void)onTabBarDoubleTapAction;
- (void)startDownloadHomeHTML;
- (void)viewPullRefreshDidStop;
- (void)startViewRefreshing;
- (void)viewPullRefreshDidStart;
- (void)runActionOnViewWillAppear;
- (void)setupShowTitle;
- (void)loadRequestDidFinished;
- (void)_initMyself;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(nonatomic) _Bool isAutoSign;

@end
