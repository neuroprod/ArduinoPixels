//generated pixeldata
#ifndef _DataBackSpace_h
#define _DataBackSpace_h
#include "PixelData.h"
class DataBackSpace:public PixelData{ 
public:
    DataBackSpace()
   {
       width =1;
        height=16;
       centerX=0;
        centerY=16;
        int size =width*height;
        color = new uint8_t[size*3];
        alpha = new uint8_t[size];
        color[0] =0;
        color[1] =0;
        color[2] =0;
        alpha[0] =255;
        color[3] =0;
        color[4] =0;
        color[5] =0;
        alpha[1] =255;
        color[6] =0;
        color[7] =0;
        color[8] =0;
        alpha[2] =255;
        color[9] =0;
        color[10] =0;
        color[11] =0;
        alpha[3] =255;
        color[12] =0;
        color[13] =0;
        color[14] =0;
        alpha[4] =255;
        color[15] =0;
        color[16] =0;
        color[17] =0;
        alpha[5] =255;
        color[18] =0;
        color[19] =0;
        color[20] =0;
        alpha[6] =255;
        color[21] =0;
        color[22] =0;
        color[23] =0;
        alpha[7] =255;
        color[24] =0;
        color[25] =0;
        color[26] =0;
        alpha[8] =255;
        color[27] =0;
        color[28] =0;
        color[29] =0;
        alpha[9] =255;
        color[30] =0;
        color[31] =0;
        color[32] =0;
        alpha[10] =255;
        color[33] =0;
        color[34] =0;
        color[35] =0;
        alpha[11] =255;
        color[36] =0;
        color[37] =0;
        color[38] =0;
        alpha[12] =255;
        color[39] =0;
        color[40] =0;
        color[41] =0;
        alpha[13] =255;
        color[42] =0;
        color[43] =0;
        color[44] =0;
        alpha[14] =255;
        color[45] =0;
        color[46] =0;
        color[47] =0;
        alpha[15] =255;
   };
};
#endif
