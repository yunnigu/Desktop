//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface IMYTLCBFamilyHeaderView : UIView
{
    UILabel *_inviteTitleLabel;
    UILabel *_inviteContentLable;
    UILabel *_inviteSubTitleLabel;
}

@property(nonatomic) __weak UILabel *inviteSubTitleLabel; // @synthesize inviteSubTitleLabel=_inviteSubTitleLabel;
@property(nonatomic) __weak UILabel *inviteContentLable; // @synthesize inviteContentLable=_inviteContentLable;
@property(nonatomic) __weak UILabel *inviteTitleLabel; // @synthesize inviteTitleLabel=_inviteTitleLabel;
- (void).cxx_destruct;
- (struct CGSize)sizeWithString:(id)arg1 Font:(id)arg2 constrainedToSize:(struct CGSize)arg3;
- (double)headerHeight;
- (void)awakeFromNib;

@end
