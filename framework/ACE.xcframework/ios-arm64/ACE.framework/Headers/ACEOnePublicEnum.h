//
//  ACEOnePublicEnum.h
//  AceTM
//
//  Created by jinsang yoo on 2019/10/24.
//  Copyright © 2019 ACETM. All rights reserved.
//

#ifndef ACEOnePublicEnum_h
#define ACEOnePublicEnum_h

typedef NS_ENUM(NSInteger, IACParamsType) {
  // commerce log
  IACParamsType_AddInCart,
  //    IACParamsType_DeleteAllInCart,
  IACParamsType_DeleteInCart,
  //    IACParamsType_UpdateInCart,
  
  // event log
  IACParamsType_TrackLinkEvent,
  IACParamsType_TrackTelEvent,
  
  // pairs log
  IACParamsType_PairsTrackEvent,
  
  // pl log
  IACParamsType_TrackEvent,
  
  IACParamsType_AppearProduct,
  IACParamsType_BuyDone,
  IACParamsType_BuyCancel,
  
  IACParamsType_Leave,
  IACParamsType_Login,
  IACParamsType_Join,
  
  IACParamsType_Search,
  
  IACParamsType_None
};

typedef NS_ENUM(NSInteger, IACMaritalStatus) {
  IACMaritalStatus_Unknown,
  
  IACMaritalStatus_Married,
  IACMaritalStatus_Single
};

#endif /* ACEOnePublicEnum_h */
