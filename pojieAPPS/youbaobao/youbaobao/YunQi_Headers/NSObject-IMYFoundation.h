//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (IMYFoundation)
+ (_Bool)imy_replaceClassMethod:(SEL)arg1 withBlock:(id)arg2 error:(id *)arg3;
+ (_Bool)imy_replaceMethod:(SEL)arg1 withBlock:(id)arg2 error:(id *)arg3;
+ (_Bool)imy_swizzleClassMethod:(SEL)arg1 withClassMethod:(SEL)arg2 error:(id *)arg3;
+ (_Bool)imy_swizzleMethod:(SEL)arg1 withMethod:(SEL)arg2 error:(id *)arg3;
+ (id)imy_defaultQualityQueue;
+ (_Bool)imy_hasAsyncBlockForKey:(id)arg1;
+ (void)imy_cancelBlockForKey:(id)arg1;
+ (void)imy_asyncBlock:(CDUnknownBlockType)arg1 onQueue:(id)arg2 afterSecond:(double)arg3 forKey:(id)arg4;
+ (void)imy_syncMainExecuteBlock:(CDUnknownBlockType)arg1;
+ (void)imy_asyncMainExecuteBlock:(CDUnknownBlockType)arg1;
+ (void)imy_asyncMainBlock:(CDUnknownBlockType)arg1 afterSecond:(double)arg2;
+ (void)imy_asyncMainBlock:(CDUnknownBlockType)arg1;
- (_Bool)imy_isBlankString;
- (_Bool)imy_isNotBlankString;
- (_Bool)imy_isEmptyString;
- (_Bool)imy_isNotEmptyString;
- (void)imy_syncMainExecuteBlock:(CDUnknownBlockType)arg1;
- (void)imy_asyncMainExecuteBlock:(CDUnknownBlockType)arg1;
- (void)imy_asyncMainBlock:(CDUnknownBlockType)arg1 afterSecond:(double)arg2;
- (void)imy_asyncMainBlock:(CDUnknownBlockType)arg1;
- (id)imy_callWithSuperClass:(Class)arg1;
- (id)imy_callSuper;
- (id)maybeNSDate;
- (id)maybeNSURL;
- (id)maybeNSValue;
- (id)maybeNSError;
- (id)maybeNSNumber;
- (id)maybeNSMutableData;
- (id)maybeNSData;
- (id)maybeNSMutableSet;
- (id)maybeNSSet;
- (id)maybeNSMutableDictionary;
- (id)maybeNSDictionary;
- (id)maybeNSMutableArray;
- (id)maybeNSArray;
- (id)maybeNSMutableString;
- (id)maybeNSString;
@end

