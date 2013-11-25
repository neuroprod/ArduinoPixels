//generated pixeldata
#ifndef _DataSpaceArmL_h
#define _DataSpaceArmL_h
#include "PixelData.h"
class DataSpaceArmL:public PixelData{ 
public:
    DataSpaceArmL()
   {
       width =4;
        height=2;
       centerX=2;
        centerY=2;
        int size =width*height;
        indices= new uint8_t[size];
        indices[0]=0;
        indices[1]=255;
        indices[2]=255;
        indices[3]=255;
        indices[4]=0;
        indices[5]=0;
        indices[6]=0;
        indices[7]=0;
        color= new uint8_t[4];
        color[0] =141;
        color[1] =198;
        color[2] =63;
        color[3] =255;
   };
};
#endif
