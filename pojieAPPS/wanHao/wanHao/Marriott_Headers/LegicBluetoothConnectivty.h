//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CBPeripheralManagerDelegate-Protocol.h"

@class CBPeripheralManager, LegicBluetoothCharacteristic, LegicBluetoothService, NSMutableArray, NSString;
@protocol LegicBluetoothConnectivityDelegate, OS_dispatch_queue;

@interface LegicBluetoothConnectivty : NSObject <CBPeripheralManagerDelegate>
{
    NSObject<OS_dispatch_queue> *queue;
    _Bool _connected;
    _Bool _subsequentRead;
    _Bool _readStatus;
    _Bool _isAdvertising;
    NSString *_module_name;
    id <LegicBluetoothConnectivityDelegate> _delegate;
    CBPeripheralManager *_manager;
    NSMutableArray *_services;
    long long _ble_status;
    unsigned long long _requestReadOffset;
    NSString *_errorDomain;
    LegicBluetoothService *_cachedService;
    LegicBluetoothCharacteristic *_cachedReadCharacteristic;
    LegicBluetoothCharacteristic *_cachedWriteCharacterstic;
}

+ (id)sharedManager;
@property(retain, nonatomic) LegicBluetoothCharacteristic *cachedWriteCharacterstic; // @synthesize cachedWriteCharacterstic=_cachedWriteCharacterstic;
@property(retain, nonatomic) LegicBluetoothCharacteristic *cachedReadCharacteristic; // @synthesize cachedReadCharacteristic=_cachedReadCharacteristic;
@property(retain, nonatomic) LegicBluetoothService *cachedService; // @synthesize cachedService=_cachedService;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property _Bool isAdvertising; // @synthesize isAdvertising=_isAdvertising;
@property unsigned long long requestReadOffset; // @synthesize requestReadOffset=_requestReadOffset;
@property _Bool readStatus; // @synthesize readStatus=_readStatus;
@property _Bool subsequentRead; // @synthesize subsequentRead=_subsequentRead;
@property _Bool connected; // @synthesize connected=_connected;
@property long long ble_status; // @synthesize ble_status=_ble_status;
@property(retain) NSMutableArray *services; // @synthesize services=_services;
@property(retain, nonatomic) CBPeripheralManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) id <LegicBluetoothConnectivityDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *module_name; // @synthesize module_name=_module_name;
- (void).cxx_destruct;
- (id)getErrorInfos:(unsigned long long)arg1;
- (id)getError:(unsigned long long)arg1;
- (void)error:(id)arg1;
- (void)reactOnBluetoothState:(long long)arg1;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (void)peripheralManager:(id)arg1 didAddService:(id)arg2 error:(id)arg3;
- (void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;
- (void)peripheralManager:(id)arg1 didReceiveWriteRequests:(id)arg2;
- (void)peripheralManager:(id)arg1 didReceiveReadRequest:(id)arg2;
- (struct _NSRange)getRange:(unsigned short)arg1 length:(unsigned short)arg2;
- (_Bool)subsequentReadRequest:(unsigned short)arg1 length:(unsigned short)arg2;
- (_Bool)checkRangesWithOffset:(unsigned short)arg1 length:(unsigned short)arg2;
- (void)checkConnected;
- (void)changeStatus:(long long)arg1;
- (_Bool)isReady;
- (_Bool)isBleSupported;
- (_Bool)stopAdv;
- (_Bool)startAdv;
- (void)stop;
- (void)reset;
- (id)getAdvData;
- (_Bool)setData:(id)arg1 service:(id)arg2 characteristic:(id)arg3;
- (_Bool)disableService:(id)arg1;
- (_Bool)enableService:(id)arg1;
- (void)removeAllServices;
- (_Bool)removeService:(id)arg1;
- (_Bool)addService:(id)arg1 characteristics:(id)arg2 withBaseUUID:(id)arg3;
- (id)getCachedWriteCharaceristic:(id)arg1 service:(id)arg2;
- (id)getCachedReadCharaceristic:(id)arg1 service:(id)arg2;
- (id)getCharaceristic:(id)arg1 service:(id)arg2;
- (id)getCachedService:(id)arg1;
- (id)getService:(id)arg1;
- (_Bool)isServiceFound:(id)arg1;
- (void)checkServices;
- (void)checkServicesAfterInit;
- (void)storeServiceStateBeforeReset;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

