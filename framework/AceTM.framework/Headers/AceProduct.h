#import "AceOption.h"

@interface AceProduct : NSObject

@property (nonatomic, strong) NSString * _Nullable name;
@property (nonatomic, strong) NSString * _Nullable code;
@property (nonatomic, assign) double price;
@property (nonatomic, assign) NSInteger quantity;
@property (nonatomic, strong) NSMutableArray<AceOption *> * _Nullable options;

- (instancetype _Nonnull)initWithName:(NSString * _Nullable)name
                                 code:(NSString * _Nullable)code
                                price:(double)price
                             quantity:(NSInteger)quantity
                              options:(NSArray<AceOption *> * _Nullable)options NS_DESIGNATED_INITIALIZER;
- (instancetype _Nonnull)initWithName:(NSString * _Nullable)name
                                 code:(NSString * _Nullable)code
                                price:(double)price
                             quantity:(NSInteger)quantity DEPRECATED_MSG_ATTRIBUTE("2.0.0 에서 deprecated 됐습니다. initWithName:code:price:quantity:options: 로 변경해주세요");

- (void)addOptionWithOption:(AceOption * _Nullable)option NS_SWIFT_NAME(addOption(option:));

@end
