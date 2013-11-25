//generated pixeldata
#ifndef _DataStarBig_h
#define _DataStarBig_h
#include "PixelData.h"
class DataStarBig:public PixelData{ 
public:
    DataStarBig()
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
        indices[4]=255;
        indices[5]=0;
        indices[6]=255;
        indices[7]=0;
        indices[8]=255;
        color= new uint8_t[4];
        color[0] =51;
        color[1] =51;
        color[2] =51;
        color[3] =255;
   };
};
#endif
