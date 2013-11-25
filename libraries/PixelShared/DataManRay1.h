//generated pixeldata
#ifndef _DataManRay1_h
#define _DataManRay1_h
#include "PixelData.h"
class DataManRay1:public PixelData{ 
public:
    DataManRay1()
   {
       width =13;
        height=2;
       centerX=6;
        centerY=2;
        int size =width*height;
        indices= new uint8_t[size];
        indices[0]=0;
        indices[1]=255;
        indices[2]=0;
        indices[3]=0;
        indices[4]=4;
        indices[5]=0;
        indices[6]=8;
        indices[7]=4;
        indices[8]=8;
        indices[9]=4;
        indices[10]=12;
        indices[11]=16;
        indices[12]=16;
        indices[13]=255;
        indices[14]=0;
        indices[15]=255;
        indices[16]=4;
        indices[17]=0;
        indices[18]=8;
        indices[19]=0;
        indices[20]=8;
        indices[21]=4;
        indices[22]=12;
        indices[23]=8;
        indices[24]=12;
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
