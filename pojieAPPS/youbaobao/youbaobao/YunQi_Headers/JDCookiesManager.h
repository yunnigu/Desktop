//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JDCookiesManager : NSObject
{
}

+ (id)shareInstance;
- (id)arrayOldCookies;
- (id)arrayCookieNames;
- (void)clearKeplerOldCookies;
- (void)clearAllCookies;
- (void)operateCookieForURL:(id)arg1;
- (void)addCookieToURL:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)addCookieToURL:(id)arg1 key:(id)arg2 withEncodeValue:(id)arg3;
- (id)initÃ;

@end

