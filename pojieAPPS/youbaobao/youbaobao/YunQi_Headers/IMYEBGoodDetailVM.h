//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYEBBaseViewModel.h"

@class IMYEBGoodDetailModel, NSDictionary, NSString;

@interface IMYEBGoodDetailVM : IMYEBBaseViewModel
{
    IMYEBGoodDetailModel *_showModel;
    NSString *_itemId;
    NSString *_pid;
    NSString *_adzone_id;
    NSDictionary *_otherParams;
}

@property(retain, nonatomic) NSDictionary *otherParams; // @synthesize otherParams=_otherParams;
@property(copy, nonatomic) NSString *adzone_id; // @synthesize adzone_id=_adzone_id;
@property(copy, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) IMYEBGoodDetailModel *showModel; // @synthesize showModel=_showModel;
- (void).cxx_destruct;
- (id)cacheKey;
- (void)cancelCollect;
- (void)collect;
- (void)requestData;
- (unsigned long long)initData:(_Bool)arg1;
- (id)initWithItemId:(id)arg1;

@end
