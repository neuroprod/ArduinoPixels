//generated pixeldata
#ifndef _DataBlood2_h
#define _DataBlood2_h
#include "PixelData.h"
class DataBlood2:public PixelData{ 
public:
    DataBlood2()
   {
       width =3;
        height=3;
       centerX=1;
        centerY=3;
        int size =width*height;
        color = new uint8_t[size*3];
        alpha = new uint8_t[size];
        color[0] =128;
        color[1] =0;
        color[2] =0;
        alpha[0] =255;
        color[3] =128;
        color[4] =0;
        color[5] =0;
        alpha[1] =0;
        color[6] =128;
        color[7] =0;
        color[8] =0;
        alpha[2] =255;
        color[9] =128;
        color[10] =0;
        color[11] =0;
        alpha[3] =0;
        color[12] =128;
        color[13] =0;
        color[14] =0;
        alpha[4] =255;
        color[15] =128;
        color[16] =0;
        color[17] =0;
        alpha[5] =0;
        color[18] =128;
        color[19] =0;
        color[20] =0;
        alpha[6] =255;
        color[21] =128;
        color[22] =0;
        color[23] =0;
        alpha[7] =0;
        color[24] =128;
        color[25] =0;
        color[26] =0;
        alpha[8] =255;
   };
};
#endif
