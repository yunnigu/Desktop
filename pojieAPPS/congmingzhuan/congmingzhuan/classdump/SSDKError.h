//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface SSDKError : NSError
{
}

+ (id)errorWithException:(id)arg1;
+ (id)clientSDKCallbackErrorWithInfo:(id)arg1;
+ (id)apiOfClientSDK:(id)arg1 errorInfo:(id)arg2;
+ (id)unloadedFile:(id)arg1;
+ (id)requestFailedWithInfo:(id)arg1;
+ (id)unsupportFeature;
+ (id)clientNotInstall;
+ (id)paramsErrorWithDescription:(id)arg1;
+ (id)UnsetURLScheme:(id)arg1;
+ (id)unSupportContentType;
+ (id)platformUninitWithDescription:(id)arg1;
+ (id)permissionDeniedWithDescription:(id)arg1;
+ (id)errorWithInfo:(id)arg1;
@property(readonly, nonatomic) unsigned long long type;
- (id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;

@end
