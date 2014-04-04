//
//  CCBase64.h
//  Core
//
//  Created by lichangchun on 3/27/14.
//  Copyright (c) 2014 lichangchun. All rights reserved.
//

#ifndef __Core__CCBase64__
#define __Core__CCBase64__
#ifdef __cplusplus
extern "C" {
#endif
    int base64_encode(const char *pSrc, int iSrcLen, char *pDst, int *piDstLen);
    int base64_decode(const char *pSrc, int iSrcLen, char *pDst, int *piDstLen);
    int base64_encode_websafe(const char *pSrc, int iSrcLen, char *pDst, int *piDstLen);
    int base64_decode_websafe(const char *pSrc, int iSrcLen, char *pDst, int *piDstLen);
#ifdef __cplusplus
}
#endif

class CCBase64
{
public:
	CCBase64();
	virtual ~CCBase64();
private:
    
};


#endif /* defined(__Core__CCBase64__) */
