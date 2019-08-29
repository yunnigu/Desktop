//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CMMotionManager, NSOperationQueue, NSString;

@interface TTCameraMotionManager : NSObject <CLLocationManagerDelegate>
{
    double _backCameraX;
    double _backCameraY;
    double _backCameraZ;
    double _frontCameraX;
    double _frontCameraY;
    double _frontCameraZ;
    double _cameraUpX;
    double _cameraUpY;
    double _cameraUpZ;
    CMMotionManager *_motionMgr;
    NSOperationQueue *_motionQueue;
    CDStruct_2d7b3170 _rotationMat;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSOperationQueue *motionQueue; // @synthesize motionQueue=_motionQueue;
@property(retain, nonatomic) CMMotionManager *motionMgr; // @synthesize motionMgr=_motionMgr;
@property(nonatomic) double cameraUpZ; // @synthesize cameraUpZ=_cameraUpZ;
@property(nonatomic) double cameraUpY; // @synthesize cameraUpY=_cameraUpY;
@property(nonatomic) double cameraUpX; // @synthesize cameraUpX=_cameraUpX;
@property(nonatomic) double frontCameraZ; // @synthesize frontCameraZ=_frontCameraZ;
@property(nonatomic) double frontCameraY; // @synthesize frontCameraY=_frontCameraY;
@property(nonatomic) double frontCameraX; // @synthesize frontCameraX=_frontCameraX;
@property(nonatomic) double backCameraZ; // @synthesize backCameraZ=_backCameraZ;
@property(nonatomic) double backCameraY; // @synthesize backCameraY=_backCameraY;
@property(nonatomic) double backCameraX; // @synthesize backCameraX=_backCameraX;
@property(nonatomic) CDStruct_2d7b3170 rotationMat; // @synthesize rotationMat=_rotationMat;
- (void).cxx_destruct;
- (void)stopUpdate;
- (void)startUpdate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
