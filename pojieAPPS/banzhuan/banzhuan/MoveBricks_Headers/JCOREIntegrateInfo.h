//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JCOREIntegrateProtocol-Protocol.h"

@class NSString;

@interface JCOREIntegrateInfo : NSObject <JCOREIntegrateProtocol>
{
    unsigned char _property;
    long long _index;
    NSString *_version;
}

@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(nonatomic) unsigned char property; // @synthesize property=_property;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

