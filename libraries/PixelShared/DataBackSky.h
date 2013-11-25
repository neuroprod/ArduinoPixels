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
        indices= new uint8_t[size];
        indices[0]=0;
        indices[1]=4;
        indices[2]=8;
        indices[3]=12;
        indices[4]=16;
        indices[5]=20;
        indices[6]=24;
        indices[7]=28;
        indices[8]=32;
        indices[9]=36;
        indices[10]=40;
        indices[11]=44;
        indices[12]=48;
        indices[13]=52;
        indices[14]=56;
        indices[15]=60;
        color= new uint8_t[64];
        color[0] =0;
        color[1] =0;
        color[2] =0;
        color[3] =255;
        color[4] =6;
        color[5] =0;
        color[6] =6;
        color[7] =255;
        color[8] =14;
        color[9] =0;
        color[10] =13;
        color[11] =255;
        color[12] =23;
        color[13] =0;
        color[14] =21;
        color[15] =255;
        color[16] =33;
        color[17] =0;
        color[18] =30;
        color[19] =255;
        color[20] =43;
        color[21] =0;
        color[22] =41;
        color[23] =255;
        color[24] =54;
        color[25] =0;
        color[26] =52;
        color[27] =255;
        color[28] =63;
        color[29] =1;
        color[30] =65;
        color[31] =255;
        color[32] =72;
        color[33] =12;
        color[34] =79;
        color[35] =255;
        color[36] =80;
        color[37] =26;
        color[38] =93;
        color[39] =255;
        color[40] =87;
        color[41] =45;
        color[42] =109;
        color[43] =255;
        color[44] =95;
        color[45] =67;
        color[46] =127;
        color[47] =255;
        color[48] =103;
        color[49] =91;
        color[50] =146;
        color[51] =255;
        color[52] =112;
        color[53] =120;
        color[54] =168;
        color[55] =255;
        color[56] =122;
        color[57] =153;
        color[58] =193;
        color[59] =255;
        color[60] =130;
        color[61] =180;
        color[62] =213;
        color[63] =255;
   };
};
#endif
