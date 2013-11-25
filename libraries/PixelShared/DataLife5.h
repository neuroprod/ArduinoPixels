//generated pixeldata
#ifndef _DataLife5_h
#define _DataLife5_h
#include "PixelData.h"
class DataLife5:public PixelData{ 
public:
    DataLife5()
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
        indices[8]=4;
        indices[9]=8;
        indices[10]=4;
        indices[11]=4;
        indices[12]=4;
        indices[13]=4;
        indices[14]=8;
        indices[15]=255;
        indices[16]=4;
        indices[17]=4;
        indices[18]=8;
        indices[19]=255;
        indices[20]=255;
        indices[21]=255;
        indices[22]=8;
        indices[23]=255;
        indices[24]=255;
        color= new uint8_t[12];
        color[0] =156;
        color[1] =156;
        color[2] =156;
        color[3] =255;
        color[4] =249;
        color[5] =0;
        color[6] =0;
        color[7] =255;
        color[8] =180;
        color[9] =0;
        color[10] =0;
        color[11] =255;
   };
};
#endif
