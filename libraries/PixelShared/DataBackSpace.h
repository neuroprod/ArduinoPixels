//generated pixeldata
#ifndef _DataBackSpace_h
#define _DataBackSpace_h
#include "PixelData.h"
class DataBackSpace:public PixelData{ 
public:
    DataBackSpace()
   {
       width =1;
        height=16;
       centerX=0;
        centerY=16;
        int size =width*height;
        indices= new uint8_t[size];
        indices[0]=0;
        indices[1]=0;
        indices[2]=0;
        indices[3]=0;
        indices[4]=0;
        indices[5]=0;
        indices[6]=0;
        indices[7]=0;
        indices[8]=0;
        indices[9]=0;
        indices[10]=0;
        indices[11]=0;
        indices[12]=0;
        indices[13]=0;
        indices[14]=0;
        indices[15]=0;
        color= new uint8_t[4];
        color[0] =0;
        color[1] =0;
        color[2] =0;
        color[3] =255;
   };
};
#endif
