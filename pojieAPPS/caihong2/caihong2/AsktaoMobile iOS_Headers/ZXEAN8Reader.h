//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZXUPCEANReader.h"

@class ZXIntArray;

@interface ZXEAN8Reader : ZXUPCEANReader
{
    ZXIntArray *_decodeMiddleCounters;
}

@property(readonly, nonatomic) ZXIntArray *decodeMiddleCounters; // @synthesize decodeMiddleCounters=_decodeMiddleCounters;
- (void).cxx_destruct;
- (int)barcodeFormat;
- (int)decodeMiddle:(id)arg1 startRange:(struct _NSRange)arg2 result:(id)arg3 error:(id *)arg4;
- (id)init;

@end

