//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;

@interface AppMonitorMetricValueSet : NSObject
{
    NSMutableDictionary *_eventsDict;
    NSLock *_lock;
}

@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *eventsDict; // @synthesize eventsDict=_eventsDict;
- (void).cxx_destruct;
- (id)eventForId:(id)arg1 module:(id)arg2 monitorPoint:(id)arg3 extraInfo:(id)arg4 realTimeDebug:(_Bool)arg5;
- (id)eventForId:(id)arg1 module:(id)arg2 monitorPoint:(id)arg3 extraInfo:(id)arg4;
- (long long)metricsCount;
- (id)events;
- (id)init;

@end

