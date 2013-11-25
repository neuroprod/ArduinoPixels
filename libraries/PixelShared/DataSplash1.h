//generated pixeldata
#ifndef _DataSplash1_h
#define _DataSplash1_h
#include "PixelData.h"
class DataSplash1:public PixelData{ 
public:
    DataSplash1()
   {
       width =6;
        height=4;
       centerX=3;
        centerY=4;
        int size =width*height;
        indices= new uint8_t[size];
        indices[0]=255;
        indices[1]=255;
        indices[2]=255;
        indices[3]=255;
        indices[4]=255;
        indices[5]=0;
        indices[6]=0;
        indices[7]=255;
        indices[8]=255;
        indices[9]=0;
        indices[10]=255;
        indices[11]=255;
        indices[12]=255;
        indices[13]=255;
        indices[14]=0;
        indices[15]=255;
        indices[16]=255;
        indices[17]=255;
        indices[18]=4;
        indices[19]=4;
        indices[20]=4;
        indices[21]=4;
        indices[22]=4;
        indices[23]=4;
        color= new uint8_t[8];
        color[0] =84;
        color[1] =141;
        color[2] =162;
        color[3] =255;
        color[4] =103;
        color[5] =202;
        color[6] =234;
        color[7] =255;
   };
};
#endif
