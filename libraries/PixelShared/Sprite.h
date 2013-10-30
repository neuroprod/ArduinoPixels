//
//  Sprite.h
//  pixelgame
//
//  Created by Kris Temmerman on 09/09/13.
//
//

#ifndef pixelgame_Sprite_h
#define pixelgame_Sprite_h
#include "pixelGameInclude.h"
#include "PixelData.h"
#include "Vector.h"
#include "npRect.h"
class Sprite
{
public:
    Sprite(){x =0;y=0;fx =0;fy=0;drawType=0;depth =1;visible =true; parent =0;currentData=0;hasHitRect =false;};
    virtual void addChild(Sprite *child)
    {
        child->parent =this;
        children.push_back(child);
        
    }
    
    
    Vector<Sprite *> children;
    Sprite * parent;
    
    virtual void int_update()
    {
       
      
        if(parent==0)
        {
            drawfY = fy;
            drawfX= fx;
            x = drawfX;
            y = drawfY;
        
        }else
        {
            drawfY = fy + parent->drawfY;
            drawfX= fx + parent->drawfX;
            x = drawfX;
            y = drawfY;
            
        }
        for(int i=0;i<children.size();i++)
        {
            children[i]->int_update();
        }
    
    }
    
    
    int x;
    int y;
    float fx;
    float fy;
    float drawfY;
    float drawfX;
    bool visible;
    float depth;
    bool hasHitRect;
    npRect hitRect;
    PixelData * currentData;
    int drawType;
    
    
  /* void updateLevelPos(float levelx)
    {
        x = fx - (levelx*depth);
        y = fy;
    
    }*/
    bool hitTestRect(Sprite *s)
    {
        float x_1 =fx+hitRect.x ;
        float x_2 =s->fx +s->hitRect.x ;
        float y_1 =fy +hitRect.y ;
        float y_2 =s->fy +s->hitRect.y ;
        float width_1 =hitRect.width;
        float width_2 = s->hitRect.width;
        float height_1 =hitRect.height;
        float height_2 =s->hitRect.height;
        
       bool hit = !(x_1 > x_2+width_2 || x_1+width_1 < x_2 || y_1 > y_2+height_2 || y_1+height_1 < y_2);
        
        hitRect.isHit =hit;
        s->hitRect.isHit =hit;
        
        
        return hit;
    
    
    }
    bool hitTest(int hitPosX,int hitPosY)
    {
        float x_l =fx+hitRect.x ;
        float y_t =fy+hitRect.y ;
        float x_r =x_l +hitRect.width ;
        float y_b =y_t+hitRect.height ;
        if(hitPosX>= x_l && hitPosX<= x_r && hitPosY>= y_t && hitPosY<= y_b)return true;
        
       /*
        int wLeft;
        if(drawType==0){
            wLeft = x-currentData->centerX;
        }
        else if (drawType==1){
            wLeft = x-(currentData->width-currentData->centerX);
        }
        int wRight = wLeft +currentData->width;
        
        
        if( hitPosX>=wLeft && hitPosX<=wRight)
        {
            
            int hTop =y-currentData->centerY;
            int hBottom  =hTop +currentData->height;
            if( hitPosY>=hTop && hitPosY<=hBottom)
            {
                return true;
            }
            
        
        }
    */
        return false;
    }
};

#endif
