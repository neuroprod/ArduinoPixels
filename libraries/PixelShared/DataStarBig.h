//generated pixeldata
#ifndef _DataStarBig_h
#define _DataStarBig_h
#include "PixelData.h"
class DataStarBig:public PixelData{ 
public:
    DataStarBig()
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
        color[3] =43;
        color[4] =51;
        color[5] =50;
        alpha[1] =255;
        color[6] =216;
        color[7] =255;
        color[8] =252;
        alpha[2] =0;
        color[9] =43;
        color[10] =51;
        color[11] =50;
        alpha[3] =255;
        color[12] =216;
        color[13] =255;
        color[14] =252;
        alpha[4] =0;
        color[15] =43;
        color[16] =51;
        color[17] =50;
        alpha[5] =255;
        color[18] =216;
        color[19] =255;
        color[20] =252;
        alpha[6] =0;
        color[21] =43;
        color[22] =51;
        color[23] =50;
        alpha[7] =255;
        color[24] =216;
        color[25] =255;
        color[26] =252;
        alpha[8] =0;
   };
};
#endif
