//generated pixeldata
#ifndef _DataAlienShoot2_h
#define _DataAlienShoot2_h
#include "PixelData.h"
class DataAlienShoot2:public PixelData{ 
public:
    DataAlienShoot2()
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
