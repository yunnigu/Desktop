//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JPUSHReceivedPacketController.h"

@class NSDictionary;

@interface JPUSHAliasResponse : JPUSHReceivedPacketController
{
    NSDictionary *_recvContent;
}

@property(retain, nonatomic) NSDictionary *recvContent; // @synthesize recvContent=_recvContent;
- (void).cxx_destruct;
- (void)handleReceipt;
- (id)initWithBuffer:(const char *)arg1 length:(unsigned short)arg2;

@end

