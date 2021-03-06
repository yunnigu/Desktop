//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface MRTHorizontalRewardsProgressView : UIView
{
    double _progress;
    UIColor *_trackForegroundColor;
    UIColor *_trackBackgroundColor;
    UIColor *_defaultTrackBackgroundColor;
}

@property(retain, nonatomic) UIColor *defaultTrackBackgroundColor; // @synthesize defaultTrackBackgroundColor=_defaultTrackBackgroundColor;
@property(retain, nonatomic) UIColor *trackBackgroundColor; // @synthesize trackBackgroundColor=_trackBackgroundColor;
@property(retain, nonatomic) UIColor *trackForegroundColor; // @synthesize trackForegroundColor=_trackForegroundColor;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)drawPercent:(double)arg1 inRect:(struct CGRect)arg2 withContext:(struct CGContext *)arg3 andColor:(id)arg4;
- (void)drawRect:(struct CGRect)arg1;
- (void)tintColorDidChange;
- (void)resetDefaultBackground;
- (void)awakeFromNib;

@end

