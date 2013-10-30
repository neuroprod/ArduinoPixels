//generated pixeldata
#ifndef _DataBlood1_h
#define _DataBlood1_h
#include "PixelData.h"
class DataBlood1:public PixelData{ 
public:
    DataBlood1()
   {
       width =1;
        height=1;
       centerX=0;
        centerY=1;
        int size =width*height;
        color = new uint8_t[size*3];
        alpha = new uint8_t[size];
        color[0] =128;
        color[1] =0;
        color[2] =0;
        alpha[0] =255;
   };
};
#endif
