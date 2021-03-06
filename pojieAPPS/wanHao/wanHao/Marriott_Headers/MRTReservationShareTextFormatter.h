//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class MRTReservation;

@interface MRTReservationShareTextFormatter : NSFormatter
{
    MRTReservation *_reservation;
}

+ (id)mrt_shareTextHotelDetailsTitle;
+ (id)mrt_shareTextDatesCheckOutTitle;
+ (id)mrt_shareTextDatesCheckInTitle;
+ (id)mrt_shareTextDatesTitle;
+ (id)mrt_shareTextGuestTitle;
+ (id)mrt_shareTextTitle;
+ (id)stringFromReservation:(id)arg1;
@property(retain, nonatomic) MRTReservation *reservation; // @synthesize reservation=_reservation;
- (void).cxx_destruct;
- (id)mrt_shareTextURLSection;
- (id)mrt_shareTextHotelDetailsSection;
- (id)mrt_shareTextDatesSection;
- (id)mrt_shareTextGuestSection;
- (id)mrt_shareTextTitleSection;
- (_Bool)isPartialStringValid:(id *)arg1 proposedSelectedRange:(struct _NSRange *)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange)arg4 errorDescription:(id *)arg5;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (id)string;
- (id)initWithReservation:(id)arg1;

@end

