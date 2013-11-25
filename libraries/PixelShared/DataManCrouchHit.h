//generated pixeldata
#ifndef _DataManCrouchHit_h
#define _DataManCrouchHit_h
#include "PixelData.h"
class DataManCrouchHit:public PixelData{ 
public:
    DataManCrouchHit()
   {
       width =8;
        height=8;
       centerX=4;
        centerY=8;
        int size =width*height;
        indices= new uint8_t[size];
        indices[0]=255;
        indices[1]=0;
        indices[2]=0;
        indices[3]=0;
        indices[4]=0;
        indices[5]=255;
        indices[6]=255;
        indices[7]=255;
        indices[8]=255;
        indices[9]=0;
        indices[10]=0;
        indices[11]=0;
        indices[12]=0;
        indices[13]=255;
        indices[14]=255;
        indices[15]=255;
        indices[16]=0;
        indices[17]=0;
        indices[18]=0;
        indices[19]=0;
        indices[20]=0;
        indices[21]=0;
        indices[22]=255;
        indices[23]=255;
        indices[24]=255;
        indices[25]=4;
        indices[26]=4;
        indices[27]=4;
        indices[28]=4;
        indices[29]=255;
        indices[30]=255;
        indices[31]=255;
        indices[32]=255;
        indices[33]=4;
        indices[34]=0;
        indices[35]=4;
        indices[36]=0;
        indices[37]=255;
        indices[38]=255;
        indices[39]=255;
        indices[40]=255;
        indices[41]=4;
        indices[42]=4;
        indices[43]=4;
        indices[44]=4;
        indices[45]=8;
        indices[46]=8;
        indices[47]=4;
        indices[48]=255;
        indices[49]=8;
        indices[50]=8;
        indices[51]=8;
        indices[52]=8;
        indices[53]=255;
        indices[54]=255;
        indices[55]=255;
        indices[56]=0;
        indices[57]=4;
        indices[58]=255;
        indices[59]=12;
        indices[60]=0;
        indices[61]=255;
        indices[62]=255;
        indices[63]=255;
        color= new uint8_t[16];
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
        color[12] =0;
        color[13] =0;
        color[14] =0;
        color[15] =2;
   };
};
#endif
