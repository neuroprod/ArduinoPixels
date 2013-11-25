//generated pixeldata
#ifndef _DataBackGrass_h
#define _DataBackGrass_h
#include "PixelData.h"
class DataBackGrass:public PixelData{ 
public:
    DataBackGrass()
   {
       width =1;
        height=16;
       centerX=0;
        centerY=16;
        int size =width*height;
        indices= new uint8_t[size];
        indices[0]=0;
        indices[1]=0;
        indices[2]=0;
        indices[3]=0;
        indices[4]=0;
        indices[5]=0;
        indices[6]=4;
        indices[7]=4;
        indices[8]=4;
        indices[9]=4;
        indices[10]=4;
        indices[11]=4;
        indices[12]=4;
        indices[13]=4;
        indices[14]=4;
        indices[15]=4;
        color= new uint8_t[8];
        color[0] =136;
        color[1] =199;
        color[2] =228;
        color[3] =255;
        color[4] =82;
        color[5] =117;
        color[6] =94;
        color[7] =255;
   };
};
#endif
