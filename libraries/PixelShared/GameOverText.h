//
//  GameOverText.h
//  PixelGameLocal
//
//  Created by Kris Temmerman on 05/11/13.
//
//

#ifndef PixelGameLocal_GameOverText_h
#define PixelGameLocal_GameOverText_h
#include "Sprite.h"
#include "DataTextGameOver.h"
#include "DataTextGirlWins.h"
#include "DataTextBoyWins.h"
#include "DataTextYouWin.h"
#include "DataBackSpace.h"
class GameOverText:public Sprite
{

public:
    GameOverText()
    {
       // currentData=new DataBackSpace();
        drawType =3;
        textSprite =new Sprite();
        textSprite->currentData =0;
        textSprite->fx =45;
        addChild(textSprite);
        
        visible =false;
    }
    void show(int type =0)
    {
        visible =true;
        if( textSprite->currentData==0){
            if(type==0)textSprite->currentData = new DataTextGameOver();
            if(type==2)
            {
                textSprite->currentData = new DataTextGirlWins();
                textSprite->currentData-> centerY=12;
            }
            if(type==1)
            {
                textSprite->currentData= new DataTextBoyWins();
                textSprite->currentData-> centerY=12;
            }
            if(type==3)
            {
                textSprite->currentData = new DataTextYouWin();
                textSprite->currentData-> centerY=13;
            }
            
           
        }
       
       // currentData->color[3] =0;
         textSprite->fy =-4;
    }
    void update(float switchTime)
    {
       
        if( switchTime>8&& switchTime<9)
        {
            // currentData->color[3] =(int)expoEaseIn (1-(switchTime-8),0,255,1);;
            textSprite->fy = backEaseOut(1-(switchTime-8),-4,13+4,1);
        }else  if( switchTime<8 && switchTime>1 )
        {
            
            textSprite->fy = 13;
        }else if(switchTime<1 )
        {
        
         textSprite->fy = expoEaseIn (1-switchTime,13,16,1);
        }
        
    
    }
    void hide()
    {
        delete currentData;
        currentData =0;
        delete textSprite->currentData;
        textSprite->currentData =0;
        
        visible =false;
    
    }
    Sprite * textSprite;
    
    float backEaseOut(float t,float b , float c, float d) {
        float s = 1.70158f;
        return c*((t=t/d-1)*t*((s+1)*t + s) + 1) + b;
    }
    
    
    float expoEaseIn (float t,float b , float c, float d) {
        return (t==0) ? b : c * pow(2, 10 * (t/d - 1)) + b;
    }
};


#endif
