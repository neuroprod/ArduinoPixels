//generated pixeldata
#ifndef _DataBoyDeath_h
#define _DataBoyDeath_h
#include "PixelData.h"
class DataBoyDeath:public PixelData{ 
public:
    DataBoyDeath()
   {
       width =6;
        height=10;
       centerX=3;
        centerY=10;
        int size =width*height;
        indices= new uint8_t[size];
        indices[0]=255;
        indices[1]=0;
        indices[2]=0;
        indices[3]=0;
        indices[4]=0;
        indices[5]=255;
        indices[6]=255;
        indices[7]=0;
        indices[8]=0;
        indices[9]=0;
        indices[10]=0;
        indices[11]=255;
        indices[12]=0;
        indices[13]=0;
        indices[14]=0;
        indices[15]=0;
        indices[16]=0;
        indices[17]=0;
        indices[18]=255;
        indices[19]=4;
        indices[20]=4;
        indices[21]=4;
        indices[22]=4;
        indices[23]=255;
        indices[24]=255;
        indices[25]=4;
        indices[26]=0;
        indices[27]=4;
        indices[28]=0;
        indices[29]=255;
        indices[30]=255;
        indices[31]=4;
        indices[32]=4;
        indices[33]=4;
        indices[34]=4;
        indices[35]=255;
        indices[36]=4;
        indices[37]=8;
        indices[38]=8;
        indices[39]=8;
        indices[40]=8;
        indices[41]=4;
        indices[42]=255;
        indices[43]=8;
        indices[44]=8;
        indices[45]=8;
        indices[46]=8;
        indices[47]=255;
        indices[48]=255;
        indices[49]=0;
        indices[50]=0;
        indices[51]=0;
        indices[52]=0;
        indices[53]=255;
        indices[54]=255;
        indices[55]=0;
        indices[56]=255;
        indices[57]=255;
        indices[58]=0;
        indices[59]=255;
        color= new uint8_t[12];
        color[0] =150;
        color[1] =168;
        color[2] =181;
        color[3] =230;
        color[4] =255;
        color[5] =235;
        color[6] =220;
        color[7] =230;
        color[8] =164;
        color[9] =188;
        color[10] =230;
        color[11] =230;
   };
};
#endif
