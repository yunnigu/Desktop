//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WXApiDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface IMYEBPaymentManager : NSObject <WXApiDelegate>
{
    NSMutableArray *_payResults;
}

+ (id)sharePayManager;
@property(retain, nonatomic) NSMutableArray *payResults; // @synthesize payResults=_payResults;
- (void).cxx_destruct;
- (void)payResultCallBack:(CDUnknownBlockType)arg1;
- (_Bool)payWithDictionary:(id)arg1;
- (void)requestAlipayWithInfo:(id)arg1;
- (void)onResp:(id)arg1;
- (void)onReq:(id)arg1;
- (void)requestWXPay:(id)arg1;
- (_Bool)bInstallApp:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

