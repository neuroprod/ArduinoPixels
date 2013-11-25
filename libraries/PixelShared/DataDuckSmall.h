//generated pixeldata
#ifndef _DataDuckSmall_h
#define _DataDuckSmall_h
#include "PixelData.h"
class DataDuckSmall:public PixelData{ 
public:
    DataDuckSmall()
   {
       width =3;
        height=2;
       centerX=1;
        centerY=2;
        int size =width*height;
        indices= new uint8_t[size];
        indices[0]=0;
        indices[1]=4;
        indices[2]=255;
        indices[3]=255;
        indices[4]=4;
        indices[5]=4;
        color= new uint8_t[8];
        color[0] =255;
        color[1] =147;
        color[2] =8;
        color[3] =255;
        color[4] =255;
        color[5] =194;
        color[6] =8;
        color[7] =255;
   };
};
#endif
