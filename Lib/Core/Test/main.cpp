//
//  main.cpp
//  Test
//
//  Created by lichangchun on 3/27/14.
//  Copyright (c) 2014 lichangchun. All rights reserved.
//

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "../Core/Utility/CCBase64.h"

int main(int argc, const char * argv[])
{
    

    // insert code here...
    //unsigned char *d = "ccc";
    const char *a = "aaaab";
    char b[60] ;
    int ib = sizeof(b);
    base64_encode(a, strlen(a), b, &ib);
    
    char c[60];
    int ic = 60;
    base64_decode(b, strlen(b), c, &ic);

    return 0;
}

