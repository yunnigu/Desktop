//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface wxNative : NSObject
{
    struct IMBNativeInterface *_nativeInterface;
    struct MBUdpScriptState *_scriptState;
}

- (void)dealloc;
- (void)setLogDelegate:(id)arg1;
- (id)initWithJSContext:(struct OpaqueJSContext *)arg1 version:(float)arg2 parent:(struct OpaqueJSValue *)arg3;

@end

