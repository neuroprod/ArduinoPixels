//
//  PixelData.h
//  PixelShared
//
//  Created by Kris Temmerman on 05/10/13.
//  Copyright (c) 2013 Kris Temmerman. All rights reserved.
//

#ifndef PixelShared_PixelData_h
#define PixelShared_PixelData_h



#include "PixelgameInclude.h"
class PixelData
{
public:
    PixelData(){color =0;indices=0;};
    ~PixelData() {
    
        delete [] color ;
        color  =0;
        delete [] indices ;
        indices =0;
    
    }
    uint8_t *color;
    uint8_t * indices;
    int width;
    int height;
    int centerX;
    int centerY;
  
};

#endif

