//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CRApp;

@interface CROrientationMonitor : NSObject
{
    CRApp *_app;
}

@property(retain, nonatomic) CRApp *app; // @synthesize app=_app;
- (void).cxx_destruct;
- (void)updateOrientation;
- (void)stopMonitoring;
- (void)startMonitoring;
- (id)initWithApp:(id)arg1;

@end

