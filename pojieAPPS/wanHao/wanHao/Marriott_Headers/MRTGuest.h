//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTObject.h"

@class MRTName, NSArray, NSString;

@interface MRTGuest : MRTObject
{
    _Bool _isPrimary;
    NSString *_identifier;
    NSString *_rewardsNumber;
    long long _numberInParty;
    NSArray *_childAges;
    MRTName *_name;
    NSArray *_addresses;
    NSArray *_emailAddresses;
    NSArray *_phoneNumbers;
}

@property(copy, nonatomic) NSArray *phoneNumbers; // @synthesize phoneNumbers=_phoneNumbers;
@property(copy, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(copy, nonatomic) NSArray *addresses; // @synthesize addresses=_addresses;
@property(copy, nonatomic) MRTName *name; // @synthesize name=_name;
@property(retain, nonatomic) NSArray *childAges; // @synthesize childAges=_childAges;
@property(nonatomic) long long numberInParty; // @synthesize numberInParty=_numberInParty;
@property(copy, nonatomic) NSString *rewardsNumber; // @synthesize rewardsNumber=_rewardsNumber;
@property(nonatomic) _Bool isPrimary; // @synthesize isPrimary=_isPrimary;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)serializationPropertyNames;
- (_Bool)hasRequiredBookingInformationIncludingPhone:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)initWithConsumer:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

