//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IMYAvatarImageView, IMYRM80AttributedLabel, IMYRecommendBaseModel, IMYTouchEXButton, UIImageView, UILabel;

@interface IMYNewsRootDoubleFlowCell : UICollectionViewCell
{
    CDUnknownBlockType _tapAvatar;
    CDUnknownBlockType _unlikeTapped;
    CDUnknownBlockType _tapPraise;
    CDUnknownBlockType _longPresssCoverViewAction;
    UIImageView *_imageView;
    IMYRecommendBaseModel *_model;
    IMYRM80AttributedLabel *_titleLabel;
    UILabel *_tagLabel;
    UIImageView *_tagImageView;
    IMYAvatarImageView *_avatarImageView;
    UIImageView *_vipIconView;
    UILabel *_nameLabel;
    UILabel *_countLabel;
    IMYTouchEXButton *_countButton;
    UIImageView *_praiseAnimateImgView;
}

+ (id)titleLabel;
@property(retain, nonatomic) UIImageView *praiseAnimateImgView; // @synthesize praiseAnimateImgView=_praiseAnimateImgView;
@property(retain, nonatomic) IMYTouchEXButton *countButton; // @synthesize countButton=_countButton;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *vipIconView; // @synthesize vipIconView=_vipIconView;
@property(retain, nonatomic) IMYAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIImageView *tagImageView; // @synthesize tagImageView=_tagImageView;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) IMYRM80AttributedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) IMYRecommendBaseModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) CDUnknownBlockType longPresssCoverViewAction; // @synthesize longPresssCoverViewAction=_longPresssCoverViewAction;
@property(copy, nonatomic) CDUnknownBlockType tapPraise; // @synthesize tapPraise=_tapPraise;
@property(copy, nonatomic) CDUnknownBlockType unlikeTapped; // @synthesize unlikeTapped=_unlikeTapped;
@property(copy, nonatomic) CDUnknownBlockType tapAvatar; // @synthesize tapAvatar=_tapAvatar;
- (void).cxx_destruct;
- (void)makeConstraints;
- (void)initSubviews;
- (void)initSelfView;
- (void)praiseAnimated:(CDUnknownBlockType)arg1;
- (void)setupViewCount:(id)arg1;
- (void)setupPraiseCount:(id)arg1 isPraise:(_Bool)arg2;
- (void)setupCountInfo:(id)arg1;
- (void)setupUserInfo:(id)arg1;
- (void)setupTitleLabel:(id)arg1;
- (void)setupImageAndTag:(id)arg1;
- (void)setupWithModel:(id)arg1;
- (void)longPressCoverView:(id)arg1;
- (void)setup;
- (void)prepareUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
