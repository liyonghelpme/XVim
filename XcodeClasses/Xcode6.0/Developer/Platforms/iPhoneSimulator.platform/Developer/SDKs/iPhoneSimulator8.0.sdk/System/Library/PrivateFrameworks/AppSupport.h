//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGSize {
    double _field1;
    double _field2;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _img {
    id _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned char _field6;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;

typedef struct {
    long long _field1;
    void *_field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
} CDStruct_e097db04;

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
// UUID: 72E2DAA8-C1B4-314A-88B2-46BE36D52BD5
//
//                           Arch: x86_64
//                Current version: 29.0.0
//          Compatibility version: 1.0.0
//                 Source version: 977.0.0.0.0
//            Minimum iOS version: 8.0.0
//                    SDK version: 8.0.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol NSCoding
- (id)initWithCoder:(NSCoder *)arg1;
- (void)encodeWithCoder:(NSCoder *)arg1;
@end

@protocol NSCopying
- (id)copyWithZone:(struct _NSZone *)arg1;
@end

@protocol NSLocking
- (void)unlock;
- (void)lock;
@end

@interface ALCity : NSObject
{
    int _identifier;
    NSString *_localeCode;
    NSString *_timeZone;
    float _longitude;
    float _latitude;
    NSString *_yahooCode;
    NSString *_name;
    NSString *_unlocalizedName;
    NSString *_countryName;
    NSString *_unlocalizedCountryName;
    NSString *_countryOverride;
    NSString *_unlocalizedCountryOverride;
    NSString *_identifierForCPCity;
    _Bool _localizationAttempted;
}

@property(retain, nonatomic) NSString *unlocalizedCountryOverride; // @synthesize unlocalizedCountryOverride=_unlocalizedCountryOverride;
@property(retain, nonatomic) NSString *yahooCode; // @synthesize yahooCode=_yahooCode;
@property(nonatomic) float latitude; // @synthesize latitude=_latitude;
@property(nonatomic) float longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *timeZone; // @synthesize timeZone=_timeZone;
@property(retain, nonatomic) NSString *localeCode; // @synthesize localeCode=_localeCode;
@property(nonatomic) int identifier; // @synthesize identifier=_identifier;
- (id)description;
@property(retain, nonatomic) NSString *unlocalizedCountryName;
@property(retain, nonatomic) NSString *unlocalizedName;
@property(retain, nonatomic) NSString *countryOverride;
@property(retain, nonatomic) NSString *countryName;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) NSDictionary *properties;
@property(readonly, nonatomic) NSString *classicIdentifier;
- (id)displayNameIncludingCountry:(_Bool)arg1;
- (id)displayNameIncludingCountry:(_Bool)arg1 withFormat:(id)arg2;
- (void)ensureLocalized;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithSQLRow:(char **)arg1;
- (id)initWithProperties:(id)arg1;
- (id)init;

@end

@interface ALCityManager : NSObject
{
    struct sqlite3 *_db;
    struct sqlite3 *_localizedDb;
    CPSearchMatcher *_citySearchMatcher;
}

+ (id)_localeDictionaryFromSQLRow:(char **)arg1;
+ (struct __CFArray *)legacyCityForCity:(id)arg1;
+ (id)newCitiesByIdentifierMap:(id)arg1;
+ (id)sharedManager;
@property(readonly) CPSearchMatcher *citySearchMatcher; // @synthesize citySearchMatcher=_citySearchMatcher;
- (void)dealloc;
- (id)citiesWithTimeZone:(id)arg1;
- (id)_defaultCityForTimeZone:(id)arg1 localeCode:(id)arg2;
- (id)defaultCityForTimeZone:(id)arg1 localeCode:(id)arg2;
- (id)defaultCityForTimeZone:(id)arg1;
- (id)defaultCitiesForLocaleCode:(id)arg1;
- (id)defaultCitiesForLocaleCode:(id)arg1 options:(int)arg2;
- (id)localeWithCode:(id)arg1;
- (id)allLocales;
- (id)_cityForTimeZone:(id)arg1 localeCode:(id)arg2;
- (id)citiesMatchingQualifier:(id)arg1;
- (id)bestCityForLegacyCity:(struct __CFArray *)arg1;
- (id)cityForClassicIdentifier:(id)arg1;
- (id)citiesWithIdentifiers:(id)arg1;
- (void)localizeCities:(id)arg1;
- (id)citiesMatchingName:(id)arg1 localized:(_Bool)arg2;
- (id)citiesMatchingName:(id)arg1;
- (id)allCities;
- (id)init;

