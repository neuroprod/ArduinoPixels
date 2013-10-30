//
//  Hero.cpp
//  PixelGame
//
//  Created by Kris Temmerman on 05/10/13.
//  Copyright (c) 2013 Kris Temmerman. All rights reserved.
//

#include "Hero.h"









void Hero::setup(int type)
{
    heroType =type;
    
    hitRect.setType(heroType, 0, drawType);

   
    speed=0;
    airFall =120;
    jumpSpeed =-45;
    isWalking =false;
     groundY =15;
    attackTime =0;
    attackType =NO_ATTACK;
   currentData =  standData ;
    hitX=0;
     hitY=0;
    life=7;
    saveTime =0;
    startShoot =false;
    
    
    hasHitRect =true;
    
       
}
void Hero::setDead()
{
    isDead =true;
    currentData  =deathData;


}
void Hero::setKey(int key)
{
   //no hit
    if(isDead)return;
    lastKeys.push_back(key);
    if(lastKeys.size()>5)lastKeys.eraseFirst();
  
    
    if( attackTime<=0)
    {
        if(key==13 && lastKeys[0]==5 &&lastKeys[1]==0 && lastKeys[2]==5 && lastKeys[3]==0)
        {
            startShoot =true;
             attackType =SPECIAL_ATTACK;
            attackTime =0.7;
        
        }
               // 5 0 5 0 13
    }
    
    if(key==10)
    {
        if( attackTime<=0)
        {
         attackType =NO_ATTACK;
        }
    }else if(key==11)
    {
        if(attackType ==NO_ATTACK){
                attackType =KICK;
            attackTime =0.3;
        }
    }else if(key==12)
    {
        if(attackType ==NO_ATTACK){
        attackType =HIT;
            hitType=!hitType;
            attackTime =0.3;
        }
        
    }else if(key==13)
    {
         if(attackType ==NO_ATTACK)
        attackType =BLOCK;
         //attackTime =0.5;
    }

    
    
    
    
    /////////////
    // move keys
    //////////////
    //no stick
    if(key==0){
        
     nonMove  =true;
       
    isCrouching  =false ;
    }
     //stick up
    else if(key==1){
        isCrouching  =false ;
         nonMove  =true;
        if(!isAir)
        {
            isAir =true;
            airSpeed =jumpSpeed;
        
        }
       
    }
    //stick right up
    else if(key==2){
        isCrouching  =false ;
        isRight =true;
        nonMove  =false;
        drawType =0;
        if(!isAir)
        {
            isAir =true;
            airSpeed =jumpSpeed;
            
        }
        
    }
    // stick leftup
    else if(key==8)
    {
        drawType =1;
        isRight =false;
        nonMove  =false;
        if(!isAir)
        {
            attackType =NO_ATTACK;
            isAir =true;
            airSpeed =jumpSpeed;
            
        }
        
    }
    // stick left
    else if(key==7)
    {
        drawType =1;
        isRight =false;
        nonMove  =false;
    }
    //stick right
    else if(key==3){
       
        drawType =0;
        isRight =true;
         nonMove  =false;
       
    }
    //stick down
    else if(key==5) {
        nonMove  =true ;
        isCrouching  =true;
    }
    //stick down right
    else if(key==4) {
        drawType =0;
        isRight =true;
        nonMove  =false;
        isCrouching  =true;
    }
        //stick down left
    else if(key==6) {
        drawType =1;
        isRight =false ;
        nonMove  =false;
        isCrouching  =true;
    }
    
}

