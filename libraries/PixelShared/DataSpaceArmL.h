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
        color = new uint8_t[size*3];
        alpha = new uint8_t[size];
        color[0] =119;
        color[1] =198;
        color[2] =62;
        alpha[0] =255;
        color[3] =119;
        color[4] =198;
        color[5] =62;
        alpha[1] =0;
        color[6] =119;
        color[7] =198;
        color[8] =62;
        alpha[2] =0;
        color[9] =119;
        color[10] =198;
        color[11] =62;
        alpha[3] =0;
        color[12] =119;
        color[13] =198;
        color[14] =62;
        alpha[4] =255;
        color[15] =119;
        color[16] =198;
        color[17] =62;
        alpha[5] =255;
        color[18] =119;
        color[19] =198;
        color[20] =62;
        alpha[6] =255;
        color[21] =119;
        color[22] =198;
        color[23] =62;
        alpha[7] =255;
   };
};
#endif
