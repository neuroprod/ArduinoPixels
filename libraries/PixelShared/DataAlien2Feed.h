//generated pixeldata
#ifndef _DataAlien2Feed_h
#define _DataAlien2Feed_h
#include "PixelData.h"
class DataAlien2Feed:public PixelData{ 
public:
    DataAlien2Feed()
   {
       width =2;
        height=1;
       centerX=1;
        centerY=1;
        int size =width*height;
        indices= new uint8_t[size];
        indices[0]=0;
        indices[1]=0;
        color= new uint8_t[4];
        color[0] =141;
        color[1] =198;
        color[2] =63;
        color[3] =255;
   };
};
#endif
