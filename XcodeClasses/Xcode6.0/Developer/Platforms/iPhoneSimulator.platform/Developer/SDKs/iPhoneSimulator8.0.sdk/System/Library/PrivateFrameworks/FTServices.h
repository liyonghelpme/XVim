//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct in_addr {
    unsigned int _field1;
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/FTServices.framework/FTServices
// UUID: 41A6EAAD-7EF2-3B29-A9E2-0532252608F6
//
//                           Arch: x86_64
//                Current version: 800.0.0
//          Compatibility version: 1.0.0
//                 Source version: 530.6.0.0.0
//            Minimum iOS version: 8.0.0
//                    SDK version: 8.0.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol APSConnectionDelegate <NSObject>
- (void)connection:(APSConnection *)arg1 didReceivePublicToken:(NSData *)arg2;

@optional
- (void)connectionDidReconnect:(APSConnection *)arg1;
- (void)connection:(APSConnection *)arg1 didChangeConnectedStatus:(_Bool)arg2;
- (void)connection:(APSConnection *)arg1 didFailToSendOutgoingMessage:(APSOutgoingMessage *)arg2 error:(NSError *)arg3;
- (void)connection:(APSConnection *)arg1 didSendOutgoingMessage:(APSOutgoingMessage *)arg2;
- (void)connection:(APSConnection *)arg1 didReceiveMessageForTopic:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (void)connection:(APSConnection *)arg1 didReceiveIncomingMessage:(APSIncomingMessage *)arg2;
- (void)connection:(APSConnection *)arg1 didReceiveToken:(NSData *)arg2 forTopic:(NSString *)arg3 identifier:(NSString *)arg4;
@end

@protocol FTMessageQueueDelegate
- (void)queue:(FTMessageQueue *)arg1 hitTimeoutForMessage:(IDSBaseMessage *)arg2;
@end

@protocol NSCopying
- (id)copyWithZone:(struct _NSZone *)arg1;
@end

@protocol NSObject
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;
@property(readonly) unsigned long long hash;
- (struct _NSZone *)zone;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(Protocol *)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)isProxy;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (id)self;
- (Class)class;
- (_Bool)isEqual:(id)arg1;

@optional
@property(readonly, copy) NSString *debugDescription;
@end

@interface FTDeviceSupport : NSObject
{
    NSString *_number;
    _Bool _blockPost;
    _Bool _supportsFrontCamera;
    _Bool _supportsBackCamera;
    _Bool _supportsiMessage;
    _Bool _supportsSMS;
    _Bool _supportsMMS;
    _Bool _mmsConfigured;
    _Bool _supportsHandoff;
    _Bool _supportsTethering;
    _Bool _supportsFT;
    _Bool _supportsFTA;
    _Bool _supportsWiFi;
    _Bool _supportsWLAN;
    _Bool _supportsNonWiFiFaceTime;
    _Bool _supportsCellularData;
    _Bool _shouldUseSIMState;
    _Bool _commCenterDead;
    _Bool _simBecameNotReady;
    _Bool _simInserted;
    int _carrierBundleSupported;
    int _iMessageAllowedToken;
    _Bool _faceTimeBlocked;
    _Bool _iMessageBlocked;
    _Bool _accountModificationRestricted;
    long long _performanceClass;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) _Bool mmsConfigured; // @synthesize mmsConfigured=_mmsConfigured;
