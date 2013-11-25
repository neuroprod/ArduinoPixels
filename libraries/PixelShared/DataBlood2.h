//generated pixeldata
#ifndef _DataBlood2_h
#define _DataBlood2_h
#include "PixelData.h"
class DataBlood2:public PixelData{ 
public:
    DataBlood2()
   {
       width =5;
        height=5;
       centerX=2;
        centerY=5;
        int size =width*height;
        indices= new uint8_t[size];
        indices[0]=0;
        indices[1]=255;
        indices[2]=255;
        indices[3]=255;
        indices[4]=0;
        indices[5]=255;
        indices[6]=0;
        indices[7]=255;
        indices[8]=0;
        indices[9]=255;
        indices[10]=255;
        indices[11]=255;
        indices[12]=255;
        indices[13]=255;
        indices[14]=255;
        indices[15]=255;
        indices[16]=0;
        indices[17]=255;
        indices[18]=0;
        indices[19]=255;
        indices[20]=0;
        indices[21]=255;
        indices[22]=255;
        indices[23]=255;
        indices[24]=0;
        color= new uint8_t[4];
        color[0] =151;
        color[1] =0;
        color[2] =0;
        color[3] =255;
   };
};
#endif
