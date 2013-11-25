//
//  Alien1.h
//  PixelGameLocal
//
//  Created by Kris Temmerman on 02/11/13.
//
//

#ifndef PixelGameLocal_Alien1_h
#define PixelGameLocal_Alien1_h
#include "Alien.h"

class Alien1 : public Alien
{


public:
    Alien1(){};
    void setup(){
      
        heroType=2;
        headSprite = new Sprite();
        feetSprite = new Sprite();
          addChild(feetSprite);
        addChild(headSprite);
        life =1;
        headSprite->fy =-3;
        currentTime =0+(float)rand()/RAND_MAX;
        shootTime  =0;
        fxStart =fxReal;
        
    }
    virtual void reset()
    {
        fxReal =fxStart;
        isDead =false;
          life =1;
        fy =15;
        saveTime =-1;
    }
    void update(float timeElapsed)
    {
        if(intHidden)return;
        if(isDead)
        {
            fy-=1;
            if(fy<4)intHidden =true;
            fxReal+=hitSpeed* timeElapsed;
            hitSpeed*=0.4;
        }else
        {
            shootTime -=timeElapsed;
        
            if((int)(currentTime*4)%4==0 && shootTime<0 ) {
                startShoot =true;
                shootTime =1;
            }

        
      
            currentTime +=timeElapsed;
        
            headSprite->fy  =-4+  sin(currentTime*4)*1.5;
            fy  =14 +  sin(currentTime*4-1)*2;
            hitRect.x  =-3;
            hitRect.y =-4+headSprite->fy;
        
            hitRect.width  =5;
            hitRect.height =3-headSprite->fy;
        }
    }

    Sprite * headSprite ;
    Sprite *feetSprite;
    float shootTime ;
    float currentTime;
};


#endif
