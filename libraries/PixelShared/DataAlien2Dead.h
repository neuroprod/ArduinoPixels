//generated pixeldata
#ifndef _DataAlien2Dead_h
#define _DataAlien2Dead_h
#include "PixelData.h"
class DataAlien2Dead:public PixelData{ 
public:
    DataAlien2Dead()
   {
       width =8;
        height=7;
       centerX=4;
        centerY=7;
        int size =width*height;
        indices= new uint8_t[size];
        indices[0]=255;
        indices[1]=0;
        indices[2]=0;
        indices[3]=0;
        indices[4]=0;
        indices[5]=0;
        indices[6]=0;
        indices[7]=255;
        indices[8]=255;
        indices[9]=0;
        indices[10]=4;
        indices[11]=4;
        indices[12]=4;
        indices[13]=4;
        indices[14]=0;
        indices[15]=255;
        indices[16]=255;
        indices[17]=0;
        indices[18]=4;
        indices[19]=8;
        indices[20]=4;
        indices[21]=8;
        indices[22]=0;
        indices[23]=255;
        indices[24]=255;
        indices[25]=0;
        indices[26]=4;
        indices[27]=4;
        indices[28]=4;
        indices[29]=4;
        indices[30]=0;
        indices[31]=255;
        indices[32]=255;
        indices[33]=0;
        indices[34]=4;
        indices[35]=4;
        indices[36]=4;
        indices[37]=4;
        indices[38]=0;
        indices[39]=255;
        indices[40]=0;
        indices[41]=255;
        indices[42]=0;
        indices[43]=255;
        indices[44]=0;
        indices[45]=255;
        indices[46]=0;
        indices[47]=255;
        indices[48]=255;
        indices[49]=0;
        indices[50]=255;
        indices[51]=0;
        indices[52]=255;
        indices[53]=0;
        indices[54]=255;
        indices[55]=0;
        color= new uint8_t[12];
        color[0] =208;
        color[1] =235;
        color[2] =199;
        color[3] =230;
        color[4] =255;
        color[5] =255;
        color[6] =255;
        color[7] =230;
        color[8] =150;
        color[9] =168;
        color[10] =181;
        color[11] =230;
   };
};
#endif
