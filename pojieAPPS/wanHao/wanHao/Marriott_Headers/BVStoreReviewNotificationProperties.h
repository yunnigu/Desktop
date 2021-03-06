//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface BVStoreReviewNotificationProperties : NSObject
{
    _Bool _requestReviewOnAppOpen;
    _Bool _notificationsEnabled;
    double _visitDuration;
    double _remindMeLaterDuration;
    double _notificationDelay;
    NSString *_reviewPromtDispayText;
    NSString *_reviewPromptSubtitleText;
    NSString *_reviewPromptYesReview;
    NSString *_reviewPromtNoReview;
    NSString *_reviewPromptRemindText;
    NSString *_defaultStoreImageUrl;
    NSDate *_allowableTimePeriodStart;
    NSDate *_allowableTimePeriodEnd;
    NSString *_customUrlScheme;
}

@property(readonly, nonatomic) NSString *customUrlScheme; // @synthesize customUrlScheme=_customUrlScheme;
@property(readonly, nonatomic) NSDate *allowableTimePeriodEnd; // @synthesize allowableTimePeriodEnd=_allowableTimePeriodEnd;
@property(readonly, nonatomic) NSDate *allowableTimePeriodStart; // @synthesize allowableTimePeriodStart=_allowableTimePeriodStart;
@property(readonly, nonatomic) NSString *defaultStoreImageUrl; // @synthesize defaultStoreImageUrl=_defaultStoreImageUrl;
@property(readonly, nonatomic) NSString *reviewPromptRemindText; // @synthesize reviewPromptRemindText=_reviewPromptRemindText;
@property(readonly, nonatomic) NSString *reviewPromtNoReview; // @synthesize reviewPromtNoReview=_reviewPromtNoReview;
@property(readonly, nonatomic) NSString *reviewPromptYesReview; // @synthesize reviewPromptYesReview=_reviewPromptYesReview;
@property(readonly, nonatomic) NSString *reviewPromptSubtitleText; // @synthesize reviewPromptSubtitleText=_reviewPromptSubtitleText;
@property(readonly, nonatomic) NSString *reviewPromtDispayText; // @synthesize reviewPromtDispayText=_reviewPromtDispayText;
@property(readonly, nonatomic) double notificationDelay; // @synthesize notificationDelay=_notificationDelay;
@property(readonly, nonatomic) double remindMeLaterDuration; // @synthesize remindMeLaterDuration=_remindMeLaterDuration;
@property(readonly, nonatomic) double visitDuration; // @synthesize visitDuration=_visitDuration;
@property(readonly, nonatomic) _Bool notificationsEnabled; // @synthesize notificationsEnabled=_notificationsEnabled;
@property(readonly, nonatomic) _Bool requestReviewOnAppOpen; // @synthesize requestReviewOnAppOpen=_requestReviewOnAppOpen;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

