//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface YBBHomeGlobalSearchAskDataModel : NSObject
{
    long long _search_type;
    long long _total;
    long long _page;
    NSArray *_results;
    NSString *_cust;
    NSString *_search_key;
}

+ (void)initialize;
@property(copy, nonatomic) NSString *search_key; // @synthesize search_key=_search_key;
@property(copy, nonatomic) NSString *cust; // @synthesize cust=_cust;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(nonatomic) long long total; // @synthesize total=_total;
@property(nonatomic) long long search_type; // @synthesize search_type=_search_type;
- (void).cxx_destruct;

@end