@end

@interface CPAggregateDictionary : NSObject
{
}

+ (id)sharedAggregateDictionary;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
- (void)pushValue:(double)arg1 forKey:(id)arg2;
- (void)setValue:(double)arg1 forDistributionKey:(id)arg2;
- (void)clearDistributionKey:(id)arg1;
- (void)subtractValue:(long long)arg1 forKey:(id)arg2;
- (void)addValue:(long long)arg1 forKey:(id)arg2;
- (void)decrementKey:(id)arg1;
- (void)incrementKey:(id)arg1;
- (void)setValue:(long long)arg1 forScalarKey:(id)arg2;
- (void)clearScalarKey:(id)arg1;
- (int)commit;
- (void)significantTimeChanged;

@end

@interface CPBitmapStore : NSObject
{
    NSString *_path;
    NSString *_imagePath;
    NSCache *_cache;
    int _version;
    NSString *_versionPath;
    NSObject<OS_dispatch_queue> *_serialQueueRemoveImagesBackground;
    NSObject<OS_dispatch_queue> *_serialQueueRemoveImagesDefault;
    _Bool _lockOnRead;
}

@property(nonatomic) _Bool lockOnRead; // @synthesize lockOnRead=_lockOnRead;
- (int)setVersion:(int)arg1;
@property(readonly, nonatomic) int version;
- (id)_versionPath;
- (void)purge;
- (unsigned long long)imageCount;
- (id)imagePath;
- (void)removeImagesInGroups:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeImagesInGroups:(id)arg1;
- (void)commitTransaction;
- (void)storeGrayscaleImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize)arg3 opaque:(_Bool)arg4 scale:(double)arg5 data:(id)arg6;
- (void)storeImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize)arg3 opaque:(_Bool)arg4 scale:(double)arg5 data:(id)arg6;
- (void)storeImageForKey:(id)arg1 inGroup:(id)arg2 opaque:(_Bool)arg3 image:(struct CGImage *)arg4;
- (struct CGImage *)copyAndStoreImageForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize)arg3 opaque:(_Bool)arg4 scale:(double)arg5 draw:(CDUnknownBlockType)arg6;
- (struct CGImage *)_copyAndStoreImageForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize)arg3 format:(int)arg4 scale:(double)arg5 fillMem:(CDUnknownBlockType)arg6 alternateCompletion:(CDUnknownBlockType)arg7;
- (struct CGImage *)copyImageForKey:(id)arg1 inGroup:(id)arg2;
- (void)commitTxn;
- (id)allGroups;
- (struct CGImage *)copyImageForKey:(id)arg1;
- (unsigned int)memContentOffset;
- (void *)openAndMmap:(id)arg1 withInfo:(struct _img *)arg2;
- (_Bool)saveImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(struct _img *)arg3;
- (_Bool)findImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(struct _img *)arg3;
- (id)cacheNumberForKey:(id)arg1;
- (id)imageNameForKey:(id)arg1 inGroup:(id)arg2;
@property(nonatomic) unsigned long long cacheItemLimit;
- (void)dealloc;
- (id)initWithPath:(id)arg1 version:(int)arg2;

@end

@interface CPDistributedMessagingAsyncOperation : NSOperation
{
    CPDistributedMessagingCenter *_center;
    NSString *_name;
    NSData *_userInfoData;
    NSString *_oolKey;
    NSData *_oolData;
    id _target;
    SEL _selector;
    void *_context;
    _Bool _makeServer;
    NSThread *_calloutThread;
    NSDictionary *_reply;
    NSError *_error;
}

- (void)_performCallout;
- (void)main;
- (void)_releaseSendingData;
- (void)dealloc;
- (id)initWithCenter:(id)arg1 messageName:(id)arg2 userInfoData:(id)arg3 oolKey:(id)arg4 oolData:(id)arg5 target:(id)arg6 selector:(SEL)arg7 context:(void *)arg8 makeServer:(_Bool)arg9;

@end

@interface CPDistributedMessagingCallout : NSObject
{
    id _target;
    SEL _selector;
    _Bool _returnsVoid;
    _Bool _returnsVoidIsValid;
}

