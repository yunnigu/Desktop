//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YBBToolsHCGConvertModel : NSObject
{
    NSString *_title;
    NSString *_placeholder;
    NSString *_valueString;
    long long _currentSelectIndex;
}

+ (id)hcgUnits;
+ (id)progesteroneUnits;
+ (id)dataSourceWithType:(unsigned long long)arg1;
@property(nonatomic) long long currentSelectIndex; // @synthesize currentSelectIndex=_currentSelectIndex;
@property(copy, nonatomic) NSString *valueString; // @synthesize valueString=_valueString;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 placeholder:(id)arg2 value:(id)arg3;

@end

