//generated pixeldata
#ifndef _DataAlienShoot1_h
#define _DataAlienShoot1_h
#include "PixelData.h"
class DataAlienShoot1:public PixelData{ 
public:
    DataAlienShoot1()
   {
       width =3;
        height=3;
       centerX=1;
        centerY=3;
        int size =width*height;
        indices= new uint8_t[size];
        indices[0]=0;
        indices[1]=255;
        indices[2]=0;
        indices[3]=255;
        indices[4]=4;
        indices[5]=255;
        indices[6]=0;
        indices[7]=255;
        indices[8]=0;
        color= new uint8_t[8];
        color[0] =141;
        color[1] =198;
        color[2] =63;
        color[3] =255;
        color[4] =0;
        color[5] =0;
        color[6] =0;
        color[7] =255;
   };
};
#endif
