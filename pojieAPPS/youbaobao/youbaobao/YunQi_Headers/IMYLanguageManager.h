//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LanguagesManager.h"

@class NSMapTable;

@interface IMYLanguageManager : LanguagesManager
{
    NSMapTable *_actionMap;
}

+ (id)displayStringWithFormat:(id)arg1 args:(id)arg2;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMapTable *actionMap; // @synthesize actionMap=_actionMap;
- (void).cxx_destruct;
- (id)actionForObject:(id)arg1;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2;
- (void)languagesDidChanged;
- (id)init;

@end

