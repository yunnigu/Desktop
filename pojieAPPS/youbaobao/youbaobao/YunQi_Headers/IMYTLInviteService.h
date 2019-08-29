//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMYTLInviteService-Protocol.h"

@class NSString, RACSignal;

@interface IMYTLInviteService : NSObject <IMYTLInviteService>
{
    _Bool _inviteEnabled;
    RACSignal *_getInviteEnabledSignal;
}

+ (id)serviceInstance;
@property(nonatomic) _Bool inviteEnabled; // @synthesize inviteEnabled=_inviteEnabled;
@property(retain, nonatomic) RACSignal *getInviteEnabledSignal; // @synthesize getInviteEnabledSignal=_getInviteEnabledSignal;
- (void).cxx_destruct;
- (id)getTokenWithInviteCode:(id)arg1 andAnswer:(id)arg2;
- (id)validateInviteCode:(id)arg1;
- (id)getInviteCode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
