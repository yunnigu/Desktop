//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YSF_NIMManager.h"

@class NSMutableDictionary, YSFDatabase;

@interface YSF_NIMSystemNotificationManager : YSF_NIMManager
{
    long long _unreadCount;
    YSFDatabase *_db;
    NSMutableDictionary *_customNotifications;
}

@property(retain, nonatomic) NSMutableDictionary *customNotifications; // @synthesize customNotifications=_customNotifications;
@property(retain, nonatomic) YSFDatabase *db; // @synthesize db=_db;
@property(nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
- (void).cxx_destruct;
- (unsigned long long)notificationTypeForSessionType:(long long)arg1;
- (void)onSendCustomNotificationAck:(id)arg1 code:(long long)arg2;
- (void)sendCustomNotification:(id)arg1 withMessageId:(id)arg2;
- (void)onReceiveCustomSystemNotification:(id)arg1;
- (void)onReceiveSystemNotification:(id)arg1;
- (_Bool)saveNotification:(id)arg1;
- (void)queryUnreadCount;
- (void)openDatabase;
- (void)updateNotificationSubStatus:(id)arg1;
- (void)updateNotificationStatus:(id)arg1;
- (void)sendCustomNotification:(id)arg1 toSession:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)markAllNotificationsAsRead;
- (void)markNotificationAsRead:(id)arg1;
- (void)deleteAllNotifications;
- (void)deleteNotification:(id)arg1;
- (long long)allUnreadCount;
- (id)fetchSystemNotifications:(id)arg1 limit:(long long)arg2;
- (id)init;

@end

