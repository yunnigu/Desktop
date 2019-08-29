//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "IMYVKWebViewControllerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class IMYCaptionView, IMYVKWebViewController, NSString, TTQTopSeaResTitleV;

@interface SYSearchResultWithH5VC : IMYPublicBaseViewController <IMYVKWebViewControllerDelegate, UITextFieldDelegate>
{
    _Bool _isPopToOriginalVC;
    TTQTopSeaResTitleV *_searchBar;
    IMYVKWebViewController *_webVC;
    IMYCaptionView *_loadingView;
    NSString *_keyword;
    long long _current_tab;
    long long _from;
    long long _search_from;
    long long _pos_id;
    long long _words_type;
    NSString *_location;
    NSString *_lastTextFiledText;
}

@property(copy, nonatomic) NSString *lastTextFiledText; // @synthesize lastTextFiledText=_lastTextFiledText;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(nonatomic) long long words_type; // @synthesize words_type=_words_type;
@property(nonatomic) long long pos_id; // @synthesize pos_id=_pos_id;
@property(nonatomic) long long search_from; // @synthesize search_from=_search_from;
@property(nonatomic) long long from; // @synthesize from=_from;
@property(nonatomic) long long current_tab; // @synthesize current_tab=_current_tab;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) IMYCaptionView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) IMYVKWebViewController *webVC; // @synthesize webVC=_webVC;
@property(retain, nonatomic) TTQTopSeaResTitleV *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) _Bool isPopToOriginalVC; // @synthesize isPopToOriginalVC=_isPopToOriginalVC;
- (void).cxx_destruct;
- (void)cancelButtonAction:(id)arg1;
- (void)searchH5Action:(id)arg1;
- (void)imy_webVCDidLoadFinished:(id)arg1;
- (_Bool)imy_webVC:(id)arg1 shouldStartURLRequest:(id)arg2;
- (void)textField:(id)arg1;
- (void)textFieldTextChange:(id)arg1;
- (void)search:(id)arg1;
- (void)webHandler;
- (id)urlString;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
