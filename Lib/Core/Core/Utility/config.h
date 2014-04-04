//
//  config.h
//  Core
//
//  Created by lichangchun on 3/27/14.
//  Copyright (c) 2014 lichangchun. All rights reserved.
//

#ifndef Core_config_h
#define Core_config_h

enum {
    ERR_UNKNOWN                 = -1,
    ERR_OK                      = 0,
    ERR_BAD                     = 1,
    ERR_PARAM_ERR               = 2,

    ERR_OUT_OF_MEMORY           = 100,

    ERR_BASE64_BUFFER_TOO_SMALL = 1000,
    ERR_BASE64_INVALID_CHARACTER = 1001,
};
typedef int CCErrCode;
#ifdef _DEBUG
    #define LIBCORE_DEBUG
#endif
#endif