@property(readonly, nonatomic) _Bool returnsVoid; // @synthesize returnsVoid=_returnsVoid;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, retain, nonatomic) id target; // @synthesize target=_target;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

@end

@interface CPDistributedMessagingCenter : NSObject
{
    NSString *_centerName;
    NSLock *_lock;
    unsigned int _sendPort;
    NSOperationQueue *_asyncQueue;
    struct __CFRunLoopSource *_serverSource;
    NSString *_requiredEntitlement;
    NSMutableDictionary *_callouts;
    unsigned int _parkedServerPort;
    CPDistributedMessagingCallout *_currentCallout;
    unsigned int _replyPort;
    _Bool _portPassing;
    _Bool _delayedReply;
    _Bool _requireLookupByPID;
    int _targetPID;
}

+ (id)_centerNamed:(id)arg1 requireLookupByPID:(_Bool)arg2;
+ (id)pidRestrictedCenterNamed:(id)arg1;
+ (id)centerNamed:(id)arg1;
- (id)_requiredEntitlement;
- (_Bool)_isTaskEntitled:(CDStruct_6ad76789 *)arg1;
- (void)_sendReplyMessage:(id)arg1 portPassing:(_Bool)arg2 onMachPort:(unsigned int)arg3;
- (void)_dispatchMessageNamed:(id)arg1 userInfo:(id)arg2 reply:(id *)arg3 auditToken:(CDStruct_6ad76789 *)arg4;
- (_Bool)doesServerExist;
- (void)unregisterForMessageName:(id)arg1;
- (void)sendDelayedReply:(id)arg1 dictionary:(id)arg2;
- (id)delayReply;
- (void)registerForMessageName:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)stopServer;
- (void)runServerOnCurrentThreadProtectedByEntitlement:(id)arg1;
- (void)runServerOnCurrentThread;
- (unsigned int)_serverPort;
- (_Bool)_sendMessage:(id)arg1 userInfoData:(id)arg2 oolKey:(id)arg3 oolData:(id)arg4 makeServer:(_Bool)arg5 receiveReply:(id *)arg6 nonBlocking:(_Bool)arg7 error:(id *)arg8;
- (_Bool)_sendMessage:(id)arg1 userInfo:(id)arg2 receiveReply:(id *)arg3 error:(id *)arg4 toTarget:(id)arg5 selector:(SEL)arg6 context:(void *)arg7 nonBlocking:(_Bool)arg8;
- (_Bool)_sendMessage:(id)arg1 userInfo:(id)arg2 receiveReply:(id *)arg3 error:(id *)arg4 toTarget:(id)arg5 selector:(SEL)arg6 context:(void *)arg7;
- (void)sendMessageAndReceiveReplyName:(id)arg1 userInfo:(id)arg2 toTarget:(id)arg3 selector:(SEL)arg4 context:(void *)arg5;
- (id)sendMessageAndReceiveReplyName:(id)arg1 userInfo:(id)arg2 error:(id *)arg3;
- (id)sendMessageAndReceiveReplyName:(id)arg1 userInfo:(id)arg2;
- (_Bool)sendNonBlockingMessageName:(id)arg1 userInfo:(id)arg2;
- (_Bool)sendMessageName:(id)arg1 userInfo:(id)arg2;
- (void)_setSendPort:(unsigned int)arg1;
- (unsigned int)_sendPort;
- (void)_setupInvalidationSource;
- (void)setTargetPID:(int)arg1;
- (id)name;
- (void)dealloc;
- (id)_initClientWithPort:(unsigned int)arg1;
- (id)_initAnonymousServer;
- (id)_initWithServerName:(id)arg1;
- (id)_initWithServerName:(id)arg1 requireLookupByPID:(_Bool)arg2;

@end

@interface CPDistributedMessagingDelayedReplyContext : NSObject
{
    unsigned int _replyPort;
    _Bool _portPassing;
}

@property(nonatomic) _Bool portPassing; // @synthesize portPassing=_portPassing;
@property(nonatomic) unsigned int replyPort; // @synthesize replyPort=_replyPort;
- (void)dealloc;
- (id)initWithReplyPort:(unsigned int)arg1 portPassing:(_Bool)arg2;

@end

