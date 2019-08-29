//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class IMYTouchEXButton, NSString, UILabel, UITextField;

@interface TTQPublishVoteItemView : UIView <UITextFieldDelegate>
{
    UITextField *_textField;
    UILabel *_countLabel;
    IMYTouchEXButton *_closeBtn;
    CDUnknownBlockType _shouldEditingVoteBlock;
    CDUnknownBlockType _didEndEditingVoteBlock;
    CDUnknownBlockType _didEditingVoteBlock;
    CDUnknownBlockType _returnKeyVoteBlock;
}

@property(copy, nonatomic) CDUnknownBlockType returnKeyVoteBlock; // @synthesize returnKeyVoteBlock=_returnKeyVoteBlock;
@property(copy, nonatomic) CDUnknownBlockType didEditingVoteBlock; // @synthesize didEditingVoteBlock=_didEditingVoteBlock;
@property(copy, nonatomic) CDUnknownBlockType didEndEditingVoteBlock; // @synthesize didEndEditingVoteBlock=_didEndEditingVoteBlock;
@property(copy, nonatomic) CDUnknownBlockType shouldEditingVoteBlock; // @synthesize shouldEditingVoteBlock=_shouldEditingVoteBlock;
@property(retain, nonatomic) IMYTouchEXButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)setCloseHandler:(CDUnknownBlockType)arg1;
- (void)setVotePlaceholderTag:(long long)arg1;
- (void)setVoteText:(id)arg1;
- (id)voteText;
- (id)voteTextField;
- (void)setupVoteItemView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
