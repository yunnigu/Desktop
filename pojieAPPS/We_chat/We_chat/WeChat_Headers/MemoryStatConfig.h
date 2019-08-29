//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface MemoryStatConfig : NSObject <PBCoding>
{
    _Bool memoryStatEnabled;
    _Bool isABTestUser;
    int skipMaxStackDepth;
    int skipMinMallocSize;
    double expiredTime;
    double disableTime;
}

+ (void)initialize;
@property(nonatomic) int skipMinMallocSize; // @synthesize skipMinMallocSize;
@property(nonatomic) int skipMaxStackDepth; // @synthesize skipMaxStackDepth;
@property(nonatomic) _Bool isABTestUser; // @synthesize isABTestUser;
@property(nonatomic) double disableTime; // @synthesize disableTime;
@property(nonatomic) double expiredTime; // @synthesize expiredTime;
@property(nonatomic) _Bool memoryStatEnabled; // @synthesize memoryStatEnabled;
- (id)init;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
