//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIScrollView;

@interface IMYNewsForumsHeaderView : UIView
{
    NSArray *_forums;
    long long _styleType;
    CDUnknownBlockType _onActionBlock;
    UIView *_forumBgView;
    UIScrollView *_forumBgScrollView;
}

+ (id)defaultForumsHeaderViewWithForums:(id)arg1 styleType:(long long)arg2;
@property(retain, nonatomic) UIScrollView *forumBgScrollView; // @synthesize forumBgScrollView=_forumBgScrollView;
@property(retain, nonatomic) UIView *forumBgView; // @synthesize forumBgView=_forumBgView;
@property(copy, nonatomic) CDUnknownBlockType onActionBlock; // @synthesize onActionBlock=_onActionBlock;
@property(nonatomic) long long styleType; // @synthesize styleType=_styleType;
@property(copy, nonatomic) NSArray *forums; // @synthesize forums=_forums;
- (void).cxx_destruct;
- (void)onActionWith:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setupBrandImage:(id)arg1 center:(struct CGPoint)arg2;
- (void)setup;

@end

