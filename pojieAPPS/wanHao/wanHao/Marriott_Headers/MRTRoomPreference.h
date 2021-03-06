//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTObject.h"

#import "NSCopying-Protocol.h"

@class MRTLookupType, MRTRoomPreferenceScope, NSString;

@interface MRTRoomPreference : MRTObject <NSCopying>
{
    _Bool _isAddOn;
    NSString *_identifier;
    NSString *_descriptor;
    MRTLookupType *_category;
    MRTRoomPreferenceScope *_scope;
}

+ (id)restrictedRoomPreferenceTypes;
@property(nonatomic) _Bool isAddOn; // @synthesize isAddOn=_isAddOn;
@property(retain, nonatomic) MRTRoomPreferenceScope *scope; // @synthesize scope=_scope;
@property(retain, nonatomic) MRTLookupType *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *descriptor; // @synthesize descriptor=_descriptor;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

