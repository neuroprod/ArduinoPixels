//generated pixeldata
#ifndef _DataBoyShoot2_h
#define _DataBoyShoot2_h
#include "PixelData.h"
class DataBoyShoot2:public PixelData{ 
public:
    DataBoyShoot2()
   {
       width =10;
        height=2;
       centerX=5;
        centerY=2;
        int size =width*height;
        indices= new uint8_t[size];
        indices[0]=255;
        indices[1]=0;
        indices[2]=255;
        indices[3]=4;
        indices[4]=255;
        indices[5]=4;
        indices[6]=255;
        indices[7]=8;
        indices[8]=12;
        indices[9]=12;
        indices[10]=0;
        indices[11]=255;
        indices[12]=4;
        indices[13]=255;
        indices[14]=4;
        indices[15]=255;
        indices[16]=8;
        indices[17]=255;
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
