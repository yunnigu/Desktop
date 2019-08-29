//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface FSImageTwoTrailFilter : GPUImageFilter
{
    int offset1;
    int offset2;
    struct CGPoint _layer_vector_up;
    struct CGPoint _layer_vector_down;
}

+ (id)fragmentShaderStringWithBlendType:(id)arg1;
@property(nonatomic) struct CGPoint layer_vector_down; // @synthesize layer_vector_down=_layer_vector_down;
@property(nonatomic) struct CGPoint layer_vector_up; // @synthesize layer_vector_up=_layer_vector_up;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)cleanFilter;
- (id)initWithBlendType:(id)arg1;

@end
