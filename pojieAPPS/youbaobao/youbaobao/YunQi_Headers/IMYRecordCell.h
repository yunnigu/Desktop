//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IMYLineView, UIImageView, UILabel;

@interface IMYRecordCell : UIView
{
    _Bool isPressed;
    _Bool _enableTouchPressed;
    _Bool _isSelected;
    id _delegate;
    UIImageView *_selectedBGImageView;
    UIImageView *_backgroundImageView;
    UIImageView *_imageView;
    UILabel *_textLabel;
    IMYLineView *_lineView;
}

@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) IMYLineView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIImageView *selectedBGImageView; // @synthesize selectedBGImageView=_selectedBGImageView;
@property(nonatomic) _Bool enableTouchPressed; // @synthesize enableTouchPressed=_enableTouchPressed;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showHighlightAnimation;
- (void)hideNewIconImageView;
- (void)showNewIconImageView;
- (void)hideBackgroupImage;
- (void)showBackgrounpImage;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)cellWillInit;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
