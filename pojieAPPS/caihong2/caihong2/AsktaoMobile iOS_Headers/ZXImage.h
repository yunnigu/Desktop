//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ZXImage : NSObject
{
    struct CGImage *_cgimage;
}

+ (void)setColorIntensities:(char *)arg1 color:(struct CGColor *)arg2;
+ (id)imageWithMatrix:(id)arg1 onColor:(struct CGColor *)arg2 offColor:(struct CGColor *)arg3;
+ (id)imageWithMatrix:(id)arg1;
@property(readonly, nonatomic) struct CGImage *cgimage; // @synthesize cgimage=_cgimage;
- (void)dealloc;
- (unsigned long long)height;
- (unsigned long long)width;
- (id)initWithURL:(id)arg1;
- (id)initWithCGImageRef:(struct CGImage *)arg1;

@end
