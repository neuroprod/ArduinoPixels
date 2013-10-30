//generated pixeldata
#ifndef _DataFlower_h
#define _DataFlower_h
#include "PixelData.h"
class DataFlower:public PixelData{ 
public:
    DataFlower()
   {
       width =3;
        height=3;
       centerX=1;
        centerY=3;
        int size =width*height;
        color = new uint8_t[size*3];
        alpha = new uint8_t[size];
        color[0] =216;
        color[1] =255;
        color[2] =252;
        alpha[0] =0;
        color[3] =216;
        color[4] =255;
        color[5] =252;
        alpha[1] =255;
        color[6] =216;
        color[7] =255;
        color[8] =252;
        alpha[2] =0;
        color[9] =216;
        color[10] =255;
        color[11] =252;
        alpha[3] =255;
        color[12] =161;
        color[13] =175;
        color[14] =97;
        alpha[4] =255;
        color[15] =216;
        color[16] =255;
        color[17] =252;
        alpha[5] =255;
        color[18] =216;
        color[19] =255;
        color[20] =252;
        alpha[6] =0;
        color[21] =216;
        color[22] =255;
        color[23] =252;
        alpha[7] =255;
        color[24] =161;
        color[25] =175;
        color[26] =97;
        alpha[8] =0;
   };
};
#endif
