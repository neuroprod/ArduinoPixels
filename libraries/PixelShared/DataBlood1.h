//generated pixeldata
#ifndef _DataBlood1_h
#define _DataBlood1_h
#include "PixelData.h"
class DataBlood1:public PixelData{ 
public:
    DataBlood1()
   {
       width =3;
        height=3;
       centerX=1;
        centerY=3;
        int size =width*height;
        indices= new uint8_t[size];
        indices[0]=255;
        indices[1]=0;
        indices[2]=255;
        indices[3]=0;
        indices[4]=0;
        indices[5]=0;
        indices[6]=255;
        indices[7]=0;
        indices[8]=255;
        color= new uint8_t[4];
        color[0] =151;
        color[1] =0;
        color[2] =0;
        color[3] =255;
   };
};
#endif