@interface CPDistributedNotificationCenter : NSObject
{
    NSString *_centerName;
    NSLock *_lock;
    struct __CFRunLoopSource *_receiveNotificationSource;
    _Bool _isServer;
    struct __CFDictionary *_sendPorts;
    unsigned long long _startCount;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)centerForServerPort:(unsigned int)arg1;
+ (void)setCenter:(id)arg1 forServerPort:(unsigned int)arg2;
+ (struct __CFDictionary *)_serverPortToNotificationCenterMap;
+ (id)_serverPortToNotificationCenterMapDispatchQueue;
+ (id)centerNamed:(id)arg1;
- (void)_receivedCheckIn:(unsigned int)arg1 auditToken:(CDStruct_6ad76789 *)arg2;
- (_Bool)postNotificationName:(id)arg1 userInfo:(id)arg2 toBundleIdentifier:(id)arg3;
- (void)postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)postNotificationName:(id)arg1;
- (void)runServer;
- (void)runServerOnCurrentThread;
- (void)deliverNotification:(id)arg1 userInfo:(id)arg2;
- (void)stopDeliveringNotifications;
- (void)startDeliveringNotificationsToRunLoop:(struct __CFRunLoop *)arg1;
- (void)startDeliveringNotificationsToMainThread;
- (void)_notificationServerWasRestarted;
- (void)_checkOutAndRemoveSource;
- (void)_checkIn;
- (void)_createReceiveSourceForRunLoop:(struct __CFRunLoop *)arg1;
- (id)name;
- (void)dealloc;
- (id)_initWithServerName:(id)arg1;

@end

@interface CPExclusiveLock : NSObject <NSLocking>
{
    int _fd;
    NSString *_name;
}

- (id)name;
- (void)setName:(id)arg1;
- (_Bool)tryLock;
- (void)unlock;
- (void)lock;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)init;

@end

@interface CPLRUDictionary : NSObject
{
    struct __CFDictionary *_dictionary;
    unsigned long long _maxCount;
    CPLRUDictionaryNode *_head;
    CPLRUDictionaryNode *_tail;
}

+ (id)dictionaryWithMaximumCapacity:(unsigned long long)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)allKeys;
- (unsigned long long)count;
- (id)description;
- (void)dealloc;
- (id)initWithMaximumCapacity:(unsigned long long)arg1;
- (void)_addNodeToFront:(id)arg1;
- (void)_moveNodeToFront:(id)arg1;
- (void)_removeNode:(id)arg1;
- (void)_removeNodeFromLinkedList:(id)arg1;
- (id)objectForKeyWithoutAffectingLRU:(id)arg1;
- (id)allValuesInLRUOrder;
- (id)allKeysInLRUOrder;
- (unsigned long long)linkedListCount;

@end

@interface CPLRUDictionaryNode : NSObject
{
    id _key;
    id _object;
    CPLRUDictionaryNode *next;
    CPLRUDictionaryNode *prev;
}

@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(readonly, nonatomic) id key; // @synthesize key=_key;
- (void)dealloc;
- (id)initWithKey:(id)arg1 object:(id)arg2;

@end

@interface CPMemoryPool : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
    NSMutableArray *_files;
    char *_label;
    unsigned long long _slotLength;
}

@property(readonly, nonatomic) unsigned long long slotLength; // @synthesize slotLength=_slotLength;
- (void)dealloc;
- (id)nextSlotWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)initWithLabel:(const char *)arg1 slotLength:(unsigned long long)arg2;

@end

@interface CPMemoryPoolFile : NSObject
{
    struct _opaque_pthread_mutex_t _mutex;
    int _fd;
    char *_slots;
    unsigned long long _slotCount;
    unsigned long long _slotLength;
    struct __CFBitVector *_usedSlots;
    struct __CFAllocator *_deallocator;
}

- (void)returnSlot:(void *)arg1;
- (id)nextSlotWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithLabel:(const char *)arg1 slotCount:(unsigned long long)arg2 slotLength:(unsigned long long)arg3;

@end

@interface CPNetworkObserver : NSObject
{
    NSLock *_lock;
    NSMutableDictionary *_reachabilityRequests;
    unsigned int _networkReachability;
    struct __SCNetworkReachability *_networkReach;
    struct __CFDictionary *_networkObservers;
    struct __SCPreferences *_wifiPreferences;
    struct __CFDictionary *_wifiObservers;
    _Bool _networkNotified;
    _Bool _networkReachable;
    _Bool _wifiNotified;
    _Bool _wifiEnabled;
}

