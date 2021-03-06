//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYFeedsBoxAdView.h"

#import "IMYLiveLikeEventDelegate-Protocol.h"

@class IMYFeedAdLikeView, IMYLiveLikeTimerHelp, NSString, NSTimer, UIImageView, UILabel, UIView;

@interface IMYLiveFeedAdView : IMYFeedsBoxAdView <IMYLiveLikeEventDelegate>
{
    UIImageView *_imageView;
    UILabel *_liveLabel;
    UILabel *_viewerLabel;
    IMYFeedAdLikeView *_likeView;
    NSTimer *_timer;
    IMYLiveLikeTimerHelp *_likeTimerHelp;
    UIView *_dotView;
}

+ (struct UIEdgeInsets)edgeInsets;
+ (double)heightWithModel:(id)arg1;
+ (void)load;
@property(retain, nonatomic) UIView *dotView; // @synthesize dotView=_dotView;
@property(retain, nonatomic) IMYLiveLikeTimerHelp *likeTimerHelp; // @synthesize likeTimerHelp=_likeTimerHelp;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) IMYFeedAdLikeView *likeView; // @synthesize likeView=_likeView;
@property(retain, nonatomic) UILabel *viewerLabel; // @synthesize viewerLabel=_viewerLabel;
@property(retain, nonatomic) UILabel *liveLabel; // @synthesize liveLabel=_liveLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutWithModel:(id)arg1;
- (id)videoView;
- (id)imageViews;
- (void)setPlaceholderImage;
- (void)likeAnimate;
- (void)setupSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

