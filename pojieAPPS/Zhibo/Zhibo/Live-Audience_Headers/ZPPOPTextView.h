//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UITextField;

@interface ZPPOPTextView : UIView <UITextFieldDelegate>
{
    double contentViewWidth;
    double contentViewHeight;
    NSString *_title;
    NSString *_textFieldInitialValue;
    long long _textFieldTextMaxLength;
    NSString *_placeholder;
    UIView *_backgroundView;
    UIView *_contentView;
    UILabel *_titleLabel;
    UITextField *_textField;
    UIView *_lineH;
    UIView *_lineV;
    UIButton *_cancelBtn;
    UIButton *_sureBtn;
    UILabel *_hintLabel;
    CDUnknownBlockType _textFieldBlock;
    CDUnknownBlockType _sureClickBlock;
    CDUnknownBlockType _cancelClickBlock;
}

@property(copy, nonatomic) CDUnknownBlockType cancelClickBlock; // @synthesize cancelClickBlock=_cancelClickBlock;
@property(copy, nonatomic) CDUnknownBlockType sureClickBlock; // @synthesize sureClickBlock=_sureClickBlock;
@property(copy, nonatomic) CDUnknownBlockType textFieldBlock; // @synthesize textFieldBlock=_textFieldBlock;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UIButton *sureBtn; // @synthesize sureBtn=_sureBtn;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIView *lineV; // @synthesize lineV=_lineV;
@property(retain, nonatomic) UIView *lineH; // @synthesize lineH=_lineH;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) long long textFieldTextMaxLength; // @synthesize textFieldTextMaxLength=_textFieldTextMaxLength;
@property(retain, nonatomic) NSString *textFieldInitialValue; // @synthesize textFieldInitialValue=_textFieldInitialValue;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeAnimation;
- (void)addAnimation;
- (void)hide;
- (void)hideKeyboard;
- (void)show;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldTextDidChange:(id)arg1;
- (void)onClickSureBtn:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (struct ZPTextFieldInfo)getInfoWithText:(id)arg1 maxLength:(long long)arg2;
- (void)setUI;
- (id)initWithTitle:(id)arg1 placeholder:(id)arg2 textFieldInitialValue:(id)arg3 textFieldTextMaxLength:(long long)arg4 sureClickBlock:(CDUnknownBlockType)arg5 cancelClickBlock:(CDUnknownBlockType)arg6;
- (id)initWithTitle:(id)arg1 placeholder:(id)arg2 textFieldInitialValue:(id)arg3 textFieldTextMaxLength:(long long)arg4 textFieldBlock:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

