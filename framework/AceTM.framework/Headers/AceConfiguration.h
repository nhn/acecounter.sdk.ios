#import <Foundation/Foundation.h>
#import "BuilderForOne.h"
#import "BuilderForPlus.h"
#import "AceConfigurationBuilder.h"

@interface AceConfiguration : NSObject

@property (nonatomic, assign, readonly) BOOL enablePrivacyPolicy;
@property (nonatomic, strong, readonly, nullable) NSString *encryptKey;
@property (nonatomic, assign, readonly) BOOL isDebug;
@property (nonatomic, strong, readonly, nullable) NSString *key;
@property (nonatomic, assign, readonly) ACEPlatform platform;

- (instancetype _Nonnull)initWithBuilderForOne:(BuilderForOne * _Nonnull)builder;
- (instancetype _Nonnull)initWithBuilderForPlus:(BuilderForPlus * _Nonnull)builder;
+ (instancetype _Nonnull)build:(ACEPlatform)platform
                        params:(void (^ _Nullable)(id<AceConfigurationBuilder> _Nonnull builder))buildBlock;

- (NSDictionary * _Nonnull)getDictionary;
- (NSString * _Nonnull)toString;

@end
