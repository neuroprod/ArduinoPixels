//generated pixeldata
#ifndef _DataLife7_h
#define _DataLife7_h
#include "PixelData.h"
class DataLife7:public PixelData{ 
public:
    DataLife7()
   {
       width =5;
        height=5;
       centerX=2;
        centerY=5;
        int size =width*height;
        indices= new uint8_t[size];
        indices[0]=255;
        indices[1]=0;
        indices[2]=255;
        indices[3]=0;
        indices[4]=255;
        indices[5]=0;
        indices[6]=0;
        indices[7]=0;
        indices[8]=0;
        indices[9]=4;
        indices[10]=0;
        indices[11]=0;
        indices[12]=0;
        indices[13]=0;
        indices[14]=4;
        indices[15]=255;
        indices[16]=0;
        indices[17]=0;
        indices[18]=4;
        indices[19]=255;
        indices[20]=255;
        indices[21]=255;
        indices[22]=4;
        indices[23]=255;
        indices[24]=255;
        color= new uint8_t[8];
        color[0] =249;
        color[1] =0;
        color[2] =0;
        color[3] =255;
        color[4] =180;
        color[5] =0;
        color[6] =0;
        color[7] =255;
   };
};
#endif
