//generated pixeldata
#ifndef _DataLifeLight_h
#define _DataLifeLight_h
#include "PixelData.h"
class DataLifeLight:public PixelData{ 
public:
    DataLifeLight()
   {
       width =7;
        height=7;
       centerX=3;
        centerY=7;
        int size =width*height;
        indices= new uint8_t[size];
        indices[0]=255;
        indices[1]=255;
        indices[2]=0;
        indices[3]=255;
        indices[4]=0;
        indices[5]=255;
        indices[6]=255;
        indices[7]=255;
        indices[8]=0;
        indices[9]=255;
        indices[10]=0;
        indices[11]=255;
        indices[12]=0;
        indices[13]=255;
        indices[14]=0;
        indices[15]=255;
        indices[16]=255;
        indices[17]=255;
        indices[18]=255;
        indices[19]=255;
        indices[20]=0;
        indices[21]=0;
        indices[22]=255;
        indices[23]=255;
        indices[24]=255;
        indices[25]=255;
        indices[26]=255;
        indices[27]=0;
        indices[28]=255;
        indices[29]=0;
        indices[30]=255;
        indices[31]=255;
        indices[32]=255;
        indices[33]=0;
        indices[34]=255;
        indices[35]=255;
        indices[36]=255;
        indices[37]=0;
        indices[38]=255;
        indices[39]=0;
        indices[40]=255;
        indices[41]=255;
        indices[42]=255;
        indices[43]=255;
        indices[44]=255;
        indices[45]=0;
        indices[46]=255;
        indices[47]=255;
        indices[48]=255;
        color= new uint8_t[4];
        color[0] =253;
        color[1] =207;
        color[2] =0;
        color[3] =255;
   };
};
#endif
