//
//  config.h
//  Core
//
//  Created by lichangchun on 3/27/14.
//  Copyright (c) 2014 lichangchun. All rights reserved.
//

#ifndef Core_config_h
#define Core_config_h

#ifdef _DEBUG
    #define LIBCORE_DEBUG
#endif

#ifdef __cplusplus
    #define NS_CC_BEGIN namespace cc_lib_core {
    #define NS_CC_END   }
    #define USING_NS_CC using namespace cc_lib_core
#else
    #define NS_CC_BEGIN
    #define NS_CC_END
    #define USING_NS_CC
#endif

#ifndef NULL
#ifdef __cplusplus
    #define NULL    0
#else
    #define NULL    ((void *)0)
#endif
#endif

#ifdef __cplusplus
#define CC_EXPORT_BEGIN extern "C"  \
{
#else
#define CC_EXPORT_BEGIN
#endif

#ifdef __cplusplus
#define CC_EXPORT_END }
#else
#define CC_EXPORT_END
#endif

#define CC_DLL

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


#endif
