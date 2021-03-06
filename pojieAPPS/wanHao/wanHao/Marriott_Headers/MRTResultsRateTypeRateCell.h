//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MRTStyledButton, MRTStyledLabel, NSArray, NSLayoutConstraint, UIButton, UILabel;

@interface MRTResultsRateTypeRateCell : UITableViewCell
{
    MRTStyledLabel *_priceLabel;
    MRTStyledLabel *_currencyLabel;
    UIButton *_bookButton;
    MRTStyledButton *_rateChangeButton;
    MRTStyledButton *_roomDetailsButton;
    MRTStyledButton *_rateDetailsButton;
    UILabel *_productDescriptionLabel;
    NSLayoutConstraint *_rateChangeButtonTopConstraint;
    NSLayoutConstraint *_priceLabelToRoomDetailsConstraint;
    MRTStyledLabel *_redemptionMissingPointsLabel;
    NSLayoutConstraint *_redemptionMissingPointsHeightConstraint;
    NSLayoutConstraint *_redemptionMissingPointsTopConstraint;
    NSArray *_marginConstraints;
}

@property(copy, nonatomic) NSArray *marginConstraints; // @synthesize marginConstraints=_marginConstraints;
@property(retain, nonatomic) NSLayoutConstraint *redemptionMissingPointsTopConstraint; // @synthesize redemptionMissingPointsTopConstraint=_redemptionMissingPointsTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *redemptionMissingPointsHeightConstraint; // @synthesize redemptionMissingPointsHeightConstraint=_redemptionMissingPointsHeightConstraint;
@property(retain, nonatomic) MRTStyledLabel *redemptionMissingPointsLabel; // @synthesize redemptionMissingPointsLabel=_redemptionMissingPointsLabel;
@property(nonatomic) __weak NSLayoutConstraint *priceLabelToRoomDetailsConstraint; // @synthesize priceLabelToRoomDetailsConstraint=_priceLabelToRoomDetailsConstraint;
@property(nonatomic) __weak NSLayoutConstraint *rateChangeButtonTopConstraint; // @synthesize rateChangeButtonTopConstraint=_rateChangeButtonTopConstraint;
@property(nonatomic) __weak UILabel *productDescriptionLabel; // @synthesize productDescriptionLabel=_productDescriptionLabel;
@property(nonatomic) __weak MRTStyledButton *rateDetailsButton; // @synthesize rateDetailsButton=_rateDetailsButton;
@property(nonatomic) __weak MRTStyledButton *roomDetailsButton; // @synthesize roomDetailsButton=_roomDetailsButton;
@property(nonatomic) __weak MRTStyledButton *rateChangeButton; // @synthesize rateChangeButton=_rateChangeButton;
@property(nonatomic) __weak UIButton *bookButton; // @synthesize bookButton=_bookButton;
@property(nonatomic) __weak MRTStyledLabel *currencyLabel; // @synthesize currencyLabel=_currencyLabel;
@property(nonatomic) __weak MRTStyledLabel *priceLabel; // @synthesize priceLabel=_priceLabel;
- (void).cxx_destruct;
- (void)rateVariesDuringStayTapped:(id)arg1;
- (void)rateDetailsTapped:(id)arg1;
- (void)roomDetailsTapped:(id)arg1;
- (void)bookPressed:(id)arg1;
- (void)rateLabelTapped;
- (void)updateConstraints;
- (void)awakeFromNib;

@end

