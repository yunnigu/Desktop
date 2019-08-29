//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMTimer, NSMutableArray, NSSet, UIImage;
@protocol StoryBubbleBoilingAnimationViewDelegate;

@interface WCStoryBubbleBoilingAnimationView : MMUIView
{
    _Bool _isFirstTimeShow;
    id <StoryBubbleBoilingAnimationViewDelegate> _delegate;
    MMTimer *_bubbleTimer;
    NSMutableArray *_bubbles;
    NSSet *_unreadCommentIdSet;
    NSMutableArray *_headImages;
    UIImage *_bubbleImg;
    unsigned long long _displayItemIndex;
}

@property(nonatomic) unsigned long long displayItemIndex; // @synthesize displayItemIndex=_displayItemIndex;
@property(retain, nonatomic) UIImage *bubbleImg; // @synthesize bubbleImg=_bubbleImg;
@property(retain, nonatomic) NSMutableArray *headImages; // @synthesize headImages=_headImages;
@property(nonatomic) _Bool isFirstTimeShow; // @synthesize isFirstTimeShow=_isFirstTimeShow;
@property(retain, nonatomic) NSSet *unreadCommentIdSet; // @synthesize unreadCommentIdSet=_unreadCommentIdSet;
@property(retain, nonatomic) NSMutableArray *bubbles; // @synthesize bubbles=_bubbles;
@property(retain, nonatomic) MMTimer *bubbleTimer; // @synthesize bubbleTimer=_bubbleTimer;
@property(nonatomic) __weak id <StoryBubbleBoilingAnimationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showAnimationLayerWithStartRect:(struct CGRect)arg1 endRect:(struct CGRect)arg2 startOpacity:(double)arg3 endOpacity:(double)arg4 duration:(double)arg5 UIView:(id)arg6;
- (void)showAnimationLayerWithStartRect:(struct CGRect)arg1 endRect:(struct CGRect)arg2 startOpacity:(double)arg3 endOpacity:(double)arg4 duration:(double)arg5 image:(id)arg6;
- (void)showOneBubble;
- (void)showOneHeaderView;
- (void)showHeadView;
- (void)stopAnimation;
- (void)showBubbleList:(id)arg1 unreadCommentIDSet:(id)arg2;
- (double)headerAnimationTriggerTimeInterval;
- (double)randomNumFromNegOneToPosOne;

@end
