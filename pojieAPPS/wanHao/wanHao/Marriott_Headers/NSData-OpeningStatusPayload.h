//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (OpeningStatusPayload)
- (id)openingStatusPayloadAsString:(id)arg1;
- (id)partialResultFrom:(long long)arg1 Length:(long long)arg2;
- (id)RFU;
- (id)firmwareVersionBLE;
- (id)firmwareVersionLCU;
- (long long)accessControlSystem;
- (long long)readerBatteryStatus;
- (id)doorId;
- (long long)detailedDidNotUnlockReason;
- (long long)detailedUnlockReason;
- (long long)didNotUnlockReason;
- (long long)unlockReason;
- (_Bool)didUnlock;
- (_Bool)containsData;
@end

