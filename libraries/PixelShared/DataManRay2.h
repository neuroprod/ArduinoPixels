//generated pixeldata
#ifndef _DataManRay2_h
#define _DataManRay2_h
#include "PixelData.h"
class DataManRay2:public PixelData{ 
public:
    DataManRay2()
   {
       width =13;
        height=2;
       centerX=6;
        centerY=2;
        int size =width*height;
        indices= new uint8_t[size];
        indices[0]=255;
        indices[1]=0;
        indices[2]=255;
        indices[3]=4;
        indices[4]=0;
        indices[5]=8;
        indices[6]=0;
        indices[7]=8;
        indices[8]=4;
        indices[9]=12;
        indices[10]=8;
        indices[11]=16;
        indices[12]=16;
        indices[13]=0;
        indices[14]=255;
        indices[15]=0;
        indices[16]=255;
        indices[17]=4;
        indices[18]=0;
        indices[19]=8;
        indices[20]=4;
        indices[21]=8;
        indices[22]=4;
        indices[23]=12;
        indices[24]=16;
        indices[25]=16;
        color= new uint8_t[20];
        color[0] =147;
        color[1] =255;
        color[2] =0;
        color[3] =122;
        color[4] =147;
        color[5] =255;
        color[6] =0;
        color[7] =186;
        color[8] =147;
        color[9] =255;
        color[10] =0;
        color[11] =219;
        color[12] =147;
        color[13] =255;
        color[14] =0;
        color[15] =245;
        color[16] =147;
        color[17] =255;
        color[18] =0;
        color[19] =236;
   };
};
#endif
