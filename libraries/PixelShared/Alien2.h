//
//  Alien2.h
//  PixelGameLocal
//
//  Created by Kris Temmerman on 04/11/13.
//
//

#ifndef PixelGameLocal_Alien2_h
#define PixelGameLocal_Alien2_h
#include "Alien.h"
#include "Sprite.h"
class Alien2 : public Alien
{
    
    
public:
    Alien2(){};
    void setup(){
        
        heroType=3;
        fxStart = fxReal ;
          currentTime =0+(float)rand()/RAND_MAX;
        posOld =0;
         life =1;
        fxStart =fxReal;
        feet =new Sprite();
        addChild(feet);
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
            hitSpeed*=0.8;
        }else
        {

            
            
            
            currentTime +=timeElapsed;
            
            float dir =sin(currentTime);
            float dirFeet=0;
            float dirFeetP =0;
            if(drawType==0)
            {
                 dirFeet=sin(currentTime*5);
                 dirFeetP=cos(currentTime*5);
            
            }else
            {
                dirFeet=sin(-currentTime*5);
                dirFeetP=cos(-currentTime*5);
            
            }
            
            feet->fx = dirFeet*3;
            feet->fy =0;
            if(dirFeetP>0)feet->fy =-1;
            fxReal = fxStart+  dir*10;
        
         //  fxReal+=hitSpeed* timeElapsed;
            drawType =0;
            if ( posOld > fxReal) drawType =1;
        posOld  =  fxReal;
            hitRect.x  =-4;
            hitRect.y =-7;
            
            hitRect.width  =6;
            hitRect.height =7;
        }

    }
    float fxStart;
    float  currentTime;
    float posOld;
    Sprite *feet;
};


#endif


