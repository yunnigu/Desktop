//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString, NSString;

@interface BleDataHandler : NSObject
{
    _Bool accessGranted;
    long long errorCode;
    long long flags;
    int batteryStatus;
    NSString *batteryVoltage;
    NSMutableString *messageString;
}

- (void).cxx_destruct;
- (void)parseTlv:(id)arg1;
- (id)getBatteryVoltage;
- (int)getBatteryStatus;
- (long long)getFlags;
- (long long)getAccessError;
- (_Bool)isAccessGranted;
- (id)getMessageString;
- (id)initWithCode:(int)arg1 Message:(id)arg2;
- (id)init;

@end
