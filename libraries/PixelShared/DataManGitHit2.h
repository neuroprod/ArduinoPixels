//generated pixeldata
#ifndef _DataManGitHit2_h
#define _DataManGitHit2_h
#include "PixelData.h"
class DataManGitHit2:public PixelData{ 
public:
    DataManGitHit2()
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
        indices[28]=8;
        indices[29]=12;
        indices[30]=4;
        indices[31]=0;
        indices[32]=255;
        indices[33]=4;
        indices[34]=8;
        indices[35]=4;
        indices[36]=4;
        indices[37]=12;
        indices[38]=0;
        indices[39]=255;
        indices[40]=255;
        indices[41]=4;
        indices[42]=4;
        indices[43]=4;
        indices[44]=4;
        indices[45]=12;
        indices[46]=0;
        indices[47]=255;
        indices[48]=255;
        indices[49]=255;
        indices[50]=255;
        indices[51]=12;
        indices[52]=12;
        indices[53]=12;
        indices[54]=0;
        indices[55]=0;
        indices[56]=255;
        indices[57]=255;
        indices[58]=4;
        indices[59]=255;
        indices[60]=255;
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
