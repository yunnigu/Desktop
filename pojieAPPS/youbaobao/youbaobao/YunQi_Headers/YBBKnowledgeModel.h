//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YBBHomeModel-Protocol.h"

@class NSString;

@interface YBBKnowledgeModel : NSObject <YBBHomeModel>
{
    _Bool _is_get;
    unsigned long long _mid;
    NSString *_title;
    NSString *_content;
    NSString *_tag;
    NSString *_img;
    NSString *_price;
    unsigned long long _sales;
    NSString *_url;
    NSString *_author;
}

+ (void)initialize;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(nonatomic) _Bool is_get; // @synthesize is_get=_is_get;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) unsigned long long sales; // @synthesize sales=_sales;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long mid; // @synthesize mid=_mid;
- (void).cxx_destruct;
- (id)targetWithContext:(id)arg1;
@property(nonatomic) double rowHeight;
@property(copy, nonatomic) NSString *cellClass; // @dynamic cellClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

