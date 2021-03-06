//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IMYWebShareUtilBusiness : NSObject
{
    CDUnknownBlockType _didSetupShareButton;
    NSMutableArray *_registerArray;
}

+ (id)generateGlobalShareURLWithParams:(id)arg1;
+ (void)generateGlobalShareURLWithParams:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (void)addEventWithPageInfo:(id)arg1 andShareType:(long long)arg2;
+ (id)shareInstance;
+ (void)addCheckShowShareButtonWithBlock:(CDUnknownBlockType)arg1 level:(long long)arg2;
+ (_Bool)hasShowShareButtonWithURLString:(id)arg1;
@property(retain, nonatomic) NSMutableArray *registerArray; // @synthesize registerArray=_registerArray;
@property(copy, nonatomic) CDUnknownBlockType didSetupShareButton; // @synthesize didSetupShareButton=_didSetupShareButton;
- (void).cxx_destruct;
- (void)showYoubaobaoShareSheetWithController:(id)arg1 webView:(id)arg2 schemePath:(id)arg3 favorite:(_Bool)arg4 complateBlock:(CDUnknownBlockType)arg5;
- (void)newShowShareSheetWithController:(id)arg1 webView:(id)arg2 schemePath:(id)arg3 sharePageInfo:(id)arg4 complateBlock:(CDUnknownBlockType)arg5;
- (void)showShareSheetWithController:(id)arg1 webView:(id)arg2 schemePath:(id)arg3 complateBlock:(CDUnknownBlockType)arg4;
- (void)showShareSheetWithController:(id)arg1 getPageInfoBlock:(CDUnknownBlockType)arg2 complateBlock:(CDUnknownBlockType)arg3;
- (void)showEBShareSheetWithController:(id)arg1 webView:(id)arg2 schemePath:(id)arg3 complateBlock:(CDUnknownBlockType)arg4;
- (void)showEBShareSheetWithController:(id)arg1 getPageInfoBlock:(CDUnknownBlockType)arg2 complateBlock:(CDUnknownBlockType)arg3;
- (void)showShareLoadingWithController:(id)arg1 shareType:(long long)arg2 pageInfo:(id)arg3 sharePageInfo:(id)arg4 complateBlock:(CDUnknownBlockType)arg5;
- (void)showShareLoadingWithController:(id)arg1 shareType:(long long)arg2 pageInfo:(id)arg3 complateBlock:(CDUnknownBlockType)arg4;
- (void)requestFinishedWithResult:(id)arg1 shareType:(long long)arg2 controller:(id)arg3 pageInfo:(id)arg4 complateBlock:(CDUnknownBlockType)arg5;
- (void)requestFinishedWithPageInfo:(id)arg1 controller:(id)arg2 complateBlock:(CDUnknownBlockType)arg3;
- (id)getShareInfoWithWebView:(id)arg1 uriPath:(id)arg2;
- (id)getShareInfoWithWebView:(id)arg1;
- (id)registerForURLKey:(id)arg1;
- (void)addRegister:(id)arg1;
- (void)addDoorData;
- (void)setupShareButton:(id)arg1 usingIcon:(_Bool)arg2;
- (void)addRegisterWithRequestParams:(id)arg1;
- (id)init;

@end

