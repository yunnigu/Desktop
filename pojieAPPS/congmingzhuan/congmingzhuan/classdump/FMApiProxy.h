//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AFHTTPSessionManager, NSMutableDictionary;

@interface FMApiProxy : NSObject
{
    _Bool _enableNetworkActivityIndicator;
    AFHTTPSessionManager *_sessionManager;
    NSMutableDictionary *_dispatchTable;
}

+ (id)defaultProxy;
@property(retain, nonatomic) NSMutableDictionary *dispatchTable; // @synthesize dispatchTable=_dispatchTable;
@property(retain, nonatomic) AFHTTPSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property(nonatomic) _Bool enableNetworkActivityIndicator; // @synthesize enableNetworkActivityIndicator=_enableNetworkActivityIndicator;
- (void).cxx_destruct;
- (void)cancelRequestWithRequestIDList:(id)arg1;
- (void)cancelRequestWithRequestID:(id)arg1;
- (id)callApiWithRequest:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;

@end

