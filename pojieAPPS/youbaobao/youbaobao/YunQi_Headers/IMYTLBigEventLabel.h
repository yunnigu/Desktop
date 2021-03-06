//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface IMYTLBigEventLabel : UIView
{
    UILabel *_tipLabel;
    UIImageView *_imgView;
    UILabel *_eventLabel;
    long long _alignment;
    double _showDuration;
    double _hideDuration;
}

+ (id)allMarkInfos;
+ (id)markInfoForMarkId:(long long)arg1;
+ (id)markTextColorNameForMarkId:(long long)arg1;
+ (id)markBgColorNameForMarkId:(long long)arg1;
+ (id)markNameForMarkId:(long long)arg1;
+ (id)markImageNameForMarkId:(long long)arg1;
+ (id)displayMarkNameForMarkId:(long long)arg1 markName:(id)arg2 filter:(_Bool)arg3;
+ (id)displayMarkNameForMarkId:(long long)arg1 markName:(id)arg2;
@property(nonatomic) double hideDuration; // @synthesize hideDuration=_hideDuration;
@property(nonatomic) double showDuration; // @synthesize showDuration=_showDuration;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) __weak UILabel *eventLabel; // @synthesize eventLabel=_eventLabel;
@property(nonatomic) __weak UIImageView *imgView; // @synthesize imgView=_imgView;
@property(nonatomic) __weak UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
- (void).cxx_destruct;
- (void)animationHidden:(_Bool)arg1;
- (double)updateMarkId:(long long)arg1 markName:(id)arg2;
- (void)setup;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

