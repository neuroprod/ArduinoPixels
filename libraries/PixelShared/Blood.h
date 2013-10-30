//
//  Blood.h
//  PixelGameLocal
//
//  Created by Kris Temmerman on 17/10/13.
//
//

#ifndef PixelGameLocal_Blood_h
#define PixelGameLocal_Blood_h

#include "Sprite.h"
#include "PixelData.h"

class Blood:public Sprite
{
public:
   Blood(){};
    void setup()
    {
        isUsed =false;
        currentTime =-1;
    }
    void show()
    {
        visible =true;
        isUsed =true;
        currentTime =0.35;
        currentData = frame1;
    }
    
    void update(float timeElapsed)
    {
        if(visible==false)return;
        
        currentTime -=timeElapsed;
        if(currentTime>0.1 &&currentTime<0.2 )
        {
            currentData = frame2;
        }
        else if(currentTime<0.1 )
        {
            currentData = frame3;
        }
        if(currentTime<0.0 ){
            isUsed =false;
            visible =false;
        }
        
    }
    
    float currentTime;
   bool isUsed;
    PixelData *frame1;
     PixelData *frame2;
     PixelData *frame3;
};




#endif