@property(readonly, nonatomic) _Bool supportsMMS; // @synthesize supportsMMS=_supportsMMS;
@property(readonly, nonatomic) _Bool supportsSMS; // @synthesize supportsSMS=_supportsSMS;
@property(readonly, nonatomic) _Bool supportsCellularData; // @synthesize supportsCellularData=_supportsCellularData;
@property(readonly, nonatomic) _Bool supportsWiFi; // @synthesize supportsWiFi=_supportsWiFi;
@property(readonly, nonatomic) _Bool supportsWLAN; // @synthesize supportsWLAN=_supportsWLAN;
@property(readonly, nonatomic) _Bool supportsBackFacingCamera; // @synthesize supportsBackFacingCamera=_supportsBackCamera;
@property(readonly, nonatomic) _Bool supportsFrontFacingCamera; // @synthesize supportsFrontFacingCamera=_supportsFrontCamera;
@property(readonly, nonatomic) _Bool supportsTethering; // @synthesize supportsTethering=_supportsTethering;
@property(readonly, nonatomic) _Bool supportsHandoff; // @synthesize supportsHandoff=_supportsHandoff;
@property(readonly, nonatomic) _Bool nonWifiCallingAvailable;
@property(readonly, nonatomic) _Bool nonWifiFaceTimeAvailable;
@property(readonly, nonatomic) long long deviceType;
@property(readonly, nonatomic) long long performanceClass;
- (void)_registerForLockdownNotifications;
- (void)_lockdownStateChanged:(id)arg1;
@property(readonly, nonatomic) NSString *deviceInformationString;
@property(readonly, nonatomic) NSString *productBuildVersion;
@property(readonly, nonatomic) NSString *productVersion;
@property(readonly, nonatomic) NSString *productName;
@property(readonly, nonatomic) NSString *userAgentString;
@property(readonly, nonatomic) NSString *telephoneNumber;
@property(readonly, nonatomic) _Bool isTelephonyDevice;
@property(readonly, nonatomic) _Bool supportsAppleIDIdentification;
@property(readonly, nonatomic) _Bool supportsSMSIdentification;
@property(readonly, nonatomic) NSDictionary *CTNetworkInformation;
- (void)_handlePhoneNumberRegistrationStateChanged:(id)arg1;
- (void)_handleTechnologyChange:(id)arg1;
- (void)_simStatusChanged:(id)arg1;
@property(readonly, nonatomic) NSString *enclosureColor;
@property(readonly, nonatomic) NSString *deviceColor;
@property(readonly, nonatomic) NSString *deviceName;
@property(readonly, nonatomic) _Bool wantsBreakBeforeMake;
@property(readonly, nonatomic) _Bool SIMInserted;
@property(readonly, nonatomic) _Bool supportsSimultaneousVoiceAndDataRightNow;
@property(readonly, nonatomic) _Bool isC2KEquipment;
@property(readonly, nonatomic) NSDictionary *telephonyCapabilities;
@property(readonly, nonatomic) NSString *deviceTypeIDPrefix;
@property(readonly, nonatomic) NSString *deviceIDPrefix;
@property(readonly, nonatomic) NSString *model;
@property(readonly, nonatomic) _Bool accountModificationRestricted;
@property(readonly, nonatomic) _Bool registrationSupported;
@property(readonly, nonatomic) _Bool conferencingAllowed;
@property(readonly, nonatomic) _Bool conferencingEnabled;
@property(readonly, nonatomic) _Bool conferencingBlocked;
@property(readonly, nonatomic) _Bool supportsNonWiFiCalling;
@property(readonly, nonatomic) _Bool supportsNonWiFiFaceTime; // @synthesize supportsNonWiFiFaceTime=_supportsNonWiFiFaceTime;
@property(readonly, nonatomic) _Bool identityServicesSupported;
@property(readonly, nonatomic) _Bool faceTimeSupported;
@property(readonly, nonatomic) _Bool faceTimeBlocked;
@property(readonly, nonatomic) _Bool faceTimeAvailable;
@property(readonly, nonatomic) _Bool iMessageSupported;
@property(readonly, nonatomic) _Bool iMessageBlocked;
@property(readonly, nonatomic) _Bool iMessageAvailable;
@property(readonly, nonatomic) _Bool callingSupported;
@property(readonly, nonatomic) _Bool callingBlocked;
@property(readonly, nonatomic) _Bool callingAvailable;
@property(readonly, nonatomic) _Bool madridSupported;
@property(readonly, nonatomic) _Bool madridBlocked;
@property(readonly, nonatomic) _Bool madridAvailable;
@property(readonly, nonatomic) _Bool commCenterDead;
- (void)_unregisterForCoreTelephonyNotifications;
- (void)_registerForInternalCoreTelephonyNotifications;
- (void)_registerForCoreTelephonyNotifications;
- (void)_carrierChanged;
- (void)_operatorChanged;
- (void)_unregisterForCommCenterReadyNotifications;
- (void)_registerForCommCenterReadyNotifications;
- (void)_updateCapabilities;
- (void)carrierSettingsChanged:(id)arg1;
- (void)_unregisterForCarrierNotifications;
- (void)_registerForCarrierNotifications;
- (void)_registerForCapabilityNotifications;
- (void)_updateManagedConfigurationSettings;
- (void)_unregisterForManagedConfigurationNotifications;
- (void)_registerForManagedConfigurationNotifications;
- (void)_watchNotifyTokens;
- (void)dealloc;
- (id)init;

@end

@interface FTEmbeddedReachability : NSObject
{
    _Bool localWiFiRef;
    struct __SCNetworkReachability *reachabilityRef;
}

+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
- (long long)currentReachabilityStatus;
- (_Bool)connectionRequired;
- (long long)networkStatusForFlags:(unsigned int)arg1;
- (long long)localWiFiStatusForFlags:(unsigned int)arg1;
- (void)dealloc;

@end

@interface FTEntitlementSupport : NSObject
{
}

+ (id)sharedInstance;
- (_Bool)_disconnectCTServerConnection;
- (_Bool)_reconnectCTServerConnectionIfNecessary;
- (_Bool)_setupCTServerConnection;
- (void)_cleanupMachInfo;
- (void)_unregisterForCTEntitlementNotifications;
- (_Bool)_registerForCTEntitlementNotifications;
- (void)_handleEntitlementNotification:(struct __CFDictionary *)arg1;
- (void)_registrationStateChanged;
- (id)_rawEntitlementValue;
@property(readonly, retain, nonatomic) NSDictionary *registrationState;
@property(readonly, nonatomic) _Bool faceTimeNonWiFiEntitled;
- (id)init;

