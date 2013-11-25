//generated pixeldata
#ifndef _DataAlien1Head_h
#define _DataAlien1Head_h
#include "PixelData.h"
class DataAlien1Head:public PixelData{ 
public:
    DataAlien1Head()
   {
       width =6;
        height=5;
       centerX=3;
        centerY=5;
        int size =width*height;
        indices= new uint8_t[size];
        indices[0]=0;
        indices[1]=0;
        indices[2]=0;
        indices[3]=0;
        indices[4]=0;
        indices[5]=0;
        indices[6]=0;
        indices[7]=4;
        indices[8]=4;
        indices[9]=4;
        indices[10]=4;
        indices[11]=0;
        indices[12]=0;
        indices[13]=8;
        indices[14]=4;
        indices[15]=8;
        indices[16]=4;
        indices[17]=0;
        indices[18]=0;
        indices[19]=4;
        indices[20]=4;
        indices[21]=4;
        indices[22]=4;
        indices[23]=0;
        indices[24]=0;
        indices[25]=0;
        indices[26]=0;
        indices[27]=0;
        indices[28]=0;
        indices[29]=0;
        color= new uint8_t[12];
        color[0] =141;
        color[1] =198;
        color[2] =63;
        color[3] =255;
        color[4] =255;
        color[5] =255;
        color[6] =255;
        color[7] =255;
        color[8] =0;
        color[9] =0;
        color[10] =0;
        color[11] =255;
   };
};
#endif
