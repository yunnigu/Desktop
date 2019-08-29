//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "POSBlobInputStreamDataSource-Protocol.h"

@class ALAsset, ALAssetRepresentation, ALAssetsLibrary, NSError, NSString, NSURL;
@protocol OS_dispatch_queue, POSAssetReader;

@interface POSBlobInputStreamAssetDataSource : NSObject <POSBlobInputStreamDataSource>
{
    _Bool _openSynchronously;
    NSObject<OS_dispatch_queue> *_openDispatchQueue;
    NSError *_error;
    NSURL *_assetURL;
    ALAssetsLibrary *_assetsLibrary;
    ALAsset *_asset;
    ALAssetRepresentation *_assetRepresentation;
    long long _assetSize;
    id <POSAssetReader> _assetReader;
    long long _readOffset;
}

+ (id)sharedOpenDispatchQueue;
@property(nonatomic) long long readOffset; // @synthesize readOffset=_readOffset;
@property(retain, nonatomic) id <POSAssetReader> assetReader; // @synthesize assetReader=_assetReader;
@property(nonatomic) long long assetSize; // @synthesize assetSize=_assetSize;
@property(retain, nonatomic) ALAssetRepresentation *assetRepresentation; // @synthesize assetRepresentation=_assetRepresentation;
@property(retain, nonatomic) ALAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) ALAssetsLibrary *assetsLibrary; // @synthesize assetsLibrary=_assetsLibrary;
@property(retain, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *openDispatchQueue; // @synthesize openDispatchQueue=_openDispatchQueue;
@property(nonatomic, getter=shouldOpenSynchronously) _Bool openSynchronously; // @synthesize openSynchronously=_openSynchronously;
- (void).cxx_destruct;
- (id)p_lockForOpening;
- (id)p_assetReaderForAssetRepresentation:(id)arg1;
- (void)p_open;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
@property(readonly, nonatomic, getter=isAtEnd) _Bool atEnd; // @dynamic atEnd;
@property(readonly, nonatomic) _Bool hasBytesAvailable; // @dynamic hasBytesAvailable;
- (void)open;
@property(readonly, nonatomic, getter=isOpenCompleted) _Bool openCompleted; // @dynamic openCompleted;
- (id)initWithAssetURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
