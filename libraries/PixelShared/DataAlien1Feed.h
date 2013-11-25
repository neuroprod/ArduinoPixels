//generated pixeldata
#ifndef _DataAlien1Feed_h
#define _DataAlien1Feed_h
#include "PixelData.h"
class DataAlien1Feed:public PixelData{ 
public:
    DataAlien1Feed()
   {
       width =5;
        height=7;
       centerX=2;
        centerY=7;
        int size =width*height;
        indices= new uint8_t[size];
        indices[0]=0;
        indices[1]=255;
        indices[2]=255;
        indices[3]=255;
        indices[4]=0;
        indices[5]=0;
        indices[6]=255;
        indices[7]=255;
        indices[8]=255;
        indices[9]=0;
        indices[10]=0;
        indices[11]=255;
        indices[12]=255;
        indices[13]=255;
        indices[14]=0;
        indices[15]=0;
        indices[16]=255;
        indices[17]=255;
        indices[18]=255;
        indices[19]=0;
        indices[20]=0;
        indices[21]=255;
        indices[22]=255;
        indices[23]=255;
        indices[24]=0;
        indices[25]=0;
        indices[26]=255;
        indices[27]=255;
        indices[28]=255;
        indices[29]=0;
        indices[30]=0;
        indices[31]=0;
        indices[32]=255;
        indices[33]=0;
        indices[34]=0;
        color= new uint8_t[4];
        color[0] =141;
        color[1] =198;
        color[2] =63;
        color[3] =255;
   };
};
#endif
