//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface IMYVideoPlayProgressView : UIView
{
    float _progress;
    UIColor *_progressTintColor;
    UIColor *_trackTintColor;
    UIView *_progressView;
    UIView *_trackView;
}

@property(retain, nonatomic) UIView *trackView; // @synthesize trackView=_trackView;
@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIColor *trackTintColor; // @synthesize trackTintColor=_trackTintColor;
@property(retain, nonatomic) UIColor *progressTintColor; // @synthesize progressTintColor=_progressTintColor;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)setProgress:(float)arg1 animatedTime:(double)arg2;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
