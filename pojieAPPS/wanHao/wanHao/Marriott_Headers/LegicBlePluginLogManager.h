//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString;

@interface LegicBlePluginLogManager : NSObject
{
    NSMutableString *logText;
}

+ (id)dataToByteString:(id)arg1;
+ (id)shared;
- (void).cxx_destruct;
- (id)getText;
- (void)callUpdateEvent;
- (void)writeToLog:(id)arg1;
- (void)clear;
- (id)init;

@end

