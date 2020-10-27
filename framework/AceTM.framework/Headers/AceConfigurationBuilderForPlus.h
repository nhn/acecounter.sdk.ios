//
//  AceConfigurationBuilderForPlus.h
//  AceTM
//
//  Created by jinsang yoo on 2019/10/24.
//  Copyright © 2019 ACETM. All rights reserved.
//

#import "AceConfigurationBuilder.h"

#ifndef AceConfigurationBuilderForPlus_h
#define AceConfigurationBuilderForPlus_h

NS_ASSUME_NONNULL_BEGIN

@protocol AceConfigurationBuilderForPlus <AceConfigurationBuilder>

@required
@property (nonatomic, strong, nullable) NSString *key;

@optional
@property (nonatomic, strong, nullable) NSString *encryptKey;

@end

NS_ASSUME_NONNULL_END
#endif
