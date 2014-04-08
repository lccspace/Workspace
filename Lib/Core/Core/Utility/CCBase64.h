//
//  CCBase64.h
//  Core
//
//  Created by lichangchun on 3/27/14.
//  Copyright (c) 2014 lichangchun. All rights reserved.
//

#ifndef __Core__CCBase64__
#define __Core__CCBase64__

#include "config.h"

CC_EXPORT_BEGIN
    int base64_encode(const char *pSrc, int iSrcLen, char *pDst, int *piDstLen);
    int base64_decode(const char *pSrc, int iSrcLen, char *pDst, int *piDstLen);
    int base64_encode_websafe(const char *pSrc, int iSrcLen, char *pDst, int *piDstLen);
    int base64_decode_websafe(const char *pSrc, int iSrcLen, char *pDst, int *piDstLen);
CC_EXPORT_END

NS_CC_BEGIN

class CC_DLL CCBase64
{
public:
	CCBase64();
	virtual ~CCBase64();
private:
    
};
NS_CC_END

#endif /* defined(__Core__CCBase64__) */
