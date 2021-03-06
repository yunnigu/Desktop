//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYNewsRootBaseCell.h"

@class IMYNewsSpecialVoteView, UIImageView, UILabel;

@interface IMYNewsRootOneBigImageCell : IMYNewsRootBaseCell
{
    UILabel *_voteTimesLabel;
    UIImageView *_newsImageView;
    UILabel *_tagLabel;
    UIImageView *_newsVideoPlayImageView;
    IMYNewsSpecialVoteView *_voteView;
}

+ (struct CGSize)SpecialBigImageSize;
+ (struct CGSize)BigImageSize;
@property(retain, nonatomic) IMYNewsSpecialVoteView *voteView; // @synthesize voteView=_voteView;
@property(retain, nonatomic) UIImageView *newsVideoPlayImageView; // @synthesize newsVideoPlayImageView=_newsVideoPlayImageView;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) UIImageView *newsImageView; // @synthesize newsImageView=_newsImageView;
@property(retain, nonatomic) UILabel *voteTimesLabel; // @synthesize voteTimesLabel=_voteTimesLabel;
- (void).cxx_destruct;
- (void)updateNewsConstraints:(_Bool)arg1;
- (void)createVoteView:(id)arg1;
- (void)setViewTimesAndDuration:(id)arg1;
- (void)setCellModel:(id)arg1;
- (void)setCellModelForBaseInfo:(id)arg1;
- (void)prepareUI;
- (void)awakeFromNib;

@end

