//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IMYTouchEXButton, UILabel;

@interface TTQNewIconAndImgView : UIView
{
    CDUnknownBlockType _callback;
    UILabel *_textLabel;
    IMYTouchEXButton *_iconButton;
}

+ (double)getTagWidthWithText:(id)arg1 font:(double)arg2;
@property(retain, nonatomic) IMYTouchEXButton *iconButton; // @synthesize iconButton=_iconButton;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)startAnimating;
- (void)updateText:(id)arg1;
- (void)updateIconFont:(id)arg1 color:(id)arg2 text:(id)arg3;
- (void)updateIconFont:(id)arg1 text:(id)arg2;
- (void)prepareUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

