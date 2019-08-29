//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JCommonActiveUserController, JCommonBatteryController, JCommonCrashController, JCommonDeviceController, JCommonLocationController;

@interface JCommonServiceController : NSObject
{
    double _becomeActiveTime;
    JCommonCrashController *_crashController;
    JCommonLocationController *_locationController;
    JCommonDeviceController *_deviceController;
    JCommonBatteryController *_bateryyController;
    JCommonActiveUserController *_activeUserController;
    double _startTimetamp;
    double _closeTimetamp;
    _Bool _isSetup;
}

+ (void)setCrashLogON;
- (void).cxx_destruct;
- (void)reportAPNSState:(id)arg1;
- (void)saveActiveTime;
- (void)resumeReportData;
- (void)resumeSession;
- (void)stopReportTimer;
- (void)applicationWillResignActive;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)applicationDidBecomeActive;
- (void)applicationWillTerminate;
- (void)handleCmdControl:(id)arg1;
- (void)didLogin:(id)arg1;
- (void)receiveHeartAck:(id)arg1;
- (void)addObserver;
- (void)reportActive;
- (void)reportLaunch:(double)arg1;
- (void)closeSession;
- (void)setupSession:(double)arg1;
- (void)prepareActiveUserReport:(id)arg1;
- (void)setup;
- (void)dealloc;
- (void)setLocationInfo:(id)arg1;
- (id)currentLocationInfo;
- (id)initWithTimetamp:(double)arg1;

@end
