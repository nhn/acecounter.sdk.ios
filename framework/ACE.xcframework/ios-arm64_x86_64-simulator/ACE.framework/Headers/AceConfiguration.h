#import <Foundation/Foundation.h>
#import <ACE/BuilderForOne.h>
#import <ACE/AceConfigurationBuilder.h>

@interface AceConfiguration : NSObject

@property (nonatomic, assign, readonly) BOOL enablePrivacyPolicy;
@property (nonatomic, assign, readonly) BOOL isDebug;
@property (nonatomic, strong, readonly, nullable) NSString *key;
@property (nonatomic, assign, readonly) ACEPlatform platform;
@property (nonatomic, assign, readonly) BOOL disableToCollectAdvertisingIdentifier;

- (instancetype _Nonnull)initWithBuilderForOne:(BuilderForOne * _Nonnull)builder;
+ (instancetype _Nonnull)build:(ACEPlatform)platform
                        params:(void (^ _Nullable)(id<AceConfigurationBuilder> _Nonnull builder))buildBlock;

- (NSDictionary * _Nonnull)getDictionary;
- (NSString * _Nonnull)toString;

@end
