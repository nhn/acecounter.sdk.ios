//
//  BuilderForPlus.h
//  AceTM
//
//  Created by jinsang yoo on 09/09/2019.
//  Copyright © 2019 ACETM. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ACEPlatform.h"

NS_ASSUME_NONNULL_BEGIN

@interface BuilderForPlus : NSObject

@property (nonatomic, strong, nullable, readonly) NSString *key;
@property (nonatomic, strong, nullable, readonly) NSString *encryptKey;
@property (nonatomic, assign, readonly) BOOL isDebug;
@property (nonatomic, assign, readonly) ACEPlatform platform;

- (instancetype _Nonnull)init:(NSString * _Nullable)key
                   encryptKey:(NSString * _Nullable)encryptKey
                      isDebug:(BOOL)isDebug;

- (instancetype _Nonnull)init:(NSString * _Nullable)key
                      isDebug:(BOOL)isDebug;
- (instancetype _Nonnull)init:(NSString * _Nullable)key;

@end

NS_ASSUME_NONNULL_END
