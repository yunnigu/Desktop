//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALBBViewController.h"

#import "UIWebViewDelegate-Protocol.h"

@class ALBBWebView, NSString;
@protocol ALBBH5Delegate;

@interface ALBBWebViewController : ALBBViewController <UIWebViewDelegate>
{
    _Bool _needGoBack;
    NSString *_openUrl;
    id <ALBBH5Delegate> _delegate;
    NSString *_callBackUrl;
    CDUnknownBlockType _webViewDidStartLoad;
    CDUnknownBlockType _didFinishLoad;
    CDUnknownBlockType _didFailLoadWithError;
    ALBBWebView *_webView;
}

@property(retain, nonatomic) ALBBWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) _Bool needGoBack; // @synthesize needGoBack=_needGoBack;
@property(copy, nonatomic) CDUnknownBlockType didFailLoadWithError; // @synthesize didFailLoadWithError=_didFailLoadWithError;
@property(copy, nonatomic) CDUnknownBlockType didFinishLoad; // @synthesize didFinishLoad=_didFinishLoad;
@property(copy, nonatomic) CDUnknownBlockType webViewDidStartLoad; // @synthesize webViewDidStartLoad=_webViewDidStartLoad;
@property(copy, nonatomic) NSString *callBackUrl; // @synthesize callBackUrl=_callBackUrl;
@property(nonatomic) __weak id <ALBBH5Delegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *openUrl; // @synthesize openUrl=_openUrl;
- (void).cxx_destruct;
- (_Bool)isCallbackUrl:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)closeWebView;
- (void)onBack;
- (void)stopLoad;
- (void)startLoad;
- (id)webViewTitle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

