//generated pixeldata
#ifndef _DataStarSmall_h
#define _DataStarSmall_h
#include "PixelData.h"
class DataStarSmall:public PixelData{ 
public:
    DataStarSmall()
   {
       width =1;
        height=1;
       centerX=0;
        centerY=1;
        int size =width*height;
        indices= new uint8_t[size];
        indices[0]=0;
        color= new uint8_t[4];
        color[0] =51;
        color[1] =51;
        color[2] =51;
        color[3] =255;
   };
};
#endif
