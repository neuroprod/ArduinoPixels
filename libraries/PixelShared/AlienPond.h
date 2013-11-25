//
//  AlienPond.h
//  PixelGameLocal
//
//  Created by Kris Temmerman on 04/11/13.
//
//

#ifndef PixelGameLocal_AlienPond_h
#define PixelGameLocal_AlienPond_h
#include "Alien.h"

class AlienPond : public Alien
{
    
    
public:
    AlienPond(){};
    void setup(){
        
        heroType=5;
        duckBigSprite = new Sprite();
        addChild(  duckBigSprite);
        duckSmallSprite = new Sprite();
        addChild(  duckSmallSprite);
      
        currentTime =0;
       
        hitRect.x  =-4;
        hitRect.y =-3;
        
        hitRect.width  =7;
        hitRect.height =2;
        
    }
    void update(float timeElapsed)
    {
        currentTime+=timeElapsed;
        float dir =sin(currentTime);
        float dir2 =sin(currentTime-1);
        
        float bigOld = duckBigSprite->fx;
        float smallOld =  duckSmallSprite->fx;
        duckBigSprite->fx  =  dir*5 +1;
        duckSmallSprite->fx =  dir2*5 +1;
        duckBigSprite->drawType =0;
    duckBigSprite->fy = -2;
        duckSmallSprite->drawType =0;
        duckSmallSprite->fy = -2;
        
        
        
        if(bigOld<duckBigSprite->fx)
        {
            
          
            duckBigSprite->fy = -1;
           duckBigSprite->drawType =1;
        }
        
        
        if(smallOld< duckSmallSprite->fx)
        {
            duckSmallSprite->fy = -1;
           duckSmallSprite->drawType =1;
        }

        
    }
    float currentTime ;
    Sprite * duckSmallSprite ;
    Sprite *duckBigSprite;
    
    
};



#endif
