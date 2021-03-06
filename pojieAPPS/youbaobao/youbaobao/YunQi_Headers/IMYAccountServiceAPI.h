//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMYAccountServiceAPI : NSObject
{
}

+ (id)getThirdAccessTokenWithAppId:(id)arg1 code:(id)arg2 redirectUri:(id)arg3 platform:(id)arg4;
+ (id)loginsWithTaobaoWithOpenId:(id)arg1 openSid:(id)arg2 token:(id)arg3 nickname:(id)arg4 avatarUrl:(id)arg5;
+ (id)oneKeyBindWithPhone:(id)arg1 password:(id)arg2;
+ (id)getOneKeyPhoneNumWithToen:(id)arg1 andOpenID:(id)arg2;
+ (id)loginsWithOneKey:(id)arg1 andOpenID:(id)arg2;
+ (id)logoutWithTime:(long long)arg1;
+ (id)refreshAuthTokenWithRefreshToken:(id)arg1;
+ (id)verifyMobile:(id)arg1 nationCode:(long long)arg2 authNum:(id)arg3 password:(id)arg4 type:(long long)arg5;
+ (id)changeMobile:(id)arg1 nationCode:(long long)arg2 authNum:(id)arg3 password:(id)arg4;
+ (id)unbindMobile:(id)arg1;
+ (id)unbindSocial:(long long)arg1 account:(id)arg2;
+ (id)unbindWithType:(long long)arg1 account:(id)arg2;
+ (id)bindMobile:(id)arg1 nationCode:(long long)arg2 authNum:(id)arg3 needPass:(_Bool)arg4 password:(id)arg5 type:(long long)arg6;
+ (id)bindSocial:(long long)arg1 account:(id)arg2 password:(id)arg3 expires:(long long)arg4 nickname:(id)arg5 gender:(long long)arg6 unionid:(id)arg7 rawData:(id)arg8;
+ (id)getNologinWithTime:(long long)arg1;
+ (id)findAccountByName:(id)arg1;
+ (id)getMyMobileAccount;
+ (id)retrievePasswordWithAccount:(id)arg1 password:(id)arg2 authNum:(id)arg3 nationCode:(long long)arg4;
+ (id)postImageWithParams:(id)arg1;
+ (id)getImageWithQuery:(id)arg1 params:(id)arg2;
+ (id)unionLoginWithToken:(id)arg1 uid:(id)arg2;
+ (id)putUserBindInfoWithType:(long long)arg1 account:(id)arg2 password:(id)arg3;
+ (id)putMeWithParams:(id)arg1;
+ (id)getUserBindInfo;
+ (id)getMe;
+ (id)userloginWithParams:(id)arg1;
+ (id)loginsWithType:(long long)arg1 params:(id)arg2 time:(long long)arg3;
+ (void)logoutWithTime:(long long)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
+ (void)nologinWithTime:(long long)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
+ (void)loginsWithType:(long long)arg1 params:(id)arg2 time:(long long)arg3 success:(CDUnknownBlockType)arg4 fail:(CDUnknownBlockType)arg5;
+ (id)invalidArgumentsError;
+ (id)responseNilOrDictionaryFlattenMap:(id)arg1;
+ (id)responseDictionaryFlattenMap:(id)arg1;
+ (id)loginTypeToPlatform:(long long)arg1;

@end

