//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTTAttributedLabelDelegate-Protocol.h"

@class NSArray, NSString, TTTAttributedLabel, UIButton, UILabel;

@interface YBBHomePolicyAlertView : UIView <TTTAttributedLabelDelegate>
{
    UIView *_containerView;
    UIButton *_confirmButton;
    UIButton *_cancelButton;
    UILabel *_contentLabel;
    UILabel *_titleLabel;
    CDUnknownBlockType _linkHandle;
    TTTAttributedLabel *_privacyLabel;
    NSArray *_clicks;
}

@property(copy, nonatomic) NSArray *clicks; // @synthesize clicks=_clicks;
@property(retain, nonatomic) TTTAttributedLabel *privacyLabel; // @synthesize privacyLabel=_privacyLabel;
@property(copy, nonatomic) CDUnknownBlockType linkHandle; // @synthesize linkHandle=_linkHandle;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 didSelectLinkWithPhoneNumber:(id)arg2;
- (void)configData:(id)arg1 contentString:(id)arg2;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

