//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTObject.h"

@class MRTServerMultiStatus, NSArray, NSString;

@interface MRTTrip : MRTObject
{
    NSString *_idNumber;
    NSString *_cartIdentifier;
    NSString *_paymentMethodIdentifier;
    NSArray *_reservations;
    MRTServerMultiStatus *_multiStatus;
}

@property(retain, nonatomic) MRTServerMultiStatus *multiStatus; // @synthesize multiStatus=_multiStatus;
@property(retain, nonatomic) NSArray *reservations; // @synthesize reservations=_reservations;
@property(copy, nonatomic) NSString *paymentMethodIdentifier; // @synthesize paymentMethodIdentifier=_paymentMethodIdentifier;
@property(copy, nonatomic) NSString *cartIdentifier; // @synthesize cartIdentifier=_cartIdentifier;
@property(copy, nonatomic) NSString *idNumber; // @synthesize idNumber=_idNumber;
- (void).cxx_destruct;

@end

