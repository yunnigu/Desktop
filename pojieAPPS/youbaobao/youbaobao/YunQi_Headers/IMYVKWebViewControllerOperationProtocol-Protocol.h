//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class IMYVKWebView, IMYVKWebViewController, IMYWebMessageModel, NSMutableDictionary, NSString, NSURLRequest;

@protocol IMYVKWebViewControllerOperationProtocol
+ (_Bool)callbackWithMessageModel:(IMYWebMessageModel *)arg1 forWebVC:(IMYVKWebViewController *)arg2;
+ (_Bool)callbackWithWebView:(IMYVKWebView *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2 navigationType:(long long)arg3 returnVar:(_Bool *)arg4 forWebVC:(IMYVKWebViewController *)arg5;
+ (void)callbackAddParametersWithURLRequest:(NSURLRequest *)arg1 forWebVC:(IMYVKWebViewController *)arg2;
+ (NSString *)callbackGenerateURLString:(NSString *)arg1 forWebVC:(IMYVKWebViewController *)arg2;
+ (NSMutableDictionary *)generateURLParametersWithURLString:(NSString *)arg1 forWebVC:(IMYVKWebViewController *)arg2;
- (void)reloadURLString;
@end

