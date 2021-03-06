//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZXLuminanceSource.h"

@class ZXByteArray;

@interface ZXPlanarYUVLuminanceSource : ZXLuminanceSource
{
    int _dataWidth;
    int _dataHeight;
    int _left;
    int _top;
    ZXByteArray *_yuvData;
}

@property(readonly, nonatomic) int top; // @synthesize top=_top;
@property(readonly, nonatomic) int left; // @synthesize left=_left;
@property(readonly, nonatomic) int dataHeight; // @synthesize dataHeight=_dataHeight;
@property(readonly, nonatomic) int dataWidth; // @synthesize dataWidth=_dataWidth;
@property(readonly, nonatomic) ZXByteArray *yuvData; // @synthesize yuvData=_yuvData;
- (void).cxx_destruct;
- (void)reverseHorizontal:(int)arg1 height:(int)arg2;
@property(readonly, nonatomic) int thumbnailHeight;
@property(readonly, nonatomic) int thumbnailWidth;
- (int *)renderThumbnail;
- (id)crop:(int)arg1 top:(int)arg2 width:(int)arg3 height:(int)arg4;
- (_Bool)cropSupported;
- (id)matrix;
- (id)rowAtY:(int)arg1 row:(id)arg2;
- (id)initWithYuvData:(char *)arg1 yuvDataLen:(int)arg2 dataWidth:(int)arg3 dataHeight:(int)arg4 left:(int)arg5 top:(int)arg6 width:(int)arg7 height:(int)arg8 reverseHorizontal:(_Bool)arg9;

@end

