//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTObject.h"

@class MRTLookupType, NSArray;

@interface MRTReservationSuiteNightAwardRequest : MRTObject
{
    MRTLookupType *_status;
    unsigned long long _count;
    NSArray *_roomTypeCodes;
}

@property(retain, nonatomic) NSArray *roomTypeCodes; // @synthesize roomTypeCodes=_roomTypeCodes;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(retain, nonatomic) MRTLookupType *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1;

@end

