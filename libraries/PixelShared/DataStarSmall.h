//generated pixeldata
#ifndef _DataStarSmall_h
#define _DataStarSmall_h
#include "PixelData.h"
class DataStarSmall:public PixelData{ 
public:
    DataStarSmall()
   {
       width =1;
        height=1;
       centerX=0;
        centerY=1;
        int size =width*height;
        color = new uint8_t[size*3];
        alpha = new uint8_t[size];
        color[0] =43;
        color[1] =51;
        color[2] =50;
        alpha[0] =255;
   };
};
#endif
