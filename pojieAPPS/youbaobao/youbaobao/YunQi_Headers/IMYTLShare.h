//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLModel.h"

@class NSString;

@interface IMYTLShare : IMYTLModel
{
    NSString *_share_id;
    NSString *_share_title;
    NSString *_share_content;
}

@property(copy, nonatomic) NSString *share_content; // @synthesize share_content=_share_content;
@property(copy, nonatomic) NSString *share_title; // @synthesize share_title=_share_title;
@property(copy, nonatomic) NSString *share_id; // @synthesize share_id=_share_id;
- (void).cxx_destruct;
- (id)getShareStringFrom:(id)arg1 eventDate:(id)arg2 listCache:(id)arg3;

@end

