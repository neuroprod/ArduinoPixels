//
//  DecorSprite.h
//  PixelGameLocal
//
//  Created by Kris Temmerman on 28/10/13.
//
//

#ifndef PixelGameLocal_DecorSprite_h
#define PixelGameLocal_DecorSprite_h
#include "Sprite.h"
class DecorSprite:public Sprite
{
public:
    DecorSprite(){ fxReal =0;depth=1;hasHitRect=false;}
    
    void setLevelPos(float stagefx)
    {
        fx = fxReal -stagefx*depth;
    
    
    }
  
    float depth;

};

#endif
