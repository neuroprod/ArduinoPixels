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
        color = new uint8_t[size*3];
        alpha = new uint8_t[size];
        color[0] =119;
        color[1] =198;
        color[2] =62;
        alpha[0] =255;
        color[3] =119;
        color[4] =198;
        color[5] =62;
        alpha[1] =255;
        color[6] =119;
        color[7] =198;
        color[8] =62;
        alpha[2] =255;
        color[9] =119;
        color[10] =198;
        color[11] =62;
        alpha[3] =255;
        color[12] =119;
        color[13] =198;
        color[14] =62;
        alpha[4] =0;
        color[15] =119;
        color[16] =198;
        color[17] =62;
        alpha[5] =0;
        color[18] =216;
        color[19] =255;
        color[20] =252;
        alpha[6] =0;
        color[21] =119;
        color[22] =198;
        color[23] =62;
        alpha[7] =255;
   };
};
#endif
