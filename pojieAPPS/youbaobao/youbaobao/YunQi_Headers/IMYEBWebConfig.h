//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMYVKWebViewControllerDelegate-Protocol.h"

@class NSString;

@interface IMYEBWebConfig : NSObject <IMYVKWebViewControllerDelegate>
{
}

+ (id)shareWebConfig;
+ (void)setupIgnoreConfigs;
+ (void)load;
- (_Bool)imy_webVC:(id)arg1 runActionWithMessageModel:(id)arg2;
- (_Bool)imy_webVC:(id)arg1 shouldStartURLRequest:(id)arg2;
- (_Bool)imy_webVC:(id)arg1 interceptShouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 returnVar:(_Bool *)arg4;
- (id)imy_webVC:(id)arg1 urlString:(id)arg2 params:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

