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
        color = new uint8_t[size*3];
        alpha = new uint8_t[size];
        color[0] =115;
        color[1] =199;
        color[2] =225;
        alpha[0] =255;
        color[3] =115;
        color[4] =199;
        color[5] =225;
        alpha[1] =255;
        color[6] =115;
        color[7] =199;
        color[8] =225;
        alpha[2] =255;
        color[9] =115;
        color[10] =199;
        color[11] =225;
        alpha[3] =255;
        color[12] =115;
        color[13] =199;
        color[14] =225;
        alpha[4] =255;
        color[15] =115;
        color[16] =199;
        color[17] =225;
        alpha[5] =255;
        color[18] =71;
        color[19] =99;
        color[20] =88;
        alpha[6] =255;
        color[21] =71;
        color[22] =99;
        color[23] =88;
        alpha[7] =255;
        color[24] =71;
        color[25] =99;
        color[26] =88;
        alpha[8] =255;
        color[27] =71;
        color[28] =99;
        color[29] =88;
        alpha[9] =255;
        color[30] =71;
        color[31] =99;
        color[32] =88;
        alpha[10] =255;
        color[33] =71;
        color[34] =99;
        color[35] =88;
        alpha[11] =255;
        color[36] =71;
        color[37] =99;
        color[38] =88;
        alpha[12] =255;
        color[39] =71;
        color[40] =99;
        color[41] =88;
        alpha[13] =255;
        color[42] =71;
        color[43] =99;
        color[44] =88;
        alpha[14] =255;
        color[45] =71;
        color[46] =99;
        color[47] =88;
        alpha[15] =255;
   };
};
#endif
