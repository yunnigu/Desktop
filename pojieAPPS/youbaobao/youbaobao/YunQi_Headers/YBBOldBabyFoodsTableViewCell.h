//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView, YBBOldBabyFoodsModel;

@interface YBBOldBabyFoodsTableViewCell : UITableViewCell
{
    YBBOldBabyFoodsModel *_model;
    UIImageView *_pictureImgV;
    UILabel *_titleLabel;
    UILabel *_materialLabel;
    UILabel *_ageLabel;
    UIImageView *_playBtnImgV;
    UIView *_lineView;
}

@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak UIImageView *playBtnImgV; // @synthesize playBtnImgV=_playBtnImgV;
@property(nonatomic) __weak UILabel *ageLabel; // @synthesize ageLabel=_ageLabel;
@property(nonatomic) __weak UILabel *materialLabel; // @synthesize materialLabel=_materialLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *pictureImgV; // @synthesize pictureImgV=_pictureImgV;
@property(retain, nonatomic) YBBOldBabyFoodsModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)attrFromString:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

