//generated pixeldata
#ifndef _DataHitPointTest_h
#define _DataHitPointTest_h
#include "PixelData.h"
class DataHitPointTest:public PixelData{ 
public:
    DataHitPointTest()
   {
       width =2;
        height=1;
       centerX=1;
        centerY=1;
        int size =width*height;
        color = new uint8_t[size*3];
        alpha = new uint8_t[size];
        color[0] =201;
        color[1] =28;
        color[2] =35;
        alpha[0] =255;
        color[3] =201;
        color[4] =28;
        color[5] =35;
        alpha[1] =255;
   };
};
#endif
