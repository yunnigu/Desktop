//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYRecordCellVM.h"

@class NSArray, RACCommand, RACReplaySubject, RACSignal;

@interface IMYRecordMultiIconCellVM : IMYRecordCellVM
{
    NSArray *_iconImages;
    NSArray *_flagIndexs;
    long long _cellSelected;
    RACCommand *_multiIconSelectCMD;
    RACCommand *_multiIconDeleteCMD;
    RACCommand *_multiIconChangeSelectCMD;
    RACReplaySubject *_multiPressedSubject;
    RACSignal *_multiPressedSignal;
}

@property(retain, nonatomic) RACSignal *multiPressedSignal; // @synthesize multiPressedSignal=_multiPressedSignal;
@property(retain, nonatomic) RACReplaySubject *multiPressedSubject; // @synthesize multiPressedSubject=_multiPressedSubject;
@property(retain, nonatomic) RACCommand *multiIconChangeSelectCMD; // @synthesize multiIconChangeSelectCMD=_multiIconChangeSelectCMD;
@property(retain, nonatomic) RACCommand *multiIconDeleteCMD; // @synthesize multiIconDeleteCMD=_multiIconDeleteCMD;
@property(retain, nonatomic) RACCommand *multiIconSelectCMD; // @synthesize multiIconSelectCMD=_multiIconSelectCMD;
@property(nonatomic) long long cellSelected; // @synthesize cellSelected=_cellSelected;
@property(retain, nonatomic) NSArray *flagIndexs; // @synthesize flagIndexs=_flagIndexs;
@property(retain, nonatomic) NSArray *iconImages; // @synthesize iconImages=_iconImages;
- (void).cxx_destruct;
@property(nonatomic) long long vmType; // @dynamic vmType;
- (id)init;

@end
