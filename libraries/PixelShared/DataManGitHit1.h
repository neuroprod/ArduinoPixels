//generated pixeldata
#ifndef _DataManGitHit1_h
#define _DataManGitHit1_h
#include "PixelData.h"
class DataManGitHit1:public PixelData{ 
public:
    DataManGitHit1()
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
        indices[4]=255;
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
        indices[17]=255;
        indices[18]=255;
        indices[19]=4;
        indices[20]=4;
        indices[21]=0;
        indices[22]=0;
        indices[23]=0;
        indices[24]=255;
        indices[25]=4;
        indices[26]=8;
        indices[27]=4;
        indices[28]=4;
        indices[29]=255;
        indices[30]=4;
        indices[31]=4;
        indices[32]=4;
        indices[33]=4;
        indices[34]=8;
        indices[35]=255;
        indices[36]=12;
        indices[37]=12;
        indices[38]=12;
        indices[39]=12;
        indices[40]=255;
        indices[41]=255;
        indices[42]=12;
        indices[43]=12;
        indices[44]=12;
        indices[45]=12;
        indices[46]=255;
        indices[47]=255;
        indices[48]=0;
        indices[49]=4;
        indices[50]=0;
        indices[51]=0;
        indices[52]=4;
        indices[53]=255;
        indices[54]=255;
        indices[55]=0;
        indices[56]=255;
        indices[57]=255;
        indices[58]=0;
        indices[59]=255;
        color= new uint8_t[16];
        color[0] =0;
        color[1] =0;
        color[2] =0;
        color[3] =255;
        color[4] =255;
        color[5] =198;
        color[6] =135;
        color[7] =255;
        color[8] =179;
        color[9] =134;
        color[10] =85;
        color[11] =255;
        color[12] =34;
        color[13] =59;
        color[14] =169;
        color[15] =255;
   };
};
#endif
