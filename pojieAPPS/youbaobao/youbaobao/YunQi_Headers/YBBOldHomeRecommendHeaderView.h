//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IMYButton, UILabel;

@interface YBBOldHomeRecommendHeaderView : UIView
{
    unsigned long long _state;
    IMYButton *_refreshButton;
    double _headerViewHeight;
    UIView *_bannerView;
    UILabel *_bannerTitle;
    UILabel *_titleLabel;
    UIView *_backView;
    UIView *_line;
    double _minOffsetY;
}

@property(nonatomic) double minOffsetY; // @synthesize minOffsetY=_minOffsetY;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *bannerTitle; // @synthesize bannerTitle=_bannerTitle;
@property(retain, nonatomic) UIView *bannerView; // @synthesize bannerView=_bannerView;
@property(nonatomic) double headerViewHeight; // @synthesize headerViewHeight=_headerViewHeight;
@property(retain, nonatomic) IMYButton *refreshButton; // @synthesize refreshButton=_refreshButton;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)showBannerWithTitle:(id)arg1;
- (void)showAnimationWithState:(unsigned long long)arg1 dataCount:(long long)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

