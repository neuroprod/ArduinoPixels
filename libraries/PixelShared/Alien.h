//
//  Alien.h
//  PixelGameLocal
//
//  Created by Kris Temmerman on 28/10/13.
//
//

#ifndef PixelGameLocal_Alien_h
#define PixelGameLocal_Alien_h
#include "Live.h"

class Alien :public Live
{
public:
    Alien(){hasHitRect =true; isDead =false;};
      virtual void setDead()
    {
        
        isDead =true;
    };
    virtual void reset()
    {
        
        
    }
   virtual void update(float timeElapsed)
    {
    
    
    }
    void setLevelPos(float levelfx)
    {
        fx =  fxReal-levelfx;
        
    }
    float fxStart;
    bool isDead;
};


#endif
