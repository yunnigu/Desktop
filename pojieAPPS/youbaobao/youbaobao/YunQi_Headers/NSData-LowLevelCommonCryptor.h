//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (LowLevelCommonCryptor)
- (id)decryptedDataUsingAlgorithm:(unsigned int)arg1 key:(id)arg2 initializationVector:(id)arg3 options:(unsigned int)arg4 error:(int *)arg5;
- (id)decryptedDataUsingAlgorithm:(unsigned int)arg1 key:(id)arg2 options:(unsigned int)arg3 error:(int *)arg4;
- (id)decryptedDataUsingAlgorithm:(unsigned int)arg1 key:(id)arg2 error:(int *)arg3;
- (id)dataEncryptedUsingAlgorithm:(unsigned int)arg1 key:(id)arg2 initializationVector:(id)arg3 options:(unsigned int)arg4 error:(int *)arg5;
- (id)dataEncryptedUsingAlgorithm:(unsigned int)arg1 key:(id)arg2 options:(unsigned int)arg3 error:(int *)arg4;
- (id)dataEncryptedUsingAlgorithm:(unsigned int)arg1 key:(id)arg2 error:(int *)arg3;
- (id)_runCryptor:(struct _CCCryptor *)arg1 result:(int *)arg2;
@end
