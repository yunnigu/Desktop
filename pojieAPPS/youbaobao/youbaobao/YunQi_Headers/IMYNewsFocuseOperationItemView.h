//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIButton, UIImageView, UILabel;

@interface IMYNewsFocuseOperationItemView : UIControl
{
    UIButton *_tagBtn;
    UILabel *_numLabel;
    UIImageView *_imgView;
    unsigned long long _type;
}

+ (id)focuseItemViewWith:(unsigned long long)arg1;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
@property(retain, nonatomic) UILabel *numLabel; // @synthesize numLabel=_numLabel;
@property(retain, nonatomic) UIButton *tagBtn; // @synthesize tagBtn=_tagBtn;
- (void).cxx_destruct;
- (void)praiseAnimated:(CDUnknownBlockType)arg1;
- (id)pariseStr:(long long)arg1;
- (id)replyStr:(long long)arg1;
- (id)shareStr:(long long)arg1;
- (id)numStr:(long long)arg1;
- (void)setNum:(long long)arg1 selected:(_Bool)arg2;
- (void)setPreparationWith:(unsigned long long)arg1;
- (void)initMySelf;

@end
