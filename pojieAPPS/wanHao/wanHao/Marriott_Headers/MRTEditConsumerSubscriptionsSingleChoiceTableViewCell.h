//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MRTEditConsumerSubscriptionsModelElement, UILabel, UISwitch;

@interface MRTEditConsumerSubscriptionsSingleChoiceTableViewCell : UITableViewCell
{
    MRTEditConsumerSubscriptionsModelElement *_element;
    UILabel *_headerLabel;
    UILabel *_contentLabel;
    UISwitch *_choiceSwitch;
}

@property(nonatomic) __weak UISwitch *choiceSwitch; // @synthesize choiceSwitch=_choiceSwitch;
@property(nonatomic) __weak UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) MRTEditConsumerSubscriptionsModelElement *element; // @synthesize element=_element;
- (void).cxx_destruct;
- (void)tapChoiceSwitch:(id)arg1;
- (void)inject:(id)arg1;
- (void)awakeFromNib;

@end

