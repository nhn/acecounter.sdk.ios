//
//  ACParams.h
//  AceTM
//
//  Created by jinsang yoo on 2019/10/24.
//  Copyright © 2019 ACETM. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ACE/ACEOnePublicEnum.h>
#import <ACE/ACProduct.h>
#import <ACE/ACEGender.h>

#ifndef ACParams_h
#define ACParams_h

NS_ASSUME_NONNULL_BEGIN

@interface ACParams : NSObject

@property (nonatomic, assign) NSInteger age;
@property (nonatomic, strong) NSDictionary * _Nullable pairs;
@property (nonatomic, strong) NSString * _Nullable eventName;
@property (nonatomic, assign) ACEGender gender;
@property (nonatomic, strong) NSString * _Nullable keyword;
@property (nonatomic, strong) NSString * _Nullable linkName;
@property (nonatomic, assign) IACMaritalStatus meritalStatus;
@property (nonatomic, strong) NSString * _Nullable orderNumber;
@property (nonatomic, strong) NSString * _Nullable payMethodName;
@property (nonatomic, strong) NSString * _Nullable productCategoryName;
@property (nonatomic, strong) NSString * _Nullable productName;
@property (nonatomic, strong) NSString * _Nullable productPrice;
@property (nonatomic, strong) NSMutableArray<ACProduct *> * _Nullable products;
@property (nonatomic, strong) NSString * _Nullable tel;
@property (nonatomic, assign) IACParamsType type;
@property (nonatomic, strong) NSString * _Nullable userID;

// init
- (instancetype _Nonnull)init;

// product
- (void)addProduct:(ACProduct * _Nonnull)product;

// toString
- (NSDictionary * _Nonnull)getDictionary;
- (NSString * _Nonnull)toString;

@end

NS_ASSUME_NONNULL_END

#endif /* ACParams_h */
