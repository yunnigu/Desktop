//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface QYCustomActionConfig : NSObject
{
    CDUnknownBlockType _actionBlock;
    CDUnknownBlockType _linkClickBlock;
    CDUnknownBlockType _botClick;
    CDUnknownBlockType _pushMessageClick;
    CDUnknownBlockType _showBotCustomInfoBlock;
    CDUnknownBlockType _commodityActionBlock;
    CDUnknownBlockType _extraClickBlock;
    CDUnknownBlockType _notificationClickBlock;
    CDUnknownBlockType _eventClickBlock;
    CDUnknownBlockType _showQuitBlock;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType showQuitBlock; // @synthesize showQuitBlock=_showQuitBlock;
@property(copy, nonatomic) CDUnknownBlockType eventClickBlock; // @synthesize eventClickBlock=_eventClickBlock;
@property(copy, nonatomic) CDUnknownBlockType notificationClickBlock; // @synthesize notificationClickBlock=_notificationClickBlock;
@property(copy, nonatomic) CDUnknownBlockType extraClickBlock; // @synthesize extraClickBlock=_extraClickBlock;
@property(copy, nonatomic) CDUnknownBlockType commodityActionBlock; // @synthesize commodityActionBlock=_commodityActionBlock;
@property(copy, nonatomic) CDUnknownBlockType showBotCustomInfoBlock; // @synthesize showBotCustomInfoBlock=_showBotCustomInfoBlock;
@property(copy, nonatomic) CDUnknownBlockType pushMessageClick; // @synthesize pushMessageClick=_pushMessageClick;
@property(copy, nonatomic) CDUnknownBlockType botClick; // @synthesize botClick=_botClick;
@property(copy, nonatomic) CDUnknownBlockType linkClickBlock; // @synthesize linkClickBlock=_linkClickBlock;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void).cxx_destruct;
- (void)showQuitWaiting:(CDUnknownBlockType)arg1;
- (void)setDeactivateAudioSessionAfterComplete:(_Bool)arg1;

@end

