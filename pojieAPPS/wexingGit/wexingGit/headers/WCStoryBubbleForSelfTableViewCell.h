//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

#import "MMTipsViewControllerDelegate-Protocol.h"

@class MMCPLabel, MMHeadImageView, MMUIView, NSString, UIButton, WCStoryComment;
@protocol WCStoryBubbleListCellDelegate;

@interface WCStoryBubbleForSelfTableViewCell : MMTableViewCell <MMTipsViewControllerDelegate>
{
    WCStoryComment *_comment;
    id <WCStoryBubbleListCellDelegate> _delegate;
    MMHeadImageView *_headView;
    MMUIView *_headBackGroundView;
    MMCPLabel *_nickNameLabel;
    UIButton *_deleteBtn;
}

@property(nonatomic) __weak UIButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(nonatomic) __weak MMCPLabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(nonatomic) __weak MMUIView *headBackGroundView; // @synthesize headBackGroundView=_headBackGroundView;
@property(nonatomic) __weak MMHeadImageView *headView; // @synthesize headView=_headView;
@property(nonatomic) __weak id <WCStoryBubbleListCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCStoryComment *comment; // @synthesize comment=_comment;
- (void).cxx_destruct;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)onHeadImageViewDidClick:(id)arg1;
- (void)onClickDeleteBtn;
- (void)setupSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

