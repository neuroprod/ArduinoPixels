//generated pixeldata
#ifndef _DataDuckBig_h
#define _DataDuckBig_h
#include "PixelData.h"
class DataDuckBig:public PixelData{ 
public:
    DataDuckBig()
   {
       width =4;
        height=4;
       centerX=2;
        centerY=4;
        int size =width*height;
        indices= new uint8_t[size];
        indices[0]=0;
        indices[1]=4;
        indices[2]=255;
        indices[3]=255;
        indices[4]=255;
        indices[5]=4;
        indices[6]=255;
        indices[7]=255;
        indices[8]=255;
        indices[9]=4;
        indices[10]=4;
        indices[11]=4;
        indices[12]=255;
        indices[13]=4;
        indices[14]=4;
        indices[15]=4;
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
