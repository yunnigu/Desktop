//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSTNSerializer : NSObject
{
}

+ (void)appendGenericView:(id)arg1 dic:(id)arg2;
+ (id)serializeView:(id)arg1;
+ (void)onFrameReceived:(long long)arg1;
+ (void)sendRealtimeDumpAtInterval;
+ (void)startStreamLink;
+ (void)stopStreamLink;
+ (void)sendTracerObjectToSocket:(id)arg1;
+ (void)sendSpecificDumpToSocket:(id)arg1;
+ (void)sendDumpToSocket;
+ (id)dumpScreenToJSON;
+ (id)dumpScreenFrom:(id)arg1;
+ (id)dumpScreenFromKeyWindow;
+ (id)dumpScreenFromViewControllerBase:(id)arg1;
+ (id)dumpToJSON:(id)arg1;
+ (id)constraintsAsDicts:(id)arg1;

@end

