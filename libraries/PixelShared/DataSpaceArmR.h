//generated pixeldata
#ifndef _DataSpaceArmR_h
#define _DataSpaceArmR_h
#include "PixelData.h"
class DataSpaceArmR:public PixelData{ 
public:
    DataSpaceArmR()
   {
       width =4;
        height=2;
       centerX=2;
        centerY=2;
        int size =width*height;
        indices= new uint8_t[size];
        indices[0]=0;
        indices[1]=0;
        indices[2]=0;
        indices[3]=0;
        indices[4]=255;
        indices[5]=255;
        indices[6]=255;
        indices[7]=0;
        color= new uint8_t[4];
        color[0] =141;
        color[1] =198;
        color[2] =63;
        color[3] =255;
   };
};
#endif
