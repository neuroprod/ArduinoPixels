//
//  PixelMain_Intro.cpp
//  PixelGameLocal
//
//  Created by Kris Temmerman on 24/10/13.
//
//

#include "PixelMain.h"
#include "DataTextInvasion.h"
//#include "DataSpaceShip.h"
#include "DataStarBig.h"
#include "DataStarSmall.h"
#include "DataTextPressToPlay.h"
#include "DataBackSpace.h"


void PixelMain::allocIntro()
{
   
    if(invasionText->currentData==0)
    invasionText->currentData = new DataTextInvasion();
    pressKeyText->currentData = new DataTextPressToPlay();
}
void PixelMain::deallocInto()
{
  
    delete invasionText->currentData;
    invasionText->currentData =0;
    delete pressKeyText->currentData ;
    pressKeyText->currentData =0;
}
void PixelMain::setupIntro()
{
    backgroundIntro = new  Sprite();
    backgroundIntro->drawType =3;
    backgroundIntro->currentData =new DataBackSpace();
    stageIntro.addChild(backgroundIntro);
    
    
    PixelData * starBig =new DataStarBig();
    PixelData * starSmall =new DataStarSmall();
    
    for (int i=0;i<20;i++)
    {
        Star *s =new Star();
        s->dataBig = starBig;
        s->dataSmall = starSmall;
        s->randomize();
        
        stageIntro.addChild(s);
        stars.push_back(s);
        
    }

    
    
    invasionText =new Sprite();
    //invasionText->currentData = new DataTextInvasion();
    stageIntro.addChild(invasionText);
    invasionText->fx = 45;
    invasionText->fy = 12;
    
    spaceShip =new SpaceShip();
    //spaceShip->currentData =new DataSpaceShip();
    spaceShip->setup();
   stageIntro.addChild(spaceShip);
    spaceShip->fx = 45;
    spaceShip->fy = 13;
    
    
    pressKeyText=new Sprite();
  // pressKeyText->currentData = new DataTextPressToPlay();
    stageIntro.addChild(pressKeyText);
    pressKeyText->fx = 45;
    pressKeyText->fy = 12;
    
     resetIntro();
}
void PixelMain::resetIntro()
{
    
    introTime=0;
    invasionText->fx = -45;
     spaceShip->fx = -20;
    spaceShip->reset();
    pressKeyText->visible =false;

}
void PixelMain::updateIntro(float timeElapsed)
{
    
    //t is the current time (or position) of the tween. This can be seconds or frames, steps, seconds, ms, whatever – as long as the unit is the same as is used for the total time 
    //b is the beginning value of the property.
    //c is the change between the beginning and destination value of the property.
    //d is the total time of the tween.
    
    introTime+=timeElapsed;
    int step=0;
    float stepTime  = introTime;
    while(stepTime >1)
    {
        stepTime -=1;
        step++;
    
    }
   
    

    if(step==1)
    {
      
       
        invasionText->fx = backEaseOut(stepTime,-45,90,1);
    
    }else if(step==4)
    {
    
        invasionText->fx = linearEase(stepTime,45,90+45,1);
        spaceShip->fx = linearEase(stepTime,-20,20+45,1);


    }else if(step==5)
    {
        spaceShip->showHead();
        
    }
    else if(step==12)
    {
        spaceShip->fx = linearEase(stepTime,45,20+45,1);
    }
    else if(step>13&& step<16 )
    {
       
        if(stepTime<0.7){
            pressKeyText->visible =true;
        }else
        {
        pressKeyText->visible =false;
        }

        
        
    }
       else if(step==16)resetIntro();
    
    spaceShip->update(timeElapsed);
    
    for (int i=0;i<stars.size();i++)
    {
        stars[i]->update(timeElapsed);
    
    }
    
}