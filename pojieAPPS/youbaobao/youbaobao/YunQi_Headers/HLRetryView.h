//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HLVBaseView.h"

@class IMYTouchEXButton, UIImageView, UILabel, UIView;

@interface HLRetryView : HLVBaseView
{
    IMYTouchEXButton *_retryButton;
    UIImageView *_imageView;
    UILabel *_retryLabel;
    UIView *_shadowView;
}

@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UILabel *retryLabel; // @synthesize retryLabel=_retryLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) IMYTouchEXButton *retryButton; // @synthesize retryButton=_retryButton;
- (void).cxx_destruct;
- (void)layoutForOrientation:(long long)arg1;
- (void)UICustomize;
- (void)createComponents;
- (id)initWithTheme:(id)arg1;

@end

