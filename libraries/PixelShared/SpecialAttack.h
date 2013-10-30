//
//  SpecialAttack.h
//  PixelGameLocal
//
//  Created by Kris Temmerman on 22/10/13.
//
//

#ifndef PixelGameLocal_SpecialAttack_h
#define PixelGameLocal_SpecialAttack_h

#include "PixelGameInclude.h"
#include "Sprite.h"

class SpecialAttack:public Sprite
{
public:
    SpecialAttack(){};
    
    void setup()
    {
        extra =new Sprite();
        extra->currentData =stroke;
        extra->fx =4;
         extra->fy =-1;
        addChild(extra);
        isUsed =false;
    }
    
    void start(int dir, int type)
    {
        heroType =type;
        currentData =ball;
        visible=true;
         extra->visible=true;
        speed =40;
         extra->fx =-4;
        if(dir==1){
             extra->fx =4;
            speed =-speed;
        }
        lastTime =2;
        isUsed =true;
       // speed = rand()%4 +3;
    }
    void hit()
    {
        lastTime=0;
        
        isUsed =false;
        visible=false;
        extra->visible=false;
    }
    void update(float timeElapsed)
    {
        if(visible==false)return;
        fx+=speed*timeElapsed;
        lastTime -=timeElapsed;
        if(x%4==0 || x%4==1)
        {
        extra->drawType=1;
        }else
        {
            extra->drawType=0;
        }
        
        if(lastTime<0)
        {
            isUsed =false;
            visible=false;
              extra->visible=false;
        }
    }
    
    
    float lastTime;
    float speed;
    bool isUsed;
    PixelData *ball;
    PixelData *stroke;
    int heroType;
    Sprite *extra;
   
};


#endif
