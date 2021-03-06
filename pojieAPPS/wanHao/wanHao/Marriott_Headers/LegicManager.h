//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LegicIDConnectManager.h"

#import "LegicSyncDeviceDelegate-Protocol.h"
#import "TsmConnectionDelegate-Protocol.h"

@class ConnectionListenerSDKImpl, NSMutableArray, NSMutableDictionary, NSString, NSTimer, RegisterWalletListenerSDKImpl, SdkListenerImpl, SyncDeviceListenerLibImpl, TsmConnection, UnregisterWalletConnectionDelegateImpl;

@interface LegicManager : LegicIDConnectManager <LegicSyncDeviceDelegate, TsmConnectionDelegate>
{
    struct SeConnection *seConnection;
    struct SeConnection *pluginConnection;
    TsmConnection *tsmConnection;
    struct CardManagerConnection *cmConnection;
    struct SeConnectedListenerImpl *connectedListener;
    SyncDeviceListenerLibImpl *syncListener;
    RegisterWalletListenerSDKImpl *initialiseListener;
    RegisterWalletListenerSDKImpl *registerListener;
    UnregisterWalletConnectionDelegateImpl *unregisterDelegate;
    struct SeListenerImpl *secureElementListener;
    _Bool seConnected;
    _Bool bleConnected;
    long long walletId;
    ConnectionListenerSDKImpl *connectionListener;
    NSMutableArray *profileIds;
    SdkListenerImpl *uiListener;
    double nextOperationCounter;
    NSTimer *nextOpTimer;
    NSTimer *finishActivationTimer;
    _Bool nextOpRunning;
    _Bool syncInProgress;
    _Bool exhangeSEDataInProgress;
    _Bool bleSupported;
    _Bool isProd;
    _Bool checkBleSupported;
    NSString *walletInstanceId;
    NSMutableDictionary *pendingRemovals;
}

+ (void)setFinishActivation:(_Bool)arg1;
+ (id)instance;
- (void).cxx_destruct;
- (void)removePendingRemoval:(id)arg1;
- (void)connectionResult:(_Bool)arg1;
- (id)getAvailableTechnologies;
- (id)getLogs;
- (_Bool)isProd;
- (void)logString:(id)arg1;
- (void)setLoggingMode:(int)arg1;
- (id)getConfigParam:(id)arg1;
- (void)setConfigParam:(id)arg1 Value:(id)arg2;
- (id)sendMessageToBLEReader:(unsigned long long)arg1 Message:(id)arg2;
- (void)setWalletInstanceId:(id)arg1;
- (void)validateBleSEData;
- (_Bool)checkBluetoothSupported;
- (id)sendJSONToBle:(id)arg1;
- (_Bool)isUserRegistered;
- (void)saveAPNToken:(id)arg1;
- (void)setApplePushNotificationToken:(id)arg1;
- (_Bool)isConnected:(id)arg1;
- (void)setBleConnected:(_Bool)arg1;
- (void)setSeConnected:(_Bool)arg1;
- (void)setExhangeSEDataInProgress:(_Bool)arg1;
- (void)exchangeSEDataResultForBLEWithStatus:(id)arg1 dataId:(id)arg2 data:(id)arg3;
- (void)exchangeSEDataForBLE;
- (id)getPersistentStore;
- (id)handlePushMessage:(id)arg1;
- (void)setWalletId:(long long)arg1;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)setServerURL:(id)arg1;
- (void)setNextOpRunning:(_Bool)arg1;
- (void)setNextOpInterval:(double)arg1;
- (double)getNextOpInterval;
- (void)nextOperationTimeout:(id)arg1;
- (void)setupNextOpTimer;
- (void)nextOperation:(_Bool)arg1;
- (void)synchronize;
- (void)setSyncInProgress:(_Bool)arg1;
- (void)applications:(id)arg1;
- (void)result:(_Bool)arg1 status:(id)arg2;
- (void)syncDevice;
- (void)syncDevice:(id)arg1 walletApplicationInfo:(id)arg2;
- (void)unregisterWallet:(id)arg1;
- (void)removeApp:(id)arg1 WalletAppId:(id)arg2 Qualifier:(id)arg3;
- (void)addApp:(id)arg1 WalletAppId:(id)arg2 Parameters:(id)arg3;
- (void)addApp:(id)arg1 WalletAppId:(id)arg2;
- (void)completeRegistration:(id)arg1 WalletToken:(id)arg2;
- (void)registerWallet:(id)arg1 Info:(id)arg2 PublicSEID:(id)arg3 ConfirmationMethod:(id)arg4;
- (id)getAllCards;
- (id)getSDKVersion;
- (id)getCud;
- (struct AppletController *)getAppletController:(int)arg1;
- (void)setPluginConnection:(struct SeConnection *)arg1;
- (struct SeConnection *)getPluginConnection;
- (id)deactivateAllCards;
- (id)deactivateCard:(id)arg1 Qualifier:(id)arg2;
- (id)activateCard:(id)arg1 Qualifier:(id)arg2;
- (void)finalise;
- (void)setDeviceId:(id)arg1 Save:(_Bool)arg2;
- (void)setDeviceId:(id)arg1;
- (void)reactivateBleCards;
- (void)finishInitialisation;
- (void)finishActivationTimeout:(id)arg1;
- (void)initialiseWithWalletId:(long long)arg1 profileIds:(id)arg2 seUiListener:(id)arg3;
- (id)initWithWalletId:(long long)arg1 profileIds:(id)arg2 seUiListener:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

