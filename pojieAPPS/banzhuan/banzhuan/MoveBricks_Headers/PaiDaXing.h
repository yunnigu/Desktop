//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, ZUOAuthManager;
@protocol PaiDaXingDelegate;

@interface PaiDaXing : NSObject
{
    ZUOAuthManager *cuOAuthManager;
    id <PaiDaXingDelegate> _delegate;
    NSMutableDictionary *_carrierDataDic;
}

+ (id)parseParams:(id)arg1;
+ (void)post:(id)arg1 RequestParams:(id)arg2 FinishBlock:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSMutableDictionary *carrierDataDic; // @synthesize carrierDataDic=_carrierDataDic;
@property(nonatomic) __weak id <PaiDaXingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)deviceModelName;
- (id)deviceIdfa;
- (void)mobileGetAccessCode;
- (void)unionGetAccessCode;
- (void)telecomGetAccessCode;
- (void)carrierAccessCode;
- (void)PhoneNumDectectReceiveAccessCodeOrNot;
- (void)paiDaXingPhoneNumVerify:(id)arg1:(id)arg2:(id)arg3;
- (void)paiDaXingPhoneNumDectectLoad;
- (id)init;

@end