@end

@interface FTGetRegionMetadataMessage : IDSBaseMessage <NSCopying>
{
    NSString *_language;
    NSDictionary *_responseRegionInformation;
}

@property(copy) NSDictionary *responseRegionInformation; // @synthesize responseRegionInformation=_responseRegionInformation;
@property(copy) NSString *language; // @synthesize language=_language;
- (void)handleResponseDictionary:(id)arg1;
- (id)messageBody;
- (id)requiredKeys;
- (id)bagKey;
- (_Bool)wantsHTTPGet;
- (long long)responseCommand;
- (long long)command;
- (_Bool)wantsBinaryPush;
- (_Bool)wantsCompressedBody;
- (_Bool)wantsHTTPHeaders;
- (_Bool)wantsBagKey;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

@interface FTIDSMessage : IDSBaseMessage <NSCopying>
{
    NSData *_pushCert;
    struct __SecKey *_identityKey;
    NSData *_identityCert;
    struct __SecKey *_identityPublicKey;
    struct __SecKey *_pushKey;
    struct __SecKey *_pushPublicKey;
    NSData *_pushToken;
    NSString *_selfURI;
    NSMutableArray *_certDataArray;
    NSMutableArray *_publicKeyArray;
    NSMutableArray *_privateKeyArray;
    NSMutableArray *_userIDArray;
}

