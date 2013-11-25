//generated pixeldata
#ifndef _DataBlood3_h
#define _DataBlood3_h
#include "PixelData.h"
class DataBlood3:public PixelData{ 
public:
    DataBlood3()
   {
       width =7;
        height=3;
       centerX=3;
        centerY=3;
        int size =width*height;
        indices= new uint8_t[size];
        indices[0]=0;
        indices[1]=255;
        indices[2]=255;
        indices[3]=255;
        indices[4]=255;
        indices[5]=255;
        indices[6]=0;
        indices[7]=255;
        indices[8]=255;
        indices[9]=255;
        indices[10]=255;
        indices[11]=255;
        indices[12]=255;
        indices[13]=255;
        indices[14]=255;
        indices[15]=0;
        indices[16]=255;
        indices[17]=255;
        indices[18]=255;
        indices[19]=0;
        indices[20]=255;
        color= new uint8_t[4];
        color[0] =151;
        color[1] =0;
        color[2] =0;
        color[3] =255;
   };
};
#endif
