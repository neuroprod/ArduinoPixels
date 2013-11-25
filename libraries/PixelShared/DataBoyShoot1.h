//generated pixeldata
#ifndef _DataBoyShoot1_h
#define _DataBoyShoot1_h
#include "PixelData.h"
class DataBoyShoot1:public PixelData{ 
public:
    DataBoyShoot1()
   {
       width =10;
        height=2;
       centerX=5;
        centerY=2;
        int size =width*height;
        indices= new uint8_t[size];
        indices[0]=0;
        indices[1]=255;
        indices[2]=4;
        indices[3]=255;
        indices[4]=4;
        indices[5]=255;
        indices[6]=8;
        indices[7]=255;
        indices[8]=12;
        indices[9]=12;
        indices[10]=255;
        indices[11]=0;
        indices[12]=255;
        indices[13]=4;
        indices[14]=255;
        indices[15]=4;
        indices[16]=255;
        indices[17]=8;
        indices[18]=12;
        indices[19]=12;
        color= new uint8_t[16];
        color[0] =147;
        color[1] =255;
        color[2] =0;
        color[3] =150;
        color[4] =147;
        color[5] =255;
        color[6] =0;
        color[7] =219;
        color[8] =147;
        color[9] =255;
        color[10] =0;
        color[11] =245;
        color[12] =147;
        color[13] =255;
        color[14] =0;
        color[15] =236;
   };
};
#endif
