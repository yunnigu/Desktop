//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIWebViewDelegate-Protocol.h"

@class NSString, NSURL, UIWebView;
@protocol BriefWebControllerDelegate;

@interface UMSocialBriefWebController : UIViewController <UIWebViewDelegate>
{
    unsigned long long _briefWebControllerType;
    id <BriefWebControllerDelegate> _delegate;
    id _context;
    NSURL *_url;
    UIWebView *_webView;
}

@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) __weak id <BriefWebControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long briefWebControllerType; // @synthesize briefWebControllerType=_briefWebControllerType;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)stopLoading;
- (void)reload;
- (id)navigationInfoWithBriefWebControllerType:(unsigned long long)arg1;
- (void)loadWebUrl;
- (void)viewDidLoad;
- (void)goBack;
- (void)doGoBack;
- (id)initWithBriefWebControllerType:(unsigned long long)arg1 withURL:(id)arg2 withDelegate:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

