//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IMYEBSessionDetailModel, UIImageView, UILabel;

@interface IMYEBCouponTwoCell : UIView
{
    IMYEBSessionDetailModel *_detailModel;
    UIImageView *_shopImageView;
    UIImageView *_tagNewImageView;
    UILabel *_shopNameLabel;
    UIView *_tagView;
    UILabel *_currentPriceTipLabel;
    UILabel *_currentPriceTagLabel;
    UILabel *_currentPriceLabel;
    UILabel *_originPriceLabel;
    UILabel *_haveBuyLabel;
}

+ (id)cellIdentifier;
+ (struct CGSize)cellSize;
@property(retain, nonatomic) UILabel *haveBuyLabel; // @synthesize haveBuyLabel=_haveBuyLabel;
@property(retain, nonatomic) UILabel *originPriceLabel; // @synthesize originPriceLabel=_originPriceLabel;
@property(retain, nonatomic) UILabel *currentPriceLabel; // @synthesize currentPriceLabel=_currentPriceLabel;
@property(retain, nonatomic) UILabel *currentPriceTagLabel; // @synthesize currentPriceTagLabel=_currentPriceTagLabel;
@property(retain, nonatomic) UILabel *currentPriceTipLabel; // @synthesize currentPriceTipLabel=_currentPriceTipLabel;
@property(retain, nonatomic) UIView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) UILabel *shopNameLabel; // @synthesize shopNameLabel=_shopNameLabel;
@property(retain, nonatomic) UIImageView *tagNewImageView; // @synthesize tagNewImageView=_tagNewImageView;
@property(retain, nonatomic) UIImageView *shopImageView; // @synthesize shopImageView=_shopImageView;
@property(retain, nonatomic) IMYEBSessionDetailModel *detailModel; // @synthesize detailModel=_detailModel;
- (void).cxx_destruct;
- (void)creatExceptionnalTagViewWithModel:(id)arg1 leftSpace:(double)arg2 tagViewWidth:(CDUnknownBlockType)arg3;
- (void)creatAllPromotionWithList:(id)arg1;
- (void)fillDateWithDetailModel:(id)arg1;
- (void)createUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
