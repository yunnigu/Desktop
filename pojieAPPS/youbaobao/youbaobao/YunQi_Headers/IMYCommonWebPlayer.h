//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYVKWebView.h"

#import "IMYVKWebViewDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class NSString, UIView;
@protocol IMYCommonWebPlayerDelegate;

@interface IMYCommonWebPlayer : IMYVKWebView <IMYVKWebViewDelegate, UIWebViewDelegate, WKNavigationDelegate, WKUIDelegate>
{
    _Bool _active;
    _Bool _isFull;
    _Bool _switchFull;
    _Bool _isPlayCountdownAnimating;
    _Bool _cancelStatus;
    _Bool _playingBeforeSleeping;
    long long _currentID;
    NSString *_videoURL;
    double _seekTime;
    id <IMYCommonWebPlayerDelegate> _videoDelegate;
    UIView *_webBrowserView;
    unsigned long long _tab_id;
    long long _channel;
    NSString *_al_source;
    NSString *_algorithm;
    NSString *_localHtmlPath;
    long long _state;
}

+ (id)getSingletonPlayer;
@property(nonatomic) _Bool playingBeforeSleeping; // @synthesize playingBeforeSleeping=_playingBeforeSleeping;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) _Bool cancelStatus; // @synthesize cancelStatus=_cancelStatus;
@property(copy, nonatomic) NSString *localHtmlPath; // @synthesize localHtmlPath=_localHtmlPath;
@property(readonly, nonatomic) _Bool isPlayCountdownAnimating; // @synthesize isPlayCountdownAnimating=_isPlayCountdownAnimating;
@property(copy, nonatomic) NSString *algorithm; // @synthesize algorithm=_algorithm;
@property(copy, nonatomic) NSString *al_source; // @synthesize al_source=_al_source;
@property(nonatomic) long long channel; // @synthesize channel=_channel;
@property(nonatomic) unsigned long long tab_id; // @synthesize tab_id=_tab_id;
@property(nonatomic) __weak UIView *webBrowserView; // @synthesize webBrowserView=_webBrowserView;
@property(nonatomic) _Bool switchFull; // @synthesize switchFull=_switchFull;
@property(nonatomic) _Bool isFull; // @synthesize isFull=_isFull;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) __weak id <IMYCommonWebPlayerDelegate> videoDelegate; // @synthesize videoDelegate=_videoDelegate;
@property(nonatomic) double seekTime; // @synthesize seekTime=_seekTime;
@property(copy, nonatomic) NSString *videoURL; // @synthesize videoURL=_videoURL;
@property(nonatomic) long long currentID; // @synthesize currentID=_currentID;
- (void).cxx_destruct;
- (void)stopPlayCountdownAnimation;
- (void)startPlayCountdownAnimation;
- (void)postBreakInfo:(id)arg1;
- (void)registerWebAPI;
- (_Bool)isLoading;
- (_Bool)isPaused;
- (_Bool)isPlayingAndNotActive;
- (_Bool)isPlaying;
- (void)setShowProgressControl:(_Bool)arg1;
- (void)setMutePlay:(_Bool)arg1;
- (void)setNeedPlayNext:(_Bool)arg1;
- (void)setVideoTitle:(id)arg1;
- (void)setStage:(id)arg1;
- (void)getSeekTime:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)dismiss:(CDUnknownBlockType)arg1;
- (void)dismiss;
- (void)seekToTime:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pause:(CDUnknownBlockType)arg1;
- (void)pause;
- (void)play;
- (void)clean;
- (void)addToView:(id)arg1 stage:(id)arg2;
- (id)init;
- (void)evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

