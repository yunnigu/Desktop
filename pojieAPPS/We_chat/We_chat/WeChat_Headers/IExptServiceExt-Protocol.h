//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString;

@protocol IExptServiceExt

@optional
- (void)onPageFlowConfigChange:(NSArray *)arg1 isDel:(_Bool)arg2;
- (void)onSessionUBAConfigChange:(NSString *)arg1 isDel:(_Bool)arg2;
- (void)onSessionConfigChange:(NSString *)arg1 isDel:(_Bool)arg2 needReport:(_Bool)arg3;
- (void)updateWCLabByXExpt:(NSArray *)arg1 deleteExptIds:(NSArray *)arg2 andExptFlag:(unsigned int)arg3 andAppIdList:(NSArray *)arg4;
- (void)onExptItemListChange;
@end
