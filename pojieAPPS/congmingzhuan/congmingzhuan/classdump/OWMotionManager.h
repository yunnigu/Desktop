//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMotionManager;

@interface OWMotionManager : NSObject
{
    CMMotionManager *_manager;
}

+ (id)defaultManager;
+ (void)load;
@property(retain, nonatomic) CMMotionManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (id)motionInfo;
- (id)init;

@end