+ (id)sharedNetworkObserver;
- (void)removeWiFiObserver:(id)arg1;
- (void)addWiFiObserver:(id)arg1 selector:(SEL)arg2;
- (_Bool)isWiFiEnabled;
- (void)_wifiFirstCallBack:(id)arg1;
- (void)_wifiCallBack:(unsigned int)arg1;
- (void)_wifiObserversInitialize;
- (void)removeNetworkReachableObserver:(id)arg1;
- (void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2;
- (_Bool)isNetworkReachable;
- (void)_networkReachableFirstCallBack:(id)arg1;
- (void)_networkReachableCallBack:(unsigned int)arg1;
- (void)_networkObserversInitialize;
- (void)removeObserver:(id)arg1 forHostname:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 forHostname:(id)arg3;
- (void)dealloc;
- (id)init;

@end

@interface CPPowerAssertionManager : NSObject
{
    NSString *_uuid;
    NSCountedSet *_contexts;
    NSMutableDictionary *_groupIdentifierToContexts;
    struct __CFDictionary *_contextToGroupIdentifier;
    NSMutableSet *_heldAsideGroupIdentifiers;
    NSCountedSet *_heldAsideContexts;
    id <CPPowerAssertionManagerDelegate> _delegate;
}

+ (id)sharedInstance;
@property id <CPPowerAssertionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_releaseAssertions;
- (void)_retainAssertions;
- (void)reretainPowerAssertionsForGroupIdentifier:(id)arg1;
- (void)temporarilyReleasePowerAssertionsForGroupIdentifier:(id)arg1;
- (id)description;
- (void)releasePowerAssertionWithContext:(id)arg1;
- (void)retainPowerAssertionWithContext:(id)arg1 withGroupIdentifier:(id)arg2;
- (void)retainPowerAssertionWithContext:(id)arg1;
- (void)setUUIDPrefix:(id)arg1;
- (void)dealloc;
- (id)init;
- (unsigned long long)retainCountForContext:(id)arg1;
@property(readonly) NSString *uuid; // @synthesize uuid=_uuid;

@end

@interface CPRegularExpression : NSObject <NSCopying, NSCoding>
{
    NSString *_expressionString;
    void *_reserved;
}

+ (const char *)getBytesForString:(id)arg1 lossByte:(unsigned char)arg2;
+ (id)regularExpressionWithString:(id)arg1;
+ (void)initialize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct _NSRange)matchedRangeForString:(id)arg1 range:(struct _NSRange)arg2 subexpressionRanges:(struct _NSRange *)arg3 count:(unsigned long long)arg4;
- (struct _NSRange)matchedRangeForCString:(const char *)arg1 range:(struct _NSRange)arg2 subexpressionRanges:(struct _NSRange *)arg3 count:(unsigned long long)arg4;
- (id)expressionString;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (unsigned long long)numberOfSubexpressions;
- (id)initWithExpressionString:(id)arg1 options:(unsigned int)arg2;
- (id)initWithExpressionString:(id)arg1;
- (void)dealloc;

@end

@interface CPSearchMatcher : NSObject
{
    int _options;
    NSArray *_components;
    NSArray *_asciiComponents;
    NSData *_wholeSearchStringData;
    NSData *_context;
}

- (void)dealloc;
- (id)initWithSearchString:(id)arg1 options:(int)arg2;
- (id)initWithSearchString:(id)arg1 andLocale:(id)arg2;
- (id)initWithSearchString:(id)arg1;
- (id)initWithSearchString:(id)arg1 andLocale:(id)arg2 andOptions:(int)arg3;
- (_Bool)matches:(id)arg1 matchType:(int)arg2;
- (_Bool)matches:(id)arg1;
- (_Bool)matchesUTF8String:(const char *)arg1 matchType:(int)arg2;
- (_Bool)matchesUTF8String:(const char *)arg1;
- (_Bool)matchesASCIIString:(const char *)arg1 matchType:(int)arg2;

@end

@interface InvocationTrampoline : NSObject
{
    id _target;
}

@property(retain) id target; // @synthesize target=_target;
- (void)forwardInvocation:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)performInvocation:(id)arg1;
- (void)dealloc;

@end

@interface CapturedInvocationTrampoline : InvocationTrampoline
{
    id *_outInvocation;
}

