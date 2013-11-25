//
//  WaterSplash.h
//  PixelGameLocal
//
//  Created by Kris Temmerman on 18/11/13.
//
//

#ifndef PixelGameLocal_WaterSplash_h
#define PixelGameLocal_WaterSplash_h

#include "Sprite.h"
#include "PixelData.h"
class WaterSplash :public Sprite
{
    
    
public:
    WaterSplash()
    {
        
        visible =false;
    }
    void show(float _fxReal)
    {
        fy = 16;
        currentData =frame1;
        visible  =true;
        time =0;
        fxReal =_fxReal;
    }
    void update (float timeEllapsed, float levelfx)
    {
        if(!visible)return;
        fx =  fxReal-levelfx;
        time+=timeEllapsed;
        if(time>0.3)currentData =frame2;
        
        if(time>0.6)visible=false;
    
    }
    float time;
    PixelData * frame1;
        PixelData * frame2;
};


#endif