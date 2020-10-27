//
//  AceOption.h
//  AceTM
//
//  Created by jinsang yoo on 05/06/2019.
//  Copyright © 2019 ACETM. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AceOption : NSObject

@property (nonatomic, strong) NSString * _Nullable name;
@property (nonatomic, strong) NSString * _Nullable code;
@property (nonatomic, assign) NSInteger quantity;

// init
- (instancetype _Nonnull)initWithName:(NSString * _Nullable)name
                                 code:(NSString * _Nullable)code
                             quantity:(NSInteger)quantity NS_DESIGNATED_INITIALIZER;

// toString
- (NSString * _Nonnull)toQueryString;

@end