void Hero::update(float timeElapsed)
{
    
    if(isDead)
    {
    
        fy-=timeElapsed *6;
    
        return;
    }
    if( !nonMove)
    {
        if(isRight)
        {
        speed+=3;
        }else
        {
        speed-=3;
        
        
        
        }
            if(speed>20)speed =20;
        if(speed< -20)speed =-20;
        speedStepX = speed*timeElapsed;
    
    }else
    {
    
        speed*=0.5;
         speedStepX = speed*timeElapsed;
    }
    
   fxReal+=speedStepX+hitSpeed* timeElapsed;
    hitSpeed*=0.8;
  
    if( saveTime>0)
    {
        saveTime -=timeElapsed;
    }
    if( attackTime>0)
    {
        attackTime-=timeElapsed;
        if( attackTime<=0)attackType =NO_ATTACK;
    }
    
    if(isAir)
    {
    
        fy +=timeElapsed*airSpeed;
        airSpeed +=timeElapsed*airFall;
        
        if(fy> groundY)
        {
        
            fy =groundY;
            isAir =false;
            attackType =NO_ATTACK;
        }
        
      /*  if( !nonMove)
        {
            if(isRight)
            {
               
                fx+=speedMove*timeElapsed;
            }
            else
            {
              fx-=speed*timeElapsed;
            
            }
        
        }*/
        
        if(attackType==NO_ATTACK)
        {
            currentData =   jumpData;
            
        
        
        }else if (attackType==KICK)
        {
            hitX =5;
            hitY =-2;
            currentData =   jumpKickData;   
        
        }else if (attackType==HIT)
        {
            hitX =5;
            hitY =-3;
            currentData =   jumpHitData;
            
        }else if (attackType==BLOCK)
        {
         
            currentData =   jumpBlockData;
            
        }
        hitRect.setType(heroType, 0, drawType);

        
    }
    else if (  isCrouching)
    {
        if(nonMove){
            currentData =    crouchData;
        }
        else
        {
             currentData =    crouchData;
            //startWalking();
            /*if(isRight)
            {
                fxReal+=speed*timeElapsed*0.7;
            }else
            {
                 fxReal-=speed*timeElapsed*0.7;
                
            }*/
        }
    
        
        if(attackType==NO_ATTACK)
        {
           // currentData =   jumpData;
            
        }else if (attackType==KICK)
        {
            
            currentData =   crouchKickData;
            hitX =5;
            hitY =-1;
        }else if (attackType==HIT)
        {
            
            currentData =  crouchHitData;
            hitX =5;
            hitY =-2;
            
        }else if (attackType==BLOCK)
        {
            
            currentData =  crouchBlockData;
            
        }
        hitRect.setType(heroType, 1, drawType);
    }
    else
    {
        if(nonMove){
            currentData = standData;
        }else
        {
            if(attackType==NO_ATTACK)
            {
                startWalking();
               /* if(isRight)
                {
                     fxReal+=speed*timeElapsed;
                }else
                {
                     fxReal-=speed*timeElapsed;
            
                }*/
            
                if(isWalking)
                {
                    walkingTime+=timeElapsed;
                    int walkPos = ((int)(walkingTime*12))%4;
                    if(walkPos ==0)
                    {
                        currentData =   walk1Data;
                    }else if(walkPos ==1)
                    {
                        currentData =   walk2Data;
                    }else if(walkPos ==2)
                    {
                        currentData =   walk3Data;
                    }else if(walkPos ==3)
                    {
                        currentData =   walk2Data;
                    }
                }
            }
        }
        if(attackType==NO_ATTACK)
        {
            //currentData =   jumpData;
            
        }else if (attackType==KICK)
        {
            hitX =5;
            hitY =-1;
            currentData =   standKickData;
            
        }else if (attackType==HIT)
        {
            hitX =5;
            hitY =-3;
            if(hitType){
            currentData =  standHitData1;
            }else
            {
            currentData =  standHitData2;
            
            }
        }else if (attackType==BLOCK)
        {
            
            currentData = standBlockData;
            
        }else if (attackType==SPECIAL_ATTACK)
        {
            
            currentData =   standBlockData;
            
        }

           hitRect.setType(heroType, 0, drawType);
        
    }
 
    if(drawType ==1)
    {
        hitX  =-hitX;
    };
    if( saveTime>0.4)
    {
        if(hitFall==0){
        currentData =gotHitData1;
        }else
        {
         currentData =gotHitData2;
        }
    }
    //screenfx = fx-levelfx;
   // x=screenfx;
    //y=fy;
    
    

    

}
void Hero::setLevelPos(float levelfx)
{

    fx =  fxReal-levelfx;
   


}



void Hero::startWalking()
{
    if(isWalking )return;
    walkingTime =0;
 isWalking =true ;
    currentData =   walk1Data;


}
