//
//  ACSDK.h
//  AceTM
//
//  Created by jinsang yoo on 06/09/2019.
//  Copyright © 2019 ACETM. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>

#import <ACE/AceConfiguration.h>
#import <ACE/ACParams.h>

#import <ACE/AceConfigurationBuilderForOne.h>

NS_ASSUME_NONNULL_BEGIN

@interface ACSDK : NSObject

// init
+ (void)configure:(AceConfiguration *)config;
+ (void)configureWithCallback:(AceConfiguration * _Nonnull)config
                    completed:(void (^ _Nullable)(NSDictionary * _Nullable results))completed
                       failed:(void (^ _Nullable)(NSDictionary * _Nullable results))failed;

// common
+ (NSString * _Nonnull)getKey;
+ (NSString * _Nonnull)getDevice;
+ (NSString * _Nonnull)getTS;

// api
+ (void)send:(IACParamsType)type
      params:(ACParams * _Nonnull)params;

// deeplink, push
+ (void)appOpenUrl:(NSURL * _Nullable)url;
+ (void)push:(NSDictionary * _Nullable)data;

// QA
//+ (void)removeAllCache;
//+ (void)sendLNCWithACEExceptionWithDebugInfo:(NSString * _Nullable)msg;
//+ (void)sendLNCWithNSErrorWithDebugInfo:(NSString * _Nullable)msg;
//+ (void)sendLNCWithNSExceptionWithDebugInfo:(NSString * _Nullable)msg;

// idfa
+ (void)setAdvertisingIdentifier:(NSString * _Nullable)advertisingIdentifier
    isAdvertisingTrackingEnabled:(BOOL)isAdvertisingTrackingEnabled;

// sdk status
+ (BOOL)isEnableSDK;
+ (NSDictionary * _Nonnull)getSdkDetails;
+ (NSString * _Nonnull)getSdkVersion;

@end

NS_ASSUME_NONNULL_END
