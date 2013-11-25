//generated pixeldata
#ifndef _DataPaddo_h
#define _DataPaddo_h
#include "PixelData.h"
class DataPaddo:public PixelData{ 
public:
    DataPaddo()
   {
       width =6;
        height=6;
       centerX=3;
        centerY=6;
        int size =width*height;
        indices= new uint8_t[size];
        indices[0]=255;
        indices[1]=255;
        indices[2]=0;
        indices[3]=4;
        indices[4]=255;
        indices[5]=255;
        indices[6]=255;
        indices[7]=8;
        indices[8]=8;
        indices[9]=4;
        indices[10]=12;
        indices[11]=255;
        indices[12]=8;
        indices[13]=8;
        indices[14]=0;
        indices[15]=8;
        indices[16]=4;
        indices[17]=16;
        indices[18]=8;
        indices[19]=0;
        indices[20]=4;
        indices[21]=20;
        indices[22]=24;
        indices[23]=16;
        indices[24]=255;
        indices[25]=255;
        indices[26]=28;
        indices[27]=32;
        indices[28]=255;
        indices[29]=255;
        indices[30]=255;
        indices[31]=255;
        indices[32]=36;
        indices[33]=40;
        indices[34]=255;
        indices[35]=255;
        color= new uint8_t[44];
        color[0] =214;
        color[1] =212;
        color[2] =212;
        color[3] =255;
        color[4] =192;
        color[5] =0;
        color[6] =0;
        color[7] =255;
        color[8] =214;
        color[9] =0;
        color[10] =0;
        color[11] =255;
        color[12] =214;
        color[13] =214;
        color[14] =214;
        color[15] =122;
        color[16] =155;
        color[17] =0;
        color[18] =0;
        color[19] =255;
        color[20] =173;
        color[21] =0;
        color[22] =0;
        color[23] =255;
        color[24] =173;
        color[25] =171;
        color[26] =171;
        color[27] =255;
        color[28] =203;
        color[29] =144;
        color[30] =79;
        color[31] =255;
        color[32] =147;
        color[33] =104;
        color[34] =56;
        color[35] =255;
        color[36] =182;
        color[37] =129;
        color[38] =70;
        color[39] =255;
        color[40] =164;
        color[41] =116;
        color[42] =63;
        color[43] =255;
   };
};
#endif
