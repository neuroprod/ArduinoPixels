//
//  Star.h
//  PixelGameLocal
//
//  Created by Kris Temmerman on 25/10/13.
//
//

#ifndef PixelGameLocal_Star_h
#define PixelGameLocal_Star_h
#include "Sprite.h"
class Star: public Sprite
{

public:
    Star(){}
    void randomize()
    {
        if (rand()%100==0)
        {
            currentData = dataBig;
        }else
        {
            currentData = dataSmall;
        
        }
        fx =rand()%20+35;
        fy = rand()%16;
        
        sx = (fx-45)/2;
        sy =(fy-8)/5;
        
        
        maxTime =3+(float) (rand()%100)/10;
    
    };
    void update(float timeElapsed)
    {
        
        sx = (fx-45)/2;
        sy =(fy-8)/5;
        
        
        fx+=sx*timeElapsed;
        fy+=sy*timeElapsed;
        maxTime-=timeElapsed;
        if(maxTime<0)randomize();
    
    
    };
    float sx;
    float sy;
    float maxTime;
    PixelData * dataSmall;
    PixelData * dataBig;
};

#endif
