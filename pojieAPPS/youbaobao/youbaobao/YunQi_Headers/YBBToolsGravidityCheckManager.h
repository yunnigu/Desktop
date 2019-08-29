//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary;

@interface YBBToolsGravidityCheckManager : NSObject
{
    _Bool _isSync;
    _Bool _isPhotoUploading;
    NSDictionary *_check_photos_map;
    NSDate *_savedPragnantDate;
    NSArray *_gravidityCheckBeginWeeks;
    NSArray *_gravidityCheckEndWeeks;
}

+ (id)sharedManager;
+ (void)load;
@property(retain, nonatomic) NSArray *gravidityCheckEndWeeks; // @synthesize gravidityCheckEndWeeks=_gravidityCheckEndWeeks;
@property(retain, nonatomic) NSArray *gravidityCheckBeginWeeks; // @synthesize gravidityCheckBeginWeeks=_gravidityCheckBeginWeeks;
@property(nonatomic) _Bool isPhotoUploading; // @synthesize isPhotoUploading=_isPhotoUploading;
@property(nonatomic) _Bool isSync; // @synthesize isSync=_isSync;
@property(retain, nonatomic) NSDate *savedPragnantDate; // @synthesize savedPragnantDate=_savedPragnantDate;
@property(retain, nonatomic) NSDictionary *check_photos_map; // @synthesize check_photos_map=_check_photos_map;
- (void).cxx_destruct;
- (void)loadDefaultData;
- (void)uploadLocalPhotos;
- (void)resetCheckPhotosMap;
- (void)updateCheckPhotosMap;
- (id)converToLocalWithUrl:(id)arg1 isLocalUrl:(_Bool *)arg2;
- (void)remainPhotoUpload;
- (id)gcPhotoDocument;
- (id)alertStringWithTime:(long long)arg1 noticeTime:(long long)arg2;
- (void)refreshGravidityChecksWithNewDueDate;
- (void)deleteGravidityChecks:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)updateGravidityChecks:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)getGravidityCheckInfoWithGcid:(long long)arg1 gravidityCheckTime:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)getGravidityCheckListWithHandler:(CDUnknownBlockType)arg1;
- (void)syncNewKeyForIndexContent;
- (id)setupDefalutTableData;
- (id)getGCNotifyList;
- (id)getLocalGCDataList;
- (id)getLocalGCList;
- (void)saveSafeGCDataWithGravidityModel:(id)arg1 isSync:(_Bool)arg2;
- (void)saveGCDataWithGravidityModel:(id)arg1 isSync:(_Bool)arg2;
- (void)saveGravidityChecks:(id)arg1 isSync:(_Bool)arg2;
- (void)updateSafeGravidityCheckModel:(id)arg1 date:(id)arg2;
- (void)updateGravidityCheckModel:(id)arg1 date:(id)arg2;
- (id)getGravidityCheckModelsWithPregnantDay:(long long)arg1;
- (id)init;

@end
