//
//  Cloud.h
//  PixelGameLocal
//
//  Created by Kris Temmerman on 10/10/13.
//
//

#ifndef PixelGameLocal_Cloud_h
#define PixelGameLocal_Cloud_h
#include "PixelGameInclude.h"
#include "Sprite.h"

class Cloud:public Sprite
{
public:
    Cloud(){};
    void setup()
    {
        
        speed = rand()%4 +3;
    }
   
    void update(float timeElapsed)
    {
        fx -=speed*timeElapsed;
        if(fx<-20)fx =90+20;
        
    }
 
    float speed;
   
};


#endif




