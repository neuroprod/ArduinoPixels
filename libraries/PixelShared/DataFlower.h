//generated pixeldata
#ifndef _Dataflower_h
#define _Dataflower_h
#include "PixelData.h"
class Dataflower:public PixelData{ 
public:
    Dataflower()
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
        indices[4]=4;
        indices[5]=0;
        indices[6]=255;
        indices[7]=0;
        indices[8]=255;
        color= new uint8_t[8];
        color[0] =255;
        color[1] =255;
        color[2] =255;
        color[3] =255;
        color[4] =190;
        color[5] =175;
        color[6] =98;
        color[7] =255;
   };
};
#endif
