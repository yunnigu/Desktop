//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIImageView, UILabel, UIScrollView;

@interface TTQHomeCirclesView : UIView <UIScrollViewDelegate>
{
    CDUnknownBlockType _onActionBlock;
    CDUnknownBlockType _entryActionBlock;
    CDUnknownBlockType _exposureBlock;
    unsigned long long _type;
    UILabel *_titleLabel;
    UILabel *_entryLabel;
    UIImageView *_entryImgView;
    UILabel *_allowLabel;
    UIScrollView *_scrollView;
}

+ (id)defaultHomeCirclesViewForFind;
+ (id)defaultHomeCirclesViewForMY;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UILabel *allowLabel; // @synthesize allowLabel=_allowLabel;
@property(retain, nonatomic) UIImageView *entryImgView; // @synthesize entryImgView=_entryImgView;
@property(retain, nonatomic) UILabel *entryLabel; // @synthesize entryLabel=_entryLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType exposureBlock; // @synthesize exposureBlock=_exposureBlock;
@property(copy, nonatomic) CDUnknownBlockType entryActionBlock; // @synthesize entryActionBlock=_entryActionBlock;
@property(copy, nonatomic) CDUnknownBlockType onActionBlock; // @synthesize onActionBlock=_onActionBlock;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)commentinit;
- (id)creatItemView;
- (void)entryAction;
- (long long)itemTag:(id)arg1;
- (void)tapAction:(id)arg1;
- (double)setWith:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

