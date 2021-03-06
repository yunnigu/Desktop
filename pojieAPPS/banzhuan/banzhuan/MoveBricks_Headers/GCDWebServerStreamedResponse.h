//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCDWebServerResponse.h"

@class NSString;

@interface GCDWebServerStreamedResponse : GCDWebServerResponse
{
    CDUnknownBlockType _block;
}

+ (id)responseWithContentType:(id)arg1 asyncStreamBlock:(CDUnknownBlockType)arg2;
+ (id)responseWithContentType:(id)arg1 streamBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)description;
- (void)asyncReadDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithContentType:(id)arg1 asyncStreamBlock:(CDUnknownBlockType)arg2;
- (id)initWithContentType:(id)arg1 streamBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(copy, nonatomic) NSString *contentType; // @dynamic contentType;

@end

