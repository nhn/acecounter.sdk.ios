//
//  ACProduct.h
//  AceTM
//
//  Created by jinsang yoo on 2019/11/05.
//  Copyright © 2019 ACETM. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ACProduct : NSObject

@property (nonatomic, strong) NSString * _Nullable name;
@property (nonatomic, strong) NSString * _Nullable category;
@property (nonatomic, strong) NSString * _Nullable price;
@property (nonatomic, assign) NSInteger quantity;
@property (nonatomic, strong) NSString * _Nullable productId;
@property (nonatomic, strong) NSString * _Nullable optionCodeName;

- (instancetype _Nonnull)initWithName:(NSString * _Nullable)name
                             category:(NSString * _Nullable)category
                                price:(NSString * _Nullable)price
                             quantity:(NSInteger)quantity
                            productId:(NSString * _Nullable)productId
                       optionCodeName:(NSString * _Nullable)optionCodeName;

// toString
- (NSString * _Nonnull)description:(NSInteger)apiIdentity;

@end

NS_ASSUME_NONNULL_END
