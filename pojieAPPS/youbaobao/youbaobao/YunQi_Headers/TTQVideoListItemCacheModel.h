//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface TTQVideoListItemCacheModel : NSObject
{
    long long _categoryID;
    NSString *_jsonString;
    NSDate *_cacheTime;
}

@property(retain, nonatomic) NSDate *cacheTime; // @synthesize cacheTime=_cacheTime;
@property(copy, nonatomic) NSString *jsonString; // @synthesize jsonString=_jsonString;
@property(nonatomic) long long categoryID; // @synthesize categoryID=_categoryID;
- (void).cxx_destruct;

@end

