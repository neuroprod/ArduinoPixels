//generated pixeldata
#ifndef _DataManWalk2_h
#define _DataManWalk2_h
#include "PixelData.h"
class DataManWalk2:public PixelData{ 
public:
    DataManWalk2()
   {
       width =6;
        height=10;
       centerX=3;
        centerY=10;
        int size =width*height;
        indices= new uint8_t[size];
        indices[0]=255;
        indices[1]=255;
        indices[2]=255;
        indices[3]=255;
        indices[4]=255;
        indices[5]=255;
        indices[6]=255;
        indices[7]=0;
        indices[8]=0;
        indices[9]=0;
        indices[10]=0;
        indices[11]=255;
        indices[12]=255;
        indices[13]=0;
        indices[14]=0;
        indices[15]=0;
        indices[16]=0;
        indices[17]=255;
        indices[18]=0;
        indices[19]=0;
        indices[20]=0;
        indices[21]=0;
        indices[22]=0;
        indices[23]=0;
        indices[24]=255;
        indices[25]=4;
        indices[26]=4;
        indices[27]=4;
        indices[28]=4;
        indices[29]=255;
        indices[30]=255;
        indices[31]=4;
        indices[32]=0;
        indices[33]=4;
        indices[34]=0;
        indices[35]=255;
        indices[36]=255;
        indices[37]=4;
        indices[38]=4;
        indices[39]=4;
        indices[40]=4;
        indices[41]=255;
        indices[42]=255;
        indices[43]=8;
        indices[44]=8;
        indices[45]=8;
        indices[46]=8;
        indices[47]=255;
        indices[48]=255;
        indices[49]=0;
        indices[50]=4;
        indices[51]=0;
        indices[52]=0;
        indices[53]=4;
        indices[54]=255;
        indices[55]=0;
        indices[56]=255;
        indices[57]=255;
        indices[58]=0;
        indices[59]=255;
        color= new uint8_t[12];
        color[0] =0;
        color[1] =0;
        color[2] =0;
        color[3] =255;
        color[4] =255;
        color[5] =198;
        color[6] =135;
        color[7] =255;
        color[8] =34;
        color[9] =59;
        color[10] =169;
        color[11] =255;
   };
};
#endif
