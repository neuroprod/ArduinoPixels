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
        indices= new uint8_t[size];
        indices[0]=0;
        indices[1]=0;
        color= new uint8_t[4];
        color[0] =237;
        color[1] =28;
        color[2] =36;
        color[3] =255;
   };
};
#endif
