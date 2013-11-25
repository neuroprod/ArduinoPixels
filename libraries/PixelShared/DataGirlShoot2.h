//generated pixeldata
#ifndef _DataGirlShoot2_h
#define _DataGirlShoot2_h
#include "PixelData.h"
class DataGirlShoot2:public PixelData{ 
public:
    DataGirlShoot2()
   {
       width =8;
        height=4;
       centerX=4;
        centerY=4;
        int size =width*height;
        indices= new uint8_t[size];
        indices[0]=255;
        indices[1]=255;
        indices[2]=255;
        indices[3]=255;
        indices[4]=255;
        indices[5]=0;
        indices[6]=0;
        indices[7]=255;
        indices[8]=4;
        indices[9]=255;
        indices[10]=4;
        indices[11]=255;
        indices[12]=0;
        indices[13]=8;
        indices[14]=8;
        indices[15]=0;
        indices[16]=255;
        indices[17]=4;
        indices[18]=255;
        indices[19]=4;
        indices[20]=0;
        indices[21]=12;
        indices[22]=8;
        indices[23]=0;
        indices[24]=255;
        indices[25]=255;
        indices[26]=255;
        indices[27]=255;
        indices[28]=255;
        indices[29]=0;
        indices[30]=0;
        indices[31]=255;
        color= new uint8_t[16];
        color[0] =79;
        color[1] =224;
        color[2] =255;
        color[3] =255;
        color[4] =255;
        color[5] =255;
        color[6] =255;
        color[7] =122;
        color[8] =255;
        color[9] =255;
        color[10] =255;
        color[11] =254;
        color[12] =255;
        color[13] =255;
        color[14] =255;
        color[15] =250;
   };
};
#endif
