//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfferWallBase/JPUSHReportRequest.h>

@class NSDictionary;

@interface JVVerifyInfoReportRequest : JPUSHReportRequest
{
    NSDictionary *_info;
}

@property(retain, nonatomic) NSDictionary *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (_Bool)cacheRequestRequired;
- (void)setResponseBlock;
- (_Bool)packData;
- (id)init;

@end