- (void)forwardInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 outInvocation:(id *)arg2;

@end

@interface DelayedInvocationTrampoline : InvocationTrampoline
{
    double _delay;
}

- (void)forwardInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 delay:(double)arg2;

@end

@interface NSObject (AppSupportMessagingProxy)
- (id)pep_getInvocation:(id *)arg1;
- (id)pep_onOperationQueue:(id)arg1 priority:(long long)arg2;
- (id)pep_onOperationQueue:(id)arg1;
- (id)pep_afterDelay:(double)arg1;
- (id)pep_onThread:(id)arg1;
- (id)pep_onThread:(id)arg1 immediateForMatchingThread:(_Bool)arg2;
- (id)pep_onDetachedThread;
- (id)pep_onMainThreadIfNecessary;
- (id)pep_onMainThread;
@end

@interface NSString (NSStringXMLAdditions)
- (id)stringByEscapingXMLSpecialCharacters;
@end

@interface OperationQueueInvocationTrampoline : InvocationTrampoline
{
    NSOperationQueue *_queue;
    long long _priority;
}

- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 operationQueue:(id)arg2 priority:(long long)arg3;

@end

@interface PEPServiceConfiguration : NSObject
{
    NSString *_cacheFilePath;
    _Bool _shouldDownloadNetworkConfigFile;
    double _cachedFileLastModifyDate;
}

+ (id)sharedInstance;
- (_Bool)registerNetworkDefaultsForAppIDs:(id)arg1 forceUpdate:(_Bool)arg2;
- (_Bool)registerNetworkDefaultsForAppID:(id)arg1;
- (void)_updateDefaults:(id)arg1;
- (void)_postNotification;
- (void)dealloc;
- (id)init;

@end

@interface RadiosPreferences : NSObject
{
    struct __SCPreferences *_prefs;
    int _applySkipCount;
    id <RadiosPreferencesDelegate> _delegate;
    _Bool _isCachedAirplaneModeValid;
    _Bool _cachedAirplaneMode;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool notifyForExternalChangeOnly;
}

@property(nonatomic) _Bool notifyForExternalChangeOnly; // @synthesize notifyForExternalChangeOnly;
@property(nonatomic) id <RadiosPreferencesDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setCallback:(CDUnknownFunctionPointerType)arg1 withContext:(CDStruct_e097db04 *)arg2;
- (void)setValue:(void *)arg1 forKey:(id)arg2;
- (void *)getValueForKey:(id)arg1;
- (void)synchronize;
- (void)notifyTarget:(unsigned int)arg1;
- (void)initializeSCPrefs:(id)arg1;
- (void)refresh;
@property(nonatomic) _Bool airplaneMode;
- (void)dealloc;
- (oneway void)release;
- (id)init;
- (id)initWithQueue:(id)arg1;

@end

@interface ThreadedInvocationTrampoline : InvocationTrampoline
{
    NSThread *_thread;
    _Bool _immediateForMatchingThread;
}

- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 thread:(id)arg2 immediateForMatchingThread:(_Bool)arg3;

@end

@interface _CPBundleIdentifierString : NSString
{
    NSString *_executablePath;
    NSString *_bundleIdentifierOrProcessName;
    _Bool _isProcessName;
}

- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (_Bool)_isProcessName;
- (void)_loadBundleIdentifierOrProcessName;
- (void)dealloc;
- (id)_initWithExecutablePath:(id)arg1;

@end

@interface _CPPowerAssertion : NSObject
{
    double _timeout;
    NSString *_identifier;
    NSArray *_stack;
}

@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
- (void)timedout;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 timeout:(double)arg2;

@end

@interface _CPPowerAssertionThread : NSThread
{
    NSTimer *_timer;
    NSDate *_earliest;
}

- (void)didTimeOut:(id)arg1;
- (void)addAssertion:(id)arg1;
- (void)main;

@end

@interface _ReachabilityRequest : NSObject
{
    NSLock *_lock;
    NSString *_hostname;
    struct __SCNetworkReachability *_reachability;
    unsigned int _flags;
    struct __CFDictionary *_observers;
    _Bool _isReachable;
    _Bool _receivedAtLeastOneCallback;
}

@property(nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
- (_Bool)hasObservers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 selector:(SEL)arg2;
- (void)reachabilityChangedWithFlags:(unsigned int)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithHostname:(id)arg1;

@end