@property(copy, nonatomic) NSMutableArray *userIDArray; // @synthesize userIDArray=_userIDArray;
@property(copy, nonatomic) NSMutableArray *privateKeyArray; // @synthesize privateKeyArray=_privateKeyArray;
@property(copy, nonatomic) NSMutableArray *publicKeyArray; // @synthesize publicKeyArray=_publicKeyArray;
@property(copy, nonatomic) NSMutableArray *certDataArray; // @synthesize certDataArray=_certDataArray;
@property(copy, nonatomic) NSString *selfURI; // @synthesize selfURI=_selfURI;
@property(copy, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(nonatomic) struct __SecKey *pushPublicKey; // @synthesize pushPublicKey=_pushPublicKey;
@property(nonatomic) struct __SecKey *pushPrivateKey; // @synthesize pushPrivateKey=_pushKey;
@property(nonatomic) struct __SecKey *identityPublicKey; // @synthesize identityPublicKey=_identityPublicKey;
@property(copy, nonatomic) NSData *IDCertificate; // @synthesize IDCertificate=_identityCert;
@property(nonatomic) struct __SecKey *identityPrivateKey; // @synthesize identityPrivateKey=_identityKey;
@property(copy, nonatomic) NSData *pushCertificate; // @synthesize pushCertificate=_pushCert;
- (id)additionalMessageHeadersForOutgoingPush;
- (id)additionalMessageHeaders;
- (long long)responseCommand;
- (long long)command;
- (_Bool)wantsIDSServer;
- (_Bool)wantsBinaryPush;
- (_Bool)wantsBodySignature;
- (_Bool)wantsSignature;
- (_Bool)wantsCompressedBody;
- (_Bool)wantsHTTPHeaders;
- (_Bool)wantsBagKey;
- (void)addAuthUserID:(id)arg1 certificate:(id)arg2 privateKey:(struct __SecKey *)arg3 publicKey:(struct __SecKey *)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

@interface FTMessageDelivery : NSObject <FTMessageQueueDelegate>
{
    unsigned int _retries;
    NSNumber *_protocolVersion;
    FTMessageQueue *_queue;
    NSString *_userAgent;
    unsigned long long _maxConcurrentMessages;
    _Bool _retryInAirplaneMode;
    _Bool _logToRegistration;
    IMTimer *_timer;
}

+ (id)_errorForTDMessageDeliveryStatus:(long long)arg1 userInfo:(id)arg2;
+ (id)alloc;
+ (Class)APNSMessageDeliveryClass;
+ (Class)HTTPMessageDeliveryClass;
@property _Bool retryInAirplaneMode; // @synthesize retryInAirplaneMode=_retryInAirplaneMode;
@property unsigned long long maxConcurrentMessages; // @synthesize maxConcurrentMessages=_maxConcurrentMessages;
@property _Bool logToRegistration; // @synthesize logToRegistration=_logToRegistration;
@property(copy) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(copy) NSNumber *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
- (void)_signMessage:(id)arg1 useDataSignatures:(_Bool)arg2 body:(id)arg3 queryString:(id)arg4 intoDictionary:(id)arg5;
- (void)networkStateChanged;
@property(readonly) long long maxLargeMessageSize;
@property(readonly) long long maxMessageSize;
- (void)_setRetryTimer:(double)arg1;
- (void)_clearRetryTimer;
- (void)_retryTimerHit:(id)arg1;
- (_Bool)sendMessage:(id)arg1;
- (void)cancelMessage:(id)arg1;
- (void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2;
- (id)_queue;
@property(readonly) _Bool hasQueuedItems;
@property(readonly) _Bool busy;
@property(readonly) NSArray *allMessages;
@property(readonly) IDSBaseMessage *currentMessage;
@property(readonly) NSArray *queuedMessages;
- (_Bool)_sendMessageAsynchronously:(id)arg1 error:(id *)arg2;
- (void)_informDelegateAboutMessage:(id)arg1 error:(id)arg2 result:(id)arg3 resultCode:(long long)arg4;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end

@interface FTMessageDelivery_APS : FTMessageDelivery <FTMessageQueueDelegate, APSConnectionDelegate>
{
    Class _APSConnectionClass;
    Class _APSOutgoingMessageClass;
    APSConnection *_connection;
    long long _messageSize;
    long long _largeMessageSize;
    NSMutableArray *_enabledTopics;
    NSMutableDictionary *_ftMessageMap;
    NSMutableDictionary *_startDateMap;
    NSMutableDictionary *_bodyMap;
    NSMutableDictionary *_apsMessageMap;
    NSMutableDictionary *_timerMap;
    NSMutableDictionary *_deathTimerMap;
    NSMutableDictionary *_retriesMap;
}

+ (id)sharedInstance;
- (long long)maxLargeMessageSize;
- (long long)maxMessageSize;
- (void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;
- (void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
- (void)connection:(id)arg1 didChangeConnectedStatus:(_Bool)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)_serverBagLoaded:(id)arg1;
- (_Bool)sendMessage:(id)arg1;
- (void)cancelMessage:(id)arg1;
- (void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2;
- (_Bool)busy;
- (void)_dequeueIfNeeded;
- (_Bool)_sendMessageAsynchronously:(id)arg1 error:(id *)arg2;
- (void)invalidate;
- (void)_notifyDelegateAboutError:(id)arg1 forMessage:(id)arg2;
- (id)connection;
- (void)_powerLogEvent:(id)arg1 dictionary:(id)arg2;
- (id)_apsMessageForMessage:(id)arg1 body:(id)arg2;
- (id)_apsMessageBodyForMessage:(id)arg1;
- (void)_updateTopics;
- (id)_requiredTopics;
- (void)_messageNeedsRetry:(id)arg1;
- (void)_messageCompletelyTimedOut:(id)arg1;
- (void)_messageSendTimedOut:(id)arg1;
- (void)_messageACKTimedOut:(id)arg1;
- (void)_sendMessage:(id)arg1 ftMessage:(id)arg2;
- (void)_noteMessageSent:(id)arg1 ftMessage:(id)arg2 body:(id)arg3;
- (void)_noteMessageACKd:(id)arg1 ftMessage:(id)arg2;
- (void)_noteMessageSucceeded:(id)arg1 ftMessage:(id)arg2 error:(id)arg3 result:(id)arg4 resultCode:(long long)arg5;
- (void)_noteMessageFailed:(id)arg1 ftMessage:(id)arg2 allowRetry:(_Bool)arg3 error:(id)arg4;
- (_Bool)_fillMessageParameters:(id *)arg1 ftMessage:(id *)arg2;
- (id)_apsOutgoingMessageForFTMessage:(id)arg1;
- (id)_messageForAPSOutgoingMessage:(id)arg1;
- (id)_bodyForMessage:(id)arg1;
- (long long)_retryCountForMessage:(id)arg1;
- (id)_currentTimers;
- (id)allMessages;
- (id)_currentMessages;
- (id)_currentAPSMessages;
- (_Bool)_isBusyWithMessage:(id)arg1;
- (void)_clearMapForMessageID:(id)arg1;
- (void)_setMapForMessage:(id)arg1 apsMessage:(id)arg2 messageBody:(id)arg3 timeoutTime:(double)arg4 timeoutSelector:(SEL)arg5 retries:(id)arg6;
- (void)_invalidateDeathTimerForMessageID:(id)arg1;
- (void)_invalidateTimerForMessageID:(id)arg1;
- (void)_setEnabledTopics:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface FTMessageDelivery_HTTP : FTMessageDelivery <FTMessageQueueDelegate>
{
    IMRemoteURLConnection *_remoteConnection;
    _Bool _pendingRetryAfterAirplaneMode;
    double _retryTimeAfterAirplaneMode;
}

- (void)networkStateChanged;
- (void)_serverBagLoaded:(id)arg1;
- (_Bool)sendMessage:(id)arg1;
- (void)cancelMessage:(id)arg1;
- (void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2;
- (_Bool)_tryRetryMessageWithTimeInterval:(double)arg1;
- (_Bool)busy;
- (void)_cleanupURLConnection;
- (void)_dequeueIfNeeded;
- (_Bool)_sendMessageAsynchronously:(id)arg1 error:(id *)arg2;
- (void)invalidate;
- (void)_clearRetryTimer;
- (void)_notifyDelegateAboutError:(id)arg1 forMessage:(id)arg2;
- (void)_updateWiFiAssertions;
- (id)_processResultData:(id)arg1 forMessage:(id)arg2 error:(id *)arg3;
- (id)_urlRequestWithURL:(id)arg1 andData:(id)arg2 message:(id)arg3;
- (void)dealloc;
- (id)init;

@end

@interface FTMessageQueue : NSObject
{
    NSMutableArray *_queue;
    NSMutableArray *_addDates;
    id <FTMessageQueueDelegate> _delegate;
}

@property id <FTMessageQueueDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSMutableArray *_addDates; // @synthesize _addDates;
@property(retain) NSMutableArray *_queue; // @synthesize _queue;
- (_Bool)removeMessage:(id)arg1;
- (_Bool)addMessage:(id)arg1;
- (id)dequeueTopMessage;
- (void)removeAllMessages;
- (void)_timeoutHit;
- (void)_setTimeout;
- (void)_clearTimeout;
@property(readonly) long long count;
@property(readonly) NSArray *messages;
@property(readonly) IDSBaseMessage *topMessage;
- (void)dealloc;
- (id)init;

@end

@interface FTNetworkSupport : NSObject
{
    _Bool _enableCriticalReliability;
    _Bool _criticalReliabilityEnabledState;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool enableCriticalReliability;
- (void)_tryToEnableReliability;
- (void)_reallySetCriticalReliability:(_Bool)arg1;
- (void)_setReliabilityTimeoutInterval;
- (void)_clearReliabilityTimeoutInterval;
@property(readonly, nonatomic) _Bool networkReachable;
@property(readonly, nonatomic) _Bool networkActive;
@property(readonly, nonatomic) _Bool networkEnabled;
@property(readonly, nonatomic) _Bool dataActiveAndReachable;
@property(readonly, nonatomic) _Bool willSearchForNetwork;
@property(readonly, nonatomic) _Bool wiFiActiveAndReachable;
@property(readonly, nonatomic) _Bool validNetworkReachable;
@property(readonly, nonatomic) _Bool validNetworkActive;
@property(readonly, nonatomic) _Bool validNetworkEnabled;
@property(readonly, nonatomic) _Bool allowAnyNetwork;

@end

@interface FTPasswordManager : NSObject
{
    NSMutableSet *_runningQueries;
    ACAccountStore *_accountStore;
}

+ (id)_loginUserNotificationForService:(id)arg1 user:(id)arg2 isForBadPassword:(_Bool)arg3 showForgetPassword:(_Bool)arg4 shouldRememberPassword:(_Bool)arg5;
+ (id)sharedInstance;
- (void)cancelRequestID:(id)arg1 serviceIdentifier:(id)arg2;
- (void)requestAuthTokenForUsername:(id)arg1 service:(id)arg2 badPassword:(_Bool)arg3 showForgotPassword:(_Bool)arg4 outRequestID:(id *)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (_Bool)supportsAuthTokenRequests;
- (void)requestPasswordForUsername:(id)arg1 service:(id)arg2 badPassword:(_Bool)arg3 showForgotPassword:(_Bool)arg4 shouldRememberPassword:(_Bool)arg5 outRequestID:(id *)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)setAuthTokenForUsername:(id)arg1 service:(id)arg2 authToken:(id)arg3 profileID:(id)arg4 selfHandle:(id)arg5 outRequestID:(id *)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)setPasswordForUsername:(id)arg1 service:(id)arg2 password:(id)arg3 outRequestID:(id *)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)fetchPasswordForUsername:(id)arg1 service:(id)arg2 outRequestID:(id *)arg3 blockingly:(_Bool)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)fetchAuthTokenForUsername:(id)arg1 service:(id)arg2 outRequestID:(id *)arg3 blockingly:(_Bool)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)init;

@end

@interface FTRegion : NSObject
{
    NSDictionary *_dictionary;
    NSArray *_subRegions;
    FTRegion *_parentRegion;
}

@property(retain) FTRegion *_parentRegion; // @synthesize _parentRegion;
@property(retain) NSDictionary *_dictionary; // @synthesize _dictionary;
- (id)description;
@property(readonly) NSString *regionID;
@property(readonly) NSString *basePhoneNumber;
@property(readonly) NSString *label;
@property(readonly) NSString *isoCode;
- (id)regionWithID:(id)arg1;
@property(readonly) NSArray *subRegions; // @synthesize subRegions=_subRegions;
@property(readonly) FTRegion *parentRegion;
- (void)_setParentRegion:(id)arg1;
- (void)dealloc;
- (id)_initWithDictionary:(id)arg1;

@end

@interface FTRegionSupport : NSObject
{
    NSArray *_regions;
    FTMessageDelivery *_delivery;
}

+ (id)sharedInstance;
@property(retain) FTMessageDelivery *_delivery; // @synthesize _delivery;
@property(retain) NSArray *_regions; // @synthesize _regions;
- (id)regionForID:(id)arg1;
@property(readonly) NSArray *regions;
@property(readonly) _Bool isLoading;
@property(readonly) _Bool isLoaded;
- (void)flushRegions;
- (void)startLoading;
- (void)_buildMessageDeliveryIfNeeded;
- (void)dealloc;

@end

@interface FTServerBag : NSObject
{
    long long _type;
}

+ (id)sharedInstanceForBagType:(long long)arg1;
+ (id)_sharedInstance;
+ (id)_sharedInstanceForType:(long long)arg1;
+ (id)sharedInstance;
@property(readonly) _Bool isServerAvailable;
- (id)urlWithKey:(id)arg1;
- (id)objectForKey:(id)arg1;
@property(readonly) _Bool isInDebilitatedMode;
@property(readonly) _Bool allowUnsignedBags;
@property(readonly) _Bool allowSelfSignedCertificates;
@property(readonly, retain) NSString *apsEnvironmentName;
@property(readonly, retain) NSURL *bagURL;
- (id)_bag;
- (id)_cachedBag;
@property(readonly) _Bool isLoaded;
@property(readonly) _Bool isLoading;
- (void)forceBagLoad;
- (void)startBagLoad;
- (void)dealloc;
- (id)initWithBagType:(long long)arg1;

@end

@interface FTUserConfiguration : NSObject
{
}

+ (id)sharedInstance;
@property(readonly, nonatomic) _Bool _nonWifiFaceTimeEntitled;
@property(nonatomic) _Bool allowAnyNetwork;
@property(nonatomic) _Bool cellularFaceTimeEnabled;
- (_Bool)_adequateInternalOrCarrierInstall;

@end

@interface IDSFaceTimeMessage : FTIDSMessage <NSCopying>
{
    NSData *_sessionToken;
}

@property(copy) NSData *sessionToken; // @synthesize sessionToken=_sessionToken;
- (id)messageBody;
- (id)requiredKeys;
- (_Bool)isValidMessage;
- (_Bool)hasRequiredKeys:(id *)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

@interface IDSAcceptMessage : IDSFaceTimeMessage <NSCopying>
{
    NSData *_selfPushToken;
    NSNumber *_selfNATType;
    NSData *_selfBlob;
    NSData *_selfNATIP;
    NSString *_peerID;
    NSData *_peerPushToken;
    NSNumber *_peerNATType;
    NSData *_peerBlob;
    NSData *_peerNATIP;
    NSNumber *_relayType;
    NSData *_relayConnectionId;
    NSData *_relayTransactionIdAlloc;
    NSData *_relayTokenAllocReq;
    NSData *_selfRelayIP;
    NSNumber *_selfRelayPort;
    NSData *_peerRelayIP;
    NSNumber *_peerRelayPort;
}

@property(copy) NSNumber *peerRelayPort; // @synthesize peerRelayPort=_peerRelayPort;
@property(copy) NSData *peerRelayIP; // @synthesize peerRelayIP=_peerRelayIP;
@property(copy) NSNumber *selfRelayPort; // @synthesize selfRelayPort=_selfRelayPort;
@property(copy) NSData *selfRelayIP; // @synthesize selfRelayIP=_selfRelayIP;
@property(copy) NSData *relayTokenAllocReq; // @synthesize relayTokenAllocReq=_relayTokenAllocReq;
@property(copy) NSData *relayTransactionIdAlloc; // @synthesize relayTransactionIdAlloc=_relayTransactionIdAlloc;
@property(copy) NSData *relayConnectionId; // @synthesize relayConnectionId=_relayConnectionId;
@property(copy) NSNumber *relayType; // @synthesize relayType=_relayType;
@property(copy) NSData *peerNATIP; // @synthesize peerNATIP=_peerNATIP;
@property(copy) NSData *peerBlob; // @synthesize peerBlob=_peerBlob;
@property(copy) NSNumber *peerNATType; // @synthesize peerNATType=_peerNATType;
@property(copy) NSData *peerPushToken; // @synthesize peerPushToken=_peerPushToken;
@property(copy) NSString *peerID; // @synthesize peerID=_peerID;
@property(copy) NSData *selfNATIP; // @synthesize selfNATIP=_selfNATIP;
@property(copy) NSData *selfBlob; // @synthesize selfBlob=_selfBlob;
@property(copy) NSNumber *selfNATType; // @synthesize selfNATType=_selfNATType;
@property(copy) NSData *selfPushToken; // @synthesize selfPushToken=_selfPushToken;
- (void)handleResponseDictionary:(id)arg1;
- (id)messageBody;
- (id)requiredKeys;
- (id)bagKey;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

@interface IDSCancelMessage : IDSFaceTimeMessage <NSCopying>
{
    NSArray *_peers;
    NSNumber *_reason;
}

@property(copy) NSNumber *reason; // @synthesize reason=_reason;
@property(copy) NSArray *peers; // @synthesize peers=_peers;
- (id)messageBody;
- (id)requiredKeys;
- (id)bagKey;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

@interface IDSInitiateMessage : IDSFaceTimeMessage <NSCopying>
{
    NSData *_selfBlob;
    NSData *_selfPushToken;
    NSNumber *_selfNATType;
    NSData *_selfNatIP;
    NSArray *_peers;
    NSArray *_canonicalizedPeers;
    NSDictionary *_regionInformation;
}

@property(copy) NSDictionary *regionInformation; // @synthesize regionInformation=_regionInformation;
@property(copy) NSArray *canonicalizedPeers; // @synthesize canonicalizedPeers=_canonicalizedPeers;
@property(copy) NSArray *peers; // @synthesize peers=_peers;
@property(copy) NSData *selfNatIP; // @synthesize selfNatIP=_selfNatIP;
@property(copy) NSNumber *selfNATType; // @synthesize selfNATType=_selfNATType;
@property(copy) NSData *selfPushToken; // @synthesize selfPushToken=_selfPushToken;
@property(copy) NSData *selfBlob; // @synthesize selfBlob=_selfBlob;
- (void)handleResponseDictionary:(id)arg1;
- (id)messageBody;
- (id)requiredKeys;
- (id)bagKey;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

@interface IDSRejectMessage : IDSFaceTimeMessage <NSCopying>
{
    NSData *_selfPushToken;
    NSData *_peerPushToken;
    NSString *_peerID;
    NSNumber *_reason;
}

@property(copy) NSNumber *reason; // @synthesize reason=_reason;
@property(copy) NSString *peerID; // @synthesize peerID=_peerID;
@property(copy) NSData *peerPushToken; // @synthesize peerPushToken=_peerPushToken;
@property(copy) NSData *selfPushToken; // @synthesize selfPushToken=_selfPushToken;
- (id)messageBody;
- (id)requiredKeys;
- (id)bagKey;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

@interface IDSRelayCancelMessage : IDSFaceTimeMessage <NSCopying>
{
    NSString *_peerID;
    NSData *_peerPushToken;
    NSNumber *_relayType;
    NSNumber *_reason;
    NSData *_relayConnectionID;
    NSData *_selfRelayIP;
    NSNumber *_selfRelayPort;
    NSData *_peerRelayIP;
    NSNumber *_peerRelayPort;
}

@property(copy) NSNumber *peerRelayPort; // @synthesize peerRelayPort=_peerRelayPort;
@property(copy) NSData *peerRelayIP; // @synthesize peerRelayIP=_peerRelayIP;
@property(copy) NSNumber *selfRelayPort; // @synthesize selfRelayPort=_selfRelayPort;
@property(copy) NSData *selfRelayIP; // @synthesize selfRelayIP=_selfRelayIP;
@property(copy) NSData *relayConnectionID; // @synthesize relayConnectionID=_relayConnectionID;
@property(copy) NSNumber *reason; // @synthesize reason=_reason;
@property(copy) NSNumber *relayType; // @synthesize relayType=_relayType;
@property(copy) NSData *peerPushToken; // @synthesize peerPushToken=_peerPushToken;
@property(copy) NSString *peerID; // @synthesize peerID=_peerID;
- (id)messageBody;
- (id)requiredKeys;
- (id)bagKey;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

@interface IDSRelayInitiateMessage : IDSFaceTimeMessage <NSCopying>
{
    NSData *_selfPushToken;
    NSNumber *_selfNatType;
    NSNumber *_selfNATIP;
    NSString *_peerID;
    NSData *_peerPushToken;
    NSNumber *_peerNatType;
    NSNumber *_peerNATIP;
    NSNumber *_relayType;
    NSData *_relayConnectionId;
    NSData *_relayTransactionIdAlloc;
    NSData *_relayTokenAllocReq;
    NSData *_selfRelayIP;
    NSNumber *_selfRelayPort;
    NSData *_peerRelayIP;
    NSNumber *_peerRelayPort;
}

@property(copy) NSNumber *peerRelayPort; // @synthesize peerRelayPort=_peerRelayPort;
@property(copy) NSData *peerRelayIP; // @synthesize peerRelayIP=_peerRelayIP;
@property(copy) NSNumber *selfRelayPort; // @synthesize selfRelayPort=_selfRelayPort;
@property(copy) NSData *selfRelayIP; // @synthesize selfRelayIP=_selfRelayIP;
@property(copy) NSData *relayTokenAllocReq; // @synthesize relayTokenAllocReq=_relayTokenAllocReq;
@property(copy) NSData *relayTransactionIdAlloc; // @synthesize relayTransactionIdAlloc=_relayTransactionIdAlloc;
@property(copy) NSData *relayConnectionId; // @synthesize relayConnectionId=_relayConnectionId;
@property(copy) NSNumber *relayType; // @synthesize relayType=_relayType;
@property(copy) NSNumber *peerNATIP; // @synthesize peerNATIP=_peerNATIP;
@property(copy) NSNumber *peerNatType; // @synthesize peerNatType=_peerNatType;
@property(copy) NSData *peerPushToken; // @synthesize peerPushToken=_peerPushToken;
@property(copy) NSString *peerID; // @synthesize peerID=_peerID;
@property(copy) NSNumber *selfNATIP; // @synthesize selfNATIP=_selfNATIP;
@property(copy) NSNumber *selfNatType; // @synthesize selfNatType=_selfNatType;
@property(copy) NSData *selfPushToken; // @synthesize selfPushToken=_selfPushToken;
- (void)handleResponseDictionary:(id)arg1;
- (id)messageBody;
- (id)requiredKeys;
- (id)bagKey;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

@interface IDSRelayUpdateMessage : IDSFaceTimeMessage <NSCopying>
{
    NSData *_selfPushToken;
    NSData *_selfRelayBlob;
    NSString *_peerID;
    NSData *_peerPushToken;
    NSNumber *_relayType;
    NSData *_relayConnectionID;
    NSData *_relayTransactionIDAlloc;
    NSData *_relayTokenAllocRes;
    NSData *_selfRelayIP;
    NSNumber *_selfRelayPort;
    NSData *_selfRelayNATIP;
    NSNumber *_selfRelayNATPort;
    NSData *_peerRelayIP;
    NSNumber *_peerRelayPort;
}

@property(copy) NSNumber *peerRelayPort; // @synthesize peerRelayPort=_peerRelayPort;
@property(copy) NSData *peerRelayIP; // @synthesize peerRelayIP=_peerRelayIP;
@property(copy) NSNumber *selfRelayNATPort; // @synthesize selfRelayNATPort=_selfRelayNATPort;
@property(copy) NSData *selfRelayNATIP; // @synthesize selfRelayNATIP=_selfRelayNATIP;
@property(copy) NSNumber *selfRelayPort; // @synthesize selfRelayPort=_selfRelayPort;
@property(copy) NSData *selfRelayIP; // @synthesize selfRelayIP=_selfRelayIP;
@property(copy) NSData *relayTokenAllocRes; // @synthesize relayTokenAllocRes=_relayTokenAllocRes;
@property(copy) NSData *relayTransactionIDAlloc; // @synthesize relayTransactionIDAlloc=_relayTransactionIDAlloc;
@property(copy) NSData *relayConnectionID; // @synthesize relayConnectionID=_relayConnectionID;
@property(copy) NSNumber *relayType; // @synthesize relayType=_relayType;
@property(copy) NSData *peerPushToken; // @synthesize peerPushToken=_peerPushToken;
@property(copy) NSString *peerID; // @synthesize peerID=_peerID;
@property(copy) NSData *selfRelayBlob; // @synthesize selfRelayBlob=_selfRelayBlob;
@property(copy) NSData *selfPushToken; // @synthesize selfPushToken=_selfPushToken;
- (id)messageBody;
- (id)requiredKeys;
- (id)bagKey;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

@interface IDSSendMessage : IDSFaceTimeMessage <NSCopying>
{
    NSArray *_peers;
    NSNumber *_reason;
    NSData *_selfPushToken;
}

@property(copy) NSData *selfPushToken; // @synthesize selfPushToken=_selfPushToken;
@property(copy) NSNumber *reason; // @synthesize reason=_reason;
@property(copy) NSArray *peers; // @synthesize peers=_peers;
- (id)messageBody;
- (id)requiredKeys;
- (id)bagKey;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

@interface NSArray (FTAPSOutgoingMessage_Additions)
- (id)_FTFilteredArrayForAPS;
- (id)_IDsFromURIs;
- (id)_URIsFromIDs;
@end

@interface NSData (CompressionAdditions)
- (id)_FTCopyGzippedData;
- (id)_FTOptionallyDecompressData;
- (id)_FTDecompressData;
- (id)_FTStringFromBaseData;
@end

@interface NSDictionary (FTAPSOutgoingMessage_Additions)
- (id)_FTFilteredDictionaryForAPS;
@end

@interface NSString (FaceTimeStringAdditions)
@property(readonly, nonatomic) NSData *_FTDataFromHexString;
@property(readonly, nonatomic) NSData *_FTDataFromBase64String;
@end

