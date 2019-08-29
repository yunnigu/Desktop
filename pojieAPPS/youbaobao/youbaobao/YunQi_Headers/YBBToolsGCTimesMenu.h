//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSArray, UIView;

@interface YBBToolsGCTimesMenu : UIScrollView
{
    long long _currentIndex;
    CDUnknownBlockType _itemTapBlock;
    UIView *_indicatorView;
    unsigned long long _type;
    long long _itemNum;
    double _itemWidth;
    double _itemHeight;
    NSArray *_gcWeekRangeStr;
    NSArray *_gcWeekRangeEnd;
    double _totalWidth;
}

+ (id)timesMenuWithType:(unsigned long long)arg1;
+ (id)timesMenu;
@property(nonatomic) double totalWidth; // @synthesize totalWidth=_totalWidth;
@property(retain, nonatomic) NSArray *gcWeekRangeEnd; // @synthesize gcWeekRangeEnd=_gcWeekRangeEnd;
@property(retain, nonatomic) NSArray *gcWeekRangeStr; // @synthesize gcWeekRangeStr=_gcWeekRangeStr;
@property(nonatomic) double itemHeight; // @synthesize itemHeight=_itemHeight;
@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
@property(nonatomic) long long itemNum; // @synthesize itemNum=_itemNum;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(copy, nonatomic) CDUnknownBlockType itemTapBlock; // @synthesize itemTapBlock=_itemTapBlock;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
- (void).cxx_destruct;
- (void)resetItems;
- (void)setCurrentIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)scrollFromIndex:(long long)arg1 toIndex:(long long)arg2 animated:(_Bool)arg3;
- (void)_initSetting;
- (id)initWithFrame:(struct CGRect)arg1 type:(unsigned long long)arg2;

@end
