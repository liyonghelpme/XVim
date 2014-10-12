//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct HTTPMessagePrivate {
    struct __CFRuntimeBase {
        unsigned long long _field1;
        unsigned char _field2[4];
        unsigned int _field3;
    } _field1;
    struct HTTPMessagePrivate *_field2;
    struct {
        char _field1[8192];
        unsigned long long _field2;
        char *_field3;
        unsigned long long _field4;
        char *_field5;
        unsigned long long _field6;
        int _field7;
        char *_field8;
        unsigned long long _field9;
        struct {
            char *_field1;
            unsigned long long _field2;
            char *_field3;
            unsigned long long _field4;
            char *_field5;
            unsigned long long _field6;
            char *_field7;
            unsigned long long _field8;
            char *_field9;
            unsigned long long _field10;
            char *_field11;
            unsigned long long _field12;
            char *_field13;
            unsigned long long _field14;
            char *_field15;
            char *_field16;
        } _field10;
        char *_field11;
        unsigned long long _field12;
        int _field13;
        char *_field14;
        unsigned long long _field15;
        unsigned char _field16;
        unsigned long long _field17;
        unsigned char _field18;
        int _field19;
    } _field3;
    unsigned char _field4;
    int _field5;
    unsigned char _field6;
    char *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    unsigned char _field11[32000];
    char *_field12;
    struct iovec _field13[2];
    struct iovec *_field14;
    int _field15;
    unsigned long long _field16;
    int _field17;
    int _field18;
    int _field19;
    void *_field20;
    void *_field21;
    void *_field22;
    void *_field23;
    void *_field24;
    void *_field25;
    CDUnknownFunctionPointerType _field26;
    CDUnknownBlockType _field27;
};

struct iovec {
    void *_field1;
    unsigned long long _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    double startTime;
    unsigned char userChangedFriendlyName;
    unsigned char playPasswordSet;
    unsigned char adminPasswordSet;
    unsigned char destinationNetworkRecommendationUsed;
    double secondsToGetLinkUpOnSWAP;
    int wifiJoinSWAPError;
    unsigned char hitJoiningTargetSWAPTimeout;
    int rssiOfSWAP;
    unsigned int snrOfSWAP;
    unsigned int channelOfSWAP;
} CDStruct_56123b44;

typedef struct {
    double secondsToGetLinkUpOnDestination;
    int wifiJoinDestinationAPError;
    unsigned char destinationNetworkPSKInKeychain;
    unsigned char hitJoiningDestinationAPTimeout;
    int rssiOfDestinationAP;
    unsigned int snrOfDestinationAP;
    unsigned int channelOfDestinationAP;
} CDStruct_6a23f5a0;

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/EasyConfig.framework/EasyConfig
// UUID: 6B99C3B2-3D36-3075-B608-98122012979A
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 100.26.0.0.0
//            Minimum iOS version: 8.0.0
//                    SDK version: 8.0.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol NSCopying
- (id)copyWithZone:(struct _NSZone *)arg1;
@end

@interface EasyConfigDevice : NSObject <NSCopying>
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_userQueue;
    NSDictionary *_scanRecord;
    _Bool _started;
    int _firstErr;
    struct BonjourBrowser *_airplayBrowser;
    NSDictionary *_airplayBonjourInfo;
    struct BonjourBrowser *_raopBrowser;
    NSDictionary *_raopBonjourInfo;
    struct BonjourBrowser *_mfiConfigBrowser;
    NSDictionary *_mfiConfigBonjourInfo;
    struct BonjourBrowser *_hapBrowser;
    NSDictionary *_hapBonjourInfo;
    unsigned int _configSeed;
    struct HTTPClientPrivate *_httpClient;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    int _state;
    double _securityStartTime;
    double _securityFinishTime;
    struct MFiSAP *_mfiSAP;
    struct PairingSessionPrivate *_pairingSession;
    CDUnknownBlockType _promptForSetupCodeBlock;
    unsigned long long _deviceIdentifier;
    unsigned long long _features;
    NSString *_model;
    NSString *_name;
    NSDictionary *_configuration;
    NSDictionary *_configResponse;
    _Bool _pausesAfterApply;
    _Bool _supportsHAP;
    _Bool _supportsMFi;
    _Bool _supportsTLV;
    _Bool _preConfigMetricsSet;
    CDStruct_56123b44 _preConfigMetrics;
    _Bool _postConfigMetricsSet;
    CDStruct_6a23f5a0 _postConfigMetrics;
    double _configStartTime;
    double _findPreConfigStartTime;
    double _findPreConfigFoundTime;
    double _findPostConfigStartTime;
    double _findPostConfigFoundTime;
    double _applyConfigStartTime;
    double _applyConfigFinishTime;
    double _postConfigCheckStartTime;
    double _postConfigCheckFinishTime;
}

+ (id)deviceWithScanRecord:(id)arg1;
+ (_Bool)supportedScanRecord:(id)arg1;
@property _Bool pausesAfterApply; // @synthesize pausesAfterApply=_pausesAfterApply;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy) NSString *model; // @synthesize model=_model;
@property unsigned long long features; // @synthesize features=_features;
@property(retain) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_userQueue;
@property unsigned long long deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(copy) NSDictionary *configuration; // @synthesize configuration=_configuration;
- (int)_timeoutTimerStart:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (int)_startBonjourWithTimeout:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (int)_setupClient:(id)arg1;
- (void)_postProgress:(int)arg1 withResponse:(id)arg2;
- (void)_postProgress:(int)arg1;
- (void)_postNote:(id)arg1 info:(id)arg2;
- (void)_logEnded;
- (void)_handleError:(int)arg1;
- (void)_postConfigCheckCompletion:(struct HTTPMessagePrivate *)arg1;
- (void)_postConfigCheckStart:(id)arg1;
- (void)_findDevicePostConfigEvent:(unsigned int)arg1 info:(id)arg2;
- (int)_findDevicePostConfigStart;
- (void)_applyConfigCompletion:(struct HTTPMessagePrivate *)arg1;
- (int)_applyConfigStart;
- (int)_pairVerifyNext:(struct HTTPMessagePrivate *)arg1;
- (int)_pairVerifyStart;
- (int)_pairSetupNext:(struct HTTPMessagePrivate *)arg1;
- (int)_pairSetupStart;
- (int)_mfiSAPNext:(struct HTTPMessagePrivate *)arg1;
- (int)_mfiSAPStart;
- (int)_configureStart:(id)arg1;
- (void)_findDevicePreConfigEvent:(unsigned int)arg1 info:(id)arg2;
- (int)_findDevicePreConfigStart;
- (void)_trySetupCode:(id)arg1;
- (void)trySetupCode:(id)arg1;
- (void)setPromptForSetupCodeHandler:(CDUnknownBlockType)arg1;
- (void)setPostConfigMetrics:(const CDStruct_6a23f5a0 *)arg1;
- (void)setPreConfigMetrics:(const CDStruct_56123b44 *)arg1;
- (void)resumePostConfig;
- (void)_stop:(int)arg1;
- (void)stop;
- (void)_start;
- (void)start;
- (_Bool)removed:(id)arg1;
- (_Bool)updated:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

