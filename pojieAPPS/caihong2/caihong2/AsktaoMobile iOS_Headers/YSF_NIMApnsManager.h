//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YSF_NIMManager.h"

@interface YSF_NIMApnsManager : YSF_NIMManager
{
    CDUnknownBlockType _handler;
}

@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)onUpdate:(long long)arg1;
- (void)updateApnsSetting:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)currentSetting;

@end
