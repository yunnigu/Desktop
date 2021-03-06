//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CRReportableEvent.h"

#import "CRGarbageCollection-Protocol.h"

@class CRSession, NSNumber;

@interface CRAppLoad : CRReportableEvent <CRGarbageCollection>
{
}

+ (id)reportableEventProtocolType;
+ (id)createRequestsForEvents:(id)arg1 appLocator:(id)arg2;
+ (double)defaultReportFrequency;
+ (_Bool)isEnabledByDefault;
+ (id)garbageCollectionSortDescriptor;
+ (unsigned long long)garbageCollectionLowWaterMark;
+ (unsigned long long)garbageCollectionHighWaterMark;
- (void)setThrottleWithSettings:(id)arg1;
- (id)sendEventValueWithSettings:(id)arg1;
- (id)eventCollectorJson;
- (id)initWithContext:(id)arg1 appLoadType:(unsigned long long)arg2 timestamp:(id)arg3 coldLaunched:(_Bool)arg4;

// Remaining properties
@property(retain, nonatomic) NSNumber *coldLaunched; // @dynamic coldLaunched;
@property(retain, nonatomic) CRSession *session; // @dynamic session;
@property(retain, nonatomic) NSNumber *type; // @dynamic type;

@end

