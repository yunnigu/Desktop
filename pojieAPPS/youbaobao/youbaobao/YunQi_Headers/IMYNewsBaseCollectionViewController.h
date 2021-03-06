//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IMYCaptionView, IMYNewsBaseViewModel, NSString, UICollectionView;

@interface IMYNewsBaseCollectionViewController : IMYPublicBaseViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    UICollectionView *_collectionView;
    IMYCaptionView *_captionView;
    IMYNewsBaseViewModel *_viewModel;
}

@property(retain, nonatomic) IMYNewsBaseViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) IMYCaptionView *captionView; // @synthesize captionView=_captionView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionViewLayout;
- (void)addRefreshComponentToTableView;
- (void)finishedRequest:(id)arg1;
- (id)requestRemoteDataForType:(long long)arg1 params:(id)arg2;
- (void)refresh:(_Bool)arg1;
- (void)setupUI;
- (void)viewWillLayoutSubviews;
- (_Bool)shouldAutoRefreshWhenLoaded;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

