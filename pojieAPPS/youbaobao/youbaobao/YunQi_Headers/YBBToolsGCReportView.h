//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIButton, UILabel;

@interface YBBToolsGCReportView : UIView
{
    CDUnknownBlockType _addPhotoBlock;
    CDUnknownBlockType _tapPhotoBlock;
    long long _photoCount;
    UILabel *_titleLabel;
    UIButton *_addMoreButton;
    NSArray *_buttonArray;
    UIView *_tipView;
    double _reportViewTop;
}

@property(nonatomic) double reportViewTop; // @synthesize reportViewTop=_reportViewTop;
@property(retain, nonatomic) UIView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) NSArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(retain, nonatomic) UIButton *addMoreButton; // @synthesize addMoreButton=_addMoreButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long photoCount; // @synthesize photoCount=_photoCount;
@property(copy, nonatomic) CDUnknownBlockType tapPhotoBlock; // @synthesize tapPhotoBlock=_tapPhotoBlock;
@property(copy, nonatomic) CDUnknownBlockType addPhotoBlock; // @synthesize addPhotoBlock=_addPhotoBlock;
- (void).cxx_destruct;
- (void)tapPhotoAction:(id)arg1;
- (void)addMoreAction:(id)arg1;
- (struct CGPoint)originOfItemAtIndex:(long long)arg1;
- (void)loadPhoto:(id)arg1 index:(long long)arg2;
- (void)layoutWithPhotoList:(id)arg1;
- (void)resetUploadButtonAndTipLabel:(_Bool)arg1;
@property(readonly, nonatomic) struct CGSize itemSize;
- (id)attrWithText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
