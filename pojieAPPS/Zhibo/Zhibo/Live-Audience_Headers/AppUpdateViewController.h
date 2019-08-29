//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BasePopViewController.h"

@class NSDictionary, NSLayoutConstraint, UIButton, UILabel;

@interface AppUpdateViewController : BasePopViewController
{
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIButton *_confirmButton;
    UIButton *_cancelButton;
    NSLayoutConstraint *_confirmButtonLeftConstraint;
    NSDictionary *_dict;
}

+ (id)instance;
@property(retain, nonatomic) NSDictionary *dict; // @synthesize dict=_dict;
@property(nonatomic) __weak NSLayoutConstraint *confirmButtonLeftConstraint; // @synthesize confirmButtonLeftConstraint=_confirmButtonLeftConstraint;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(nonatomic) __weak UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
