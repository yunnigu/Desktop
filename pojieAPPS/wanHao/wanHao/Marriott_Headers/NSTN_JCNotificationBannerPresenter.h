//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTN_JCNotificationBannerWindow;

@interface NSTN_JCNotificationBannerPresenter : NSObject
{
    NSTN_JCNotificationBannerWindow *bannerWindow;
}

- (void).cxx_destruct;
- (id)newBannerViewForNotification:(id)arg1;
- (id)newContainerViewForNotification:(id)arg1;
- (id)newWindow;
- (void)presentNotification:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)presentNotification:(id)arg1 inWindow:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)didFinishPresentingNotifications;
- (void)willBeginPresentingNotifications;

@end

