//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, UMSocialWarterMarkConfig;

@interface UMSocialGlobal : NSObject
{
    _Bool _isUrlRequest;
    _Bool _isTruncateShareText;
    _Bool _isUsingHttpsWhenShareContent;
    _Bool _isClearCacheWhenGetUserInfo;
    _Bool _isUsingWaterMark;
    long long _use_coco2dx;
    NSString *_dc;
    NSString *_type;
    UMSocialWarterMarkConfig *_warterMarkConfig;
    NSString *_thumblr_Tag;
    NSMutableDictionary *_isUmengDictionary;
}

+ (id)umSocialSDKVersion;
+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *isUmengDictionary; // @synthesize isUmengDictionary=_isUmengDictionary;
@property(copy) NSString *thumblr_Tag; // @synthesize thumblr_Tag=_thumblr_Tag;
@property(retain, nonatomic) UMSocialWarterMarkConfig *warterMarkConfig; // @synthesize warterMarkConfig=_warterMarkConfig;
@property _Bool isUsingWaterMark; // @synthesize isUsingWaterMark=_isUsingWaterMark;
@property _Bool isClearCacheWhenGetUserInfo; // @synthesize isClearCacheWhenGetUserInfo=_isClearCacheWhenGetUserInfo;
@property _Bool isUsingHttpsWhenShareContent; // @synthesize isUsingHttpsWhenShareContent=_isUsingHttpsWhenShareContent;
@property _Bool isTruncateShareText; // @synthesize isTruncateShareText=_isTruncateShareText;
@property(copy) NSString *type; // @synthesize type=_type;
@property _Bool isUrlRequest; // @synthesize isUrlRequest=_isUrlRequest;
@property(copy) NSString *dc; // @synthesize dc=_dc;
@property long long use_coco2dx; // @synthesize use_coco2dx=_use_coco2dx;
- (void).cxx_destruct;
- (id)init;

@end

