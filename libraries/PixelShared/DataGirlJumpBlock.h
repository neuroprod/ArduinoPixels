//generated pixeldata
#ifndef _DataGirlJumpBlock_h
#define _DataGirlJumpBlock_h
#include "PixelData.h"
class DataGirlJumpBlock:public PixelData{ 
public:
    DataGirlJumpBlock()
   {
       width =7;
        height=8;
       centerX=3;
        centerY=8;
        int size =width*height;
        indices= new uint8_t[size];
        indices[0]=255;
        indices[1]=255;
        indices[2]=0;
        indices[3]=0;
        indices[4]=0;
        indices[5]=0;
        indices[6]=255;
        indices[7]=255;
        indices[8]=0;
        indices[9]=4;
        indices[10]=8;
        indices[11]=8;
        indices[12]=8;
        indices[13]=255;
        indices[14]=255;
        indices[15]=0;
        indices[16]=8;
        indices[17]=12;
        indices[18]=8;
        indices[19]=12;
        indices[20]=255;
        indices[21]=0;
        indices[22]=0;
        indices[23]=8;
        indices[24]=8;
        indices[25]=8;
        indices[26]=8;
        indices[27]=0;
        indices[28]=255;
        indices[29]=255;
        indices[30]=16;
        indices[31]=16;
        indices[32]=16;
        indices[33]=16;
        indices[34]=8;
        indices[35]=255;
        indices[36]=255;
        indices[37]=16;
        indices[38]=16;
        indices[39]=16;
        indices[40]=16;
        indices[41]=8;
        indices[42]=255;
        indices[43]=16;
        indices[44]=16;
        indices[45]=16;
        indices[46]=16;
        indices[47]=16;
        indices[48]=255;
        indices[49]=255;
        indices[50]=20;
        indices[51]=255;
        indices[52]=255;
        indices[53]=255;
        indices[54]=255;
        indices[55]=20;
        color= new uint8_t[24];
        color[0] =255;
        color[1] =234;
        color[2] =0;
        color[3] =255;
        color[4] =255;
        color[5] =201;
        color[6] =135;
        color[7] =255;
        color[8] =255;
        color[9] =198;
        color[10] =135;
        color[11] =255;
        color[12] =0;
        color[13] =0;
        color[14] =0;
        color[15] =255;
        color[16] =237;
        color[17] =28;
        color[18] =36;
        color[19] =255;
        color[20] =39;
        color[21] =15;
        color[22] =2;
        color[23] =255;
   };
};
#endif
