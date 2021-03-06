//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MetalImageOutput.h"

@class NSObject;
@protocol OS_dispatch_semaphore;

@interface MetalImagePicture : MetalImageOutput
{
    struct CGSize pixelSizeOfImage;
    _Bool hasProcessedImage;
    _Bool shouldSmoothlyScaleOutput;
    NSObject<OS_dispatch_semaphore> *imageUpdateSemaphore;
}

- (void).cxx_destruct;
- (_Bool)processImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)processImage;
- (void)removeAllTargets;
- (void)dealloc;
- (id)initWithImage:(id)arg1 smoothlyScaleOutput:(_Bool)arg2 removePremultiplication:(_Bool)arg3;
- (id)initWithImage:(id)arg1;

@end

