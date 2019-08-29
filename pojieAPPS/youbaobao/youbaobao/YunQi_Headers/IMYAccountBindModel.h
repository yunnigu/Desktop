//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYAccountCoding.h"

@class IMYAccountBindSubModel, NSDictionary, NSString;

@interface IMYAccountBindModel : IMYAccountCoding
{
    NSDictionary *_rawDictionary;
    long long _mainLoginType;
    NSString *_myid;
    IMYAccountBindSubModel *_sina;
    IMYAccountBindSubModel *_qq;
    IMYAccountBindSubModel *_weixin;
    IMYAccountBindSubModel *_mobile;
    IMYAccountBindSubModel *_email;
}

+ (id)codingName;
+ (id)codingProperties;
@property(retain, nonatomic) IMYAccountBindSubModel *email; // @synthesize email=_email;
@property(retain, nonatomic) IMYAccountBindSubModel *mobile; // @synthesize mobile=_mobile;
@property(retain, nonatomic) IMYAccountBindSubModel *weixin; // @synthesize weixin=_weixin;
@property(retain, nonatomic) IMYAccountBindSubModel *qq; // @synthesize qq=_qq;
@property(retain, nonatomic) IMYAccountBindSubModel *sina; // @synthesize sina=_sina;
@property(retain, nonatomic) NSString *myid; // @synthesize myid=_myid;
@property(nonatomic) long long mainLoginType; // @synthesize mainLoginType=_mainLoginType;
@property(retain, nonatomic) NSDictionary *rawDictionary; // @synthesize rawDictionary=_rawDictionary;
- (void).cxx_destruct;
- (id)subModelWithType:(long long)arg1;
- (id)initWithRawDictionary:(id)arg1;
@property(readonly, nonatomic) _Bool isBindEmail;
@property(readonly, nonatomic) _Bool isBindMobile;
@property(readonly, nonatomic) _Bool isBindWeixin;
@property(readonly, nonatomic) _Bool isBindQQ;
@property(readonly, nonatomic) _Bool isBindSina;

@end
