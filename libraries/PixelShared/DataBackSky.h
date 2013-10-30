//generated pixeldata
#ifndef _DataBackSky_h
#define _DataBackSky_h
#include "PixelData.h"
class DataBackSky:public PixelData{ 
public:
    DataBackSky()
   {
       width =1;
        height=16;
       centerX=0;
        centerY=16;
        int size =width*height;
        color = new uint8_t[size*3];
        alpha = new uint8_t[size];
        color[0] =0;
        color[1] =0;
        color[2] =0;
        alpha[0] =255;
        color[3] =5;
        color[4] =0;
        color[5] =5;
        alpha[1] =255;
        color[6] =11;
        color[7] =0;
        color[8] =12;
        alpha[2] =255;
        color[9] =19;
        color[10] =0;
        color[11] =20;
        alpha[3] =255;
        color[12] =28;
        color[13] =0;
        color[14] =29;
        alpha[4] =255;
        color[15] =36;
        color[16] =0;
        color[17] =40;
        alpha[5] =255;
        color[18] =45;
        color[19] =0;
        color[20] =51;
        alpha[6] =255;
        color[21] =53;
        color[22] =1;
        color[23] =64;
        alpha[7] =255;
        color[24] =61;
        color[25] =12;
        color[26] =78;
        alpha[8] =255;
        color[27] =68;
        color[28] =26;
        color[29] =92;
        alpha[9] =255;
        color[30] =73;
        color[31] =45;
        color[32] =107;
        alpha[10] =255;
        color[33] =80;
        color[34] =67;
        color[35] =125;
        alpha[11] =255;
        color[36] =87;
        color[37] =91;
        color[38] =144;
        alpha[12] =255;
        color[39] =95;
        color[40] =120;
        color[41] =166;
        alpha[13] =255;
        color[42] =103;
        color[43] =153;
        color[44] =191;
        alpha[14] =255;
        color[45] =110;
        color[46] =180;
        color[47] =210;
        alpha[15] =255;
   };
};
#endif
