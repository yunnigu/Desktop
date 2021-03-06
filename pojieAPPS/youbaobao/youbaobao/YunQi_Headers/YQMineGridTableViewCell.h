//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YQMineBaseTableViewCell.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IMYMineContentModel, NSArray, NSIndexPath, NSMutableArray, NSString, UICollectionView;

@interface YQMineGridTableViewCell : YQMineBaseTableViewCell <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _isOpenStatistics;
    UICollectionView *_collectionView;
    long long _gridNumber;
    NSMutableArray *_eventArray;
    NSIndexPath *_realIndexPath;
    IMYMineContentModel *_model;
    CDUnknownBlockType _assoIdBlock;
    NSArray *_badgeCounts;
}

+ (double)cellHeight:(id)arg1;
@property(copy, nonatomic) NSArray *badgeCounts; // @synthesize badgeCounts=_badgeCounts;
@property(copy, nonatomic) CDUnknownBlockType assoIdBlock; // @synthesize assoIdBlock=_assoIdBlock;
@property(retain, nonatomic) IMYMineContentModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSIndexPath *realIndexPath; // @synthesize realIndexPath=_realIndexPath;
@property(nonatomic) _Bool isOpenStatistics; // @synthesize isOpenStatistics=_isOpenStatistics;
@property(retain, nonatomic) NSMutableArray *eventArray; // @synthesize eventArray=_eventArray;
@property(nonatomic) long long gridNumber; // @synthesize gridNumber=_gridNumber;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)reqToolsEventTrackWithCellModel:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)setupUI;
- (void)setSelectedAssoIdBlock:(CDUnknownBlockType)arg1;
- (void)configData:(id)arg1 openStatistics:(_Bool)arg2 badgeCounts:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

