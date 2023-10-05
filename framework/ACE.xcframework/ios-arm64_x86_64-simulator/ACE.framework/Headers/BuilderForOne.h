//
//  BuilderForOne.h
//  AceTM
//
//  Created by jinsang yoo on 2019/12/10.
//  Copyright © 2019 ACETM. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ACE/ACEPlatform.h>

NS_ASSUME_NONNULL_BEGIN

@interface BuilderForOne : NSObject

@property (nonatomic, strong, nullable, readonly) NSString *key;
@property (nonatomic, assign, readonly) BOOL enablePrivacyPolicy;
@property (nonatomic, assign, readonly) BOOL isDebug;
@property (nonatomic, assign, readonly) ACEPlatform platform;
@property (nonatomic, assign, readonly) BOOL disableToCollectAdvertisingIdentifier;

- (instancetype _Nonnull)init:(NSString * _Nullable)key
          enablePrivacyPolicy:(BOOL)enablePrivacyPolicy
                      isDebug:(BOOL)isDebug
disableToCollectAdvertisingIdentifier:(BOOL)disableToCollectAdvertisingIdentifier;

- (instancetype _Nonnull)init:(NSString * _Nullable)key
          enablePrivacyPolicy:(BOOL)enablePrivacyPolicy
                      isDebug:(BOOL)isDebug;

- (instancetype _Nonnull)init:(NSString * _Nullable)key
                      isDebug:(BOOL)isDebug;

- (instancetype _Nonnull)init:(NSString * _Nullable)key;

@end

NS_ASSUME_NONNULL_END
