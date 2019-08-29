//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMYAdZipDownload-Protocol.h"
#import "IMYAdZipDownload_IMYAdSignal-Protocol.h"
#import "IMYAdZipDownload_RACSignal-Protocol.h"

@class NSString;

@interface IMYBaseAdZipDownload : NSObject <IMYAdZipDownload_RACSignal, IMYAdZipDownload_IMYAdSignal, IMYAdZipDownload>
{
}

+ (id)bundleFileNameWithURLString:(id)arg1;
+ (_Bool)unzipFileWithPath:(id)arg1;
+ (void)downloadZipWithURL:(id)arg1 folder:(id)arg2 progress:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4;
+ (void)clearDataWithFolder:(id)arg1;
+ (id)rac_downloadZipWithURL:(id)arg1 folder:(id)arg2;
+ (id)imyad_downloadZipWithURL:(id)arg1 folder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
