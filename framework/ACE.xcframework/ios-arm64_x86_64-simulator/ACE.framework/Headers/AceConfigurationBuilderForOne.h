//
//  AceConfigurationBuilderForOne.h
//  AceTM
//
//  Created by jinsang yoo on 2019/10/17.
//  Copyright © 2019 ACETM. All rights reserved.
//

#import <ACE/AceConfigurationBuilder.h>

#ifndef AceConfigurationBuilderForOne_h
#define AceConfigurationBuilderForOne_h

@protocol AceConfigurationBuilderForOne <AceConfigurationBuilder>

@required
@property (nonatomic, strong, nullable) NSString *key;

@optional
@property (nonatomic, assign) BOOL enablePrivacyPolicy;
@property (nonatomic, assign) BOOL disableToCollectAdvertisingIdentifier;

@end

#endif /* AceConfigurationBuilderForOne_h */
