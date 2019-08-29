//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, RACSignal;

@interface YBBToolsVaccinumVM : NSObject
{
    RACSignal *_updatedContentSignal;
    RACSignal *_dataSourceChangeSignal;
    RACSignal *_loadLocalFinishedSignal;
    NSArray *_vaccinumList;
}

@property(retain, nonatomic) NSArray *vaccinumList; // @synthesize vaccinumList=_vaccinumList;
@property(readonly, nonatomic) RACSignal *loadLocalFinishedSignal; // @synthesize loadLocalFinishedSignal=_loadLocalFinishedSignal;
@property(readonly, nonatomic) RACSignal *dataSourceChangeSignal; // @synthesize dataSourceChangeSignal=_dataSourceChangeSignal;
@property(readonly, nonatomic) RACSignal *updatedContentSignal; // @synthesize updatedContentSignal=_updatedContentSignal;
- (void).cxx_destruct;
- (id)vaccinumDateString:(id)arg1;
- (id)baseVaccinumDate:(id)arg1;
- (id)vaccinumAtIndexPath:(id)arg1;
- (void)commitChange;
- (void)updateVaccinumList;
- (unsigned long long)updateMark:(_Bool)arg1 atIndexPath:(id)arg2;
- (void)updateDataFromServer;
- (void)requestUserData;
- (void)requestData;
- (void)loadFromLocalData;
- (double)heightForViewModelAtIndexPath:(id)arg1;
- (id)detailViewModelForIndexPath:(id)arg1;
- (_Bool)didSetVaccinumTimeAtIndexPath:(id)arg1;
- (_Bool)usefulAtIndexPath:(id)arg1;
- (_Bool)markAtIndexPath:(id)arg1;
- (id)introductionAtIndexPath:(id)arg1;
- (id)timeAtIndexPath:(id)arg1;
- (id)countAtIndexPath:(id)arg1;
- (id)nameAtIndexPath:(id)arg1;
- (id)headerTitleInSection:(long long)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)indexPathForAgeMonth:(long long)arg1;
- (id)indexPathForFirstNotBeMarked;
- (id)init;

@end
