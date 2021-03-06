//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TTQHttpHelper : NSObject
{
}

+ (void)videoPlayerResumeAction;
+ (void)videoPlayerPauseAction;
+ (void)videoPlayerPlayAction;
+ (void)locationChangedViewDidShow;
+ (_Bool)needShowLocationChangedView;
+ (unsigned long long)getCacheCityid;
+ (id)getCacheCityName;
+ (_Bool)isSameLocationInfo:(id)arg1 location2:(id)arg2;
+ (void)cacheLocationInfo:(id)arg1 cityId:(unsigned long long)arg2;
+ (void)cacheLocationInfo:(id)arg1;
+ (id)getLocationCacheInfo;
+ (id)getLocationCityInfoByCityName:(id)arg1;
+ (id)cache_getPath:(id)arg1 params:(id)arg2;
+ (id)deletePath:(id)arg1 params:(id)arg2;
+ (id)postPath:(id)arg1 params:(id)arg2;
+ (id)putPath:(id)arg1 params:(id)arg2;
+ (id)getPath:(id)arg1 params:(id)arg2;
+ (id)postPath:(id)arg1 params:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
+ (id)method:(long long)arg1 path:(id)arg2 host:(id)arg3 params:(id)arg4 headers:(id)arg5 progressBlock:(CDUnknownBlockType)arg6 requestSerializerType:(long long)arg7;
+ (id)method:(long long)arg1 path:(id)arg2 host:(id)arg3 params:(id)arg4 progressBlock:(CDUnknownBlockType)arg5;
+ (id)method:(long long)arg1 path:(id)arg2 host:(id)arg3 params:(id)arg4;

@end

