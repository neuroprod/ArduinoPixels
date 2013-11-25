//
//  Hero.h
//  PixelGame
//
//  Created by Kris Temmerman on 05/10/13.
//  Copyright (c) 2013 Kris Temmerman. All rights reserved.
//

#ifndef PixelGame_Hero_h
#define PixelGame_Hero_h
#include "PixelGameInclude.h"
#include "Sprite.h"
#include "Vector.h"
#include "Live.h"
#define NO_ATTACK 0
#define HIT 1
#define KICK 2
#define BLOCK 3
#define SPECIAL_ATTACK 4
class Hero:public Live
{
public:
    Hero(){
        nonMove =true;
        isRight =true;
        isWalking =false;
        isAir = false;
        isCrouching =false;
        isDead =false;
        hitType=0;
        currentData=0;
        isWaterHit =false;
        isCrouchingWalking =false;
    };
    bool hitType;
   
   
    void setKey(int key);
    void setup(int type);
    void update(float timeElapsed);
    void startWalking();
    void startCrouching();
    void setLevelPos(float levelfx);
    void reset();
    void setDead();
        void hitWater();
    bool isWaterHit;
    float walkingTime;
    bool isCrouchingWalking;
    float screenfx;
    bool isDead;
    bool nonMove;
    bool isRight;
    bool isWalking;
    bool isAir;
    bool isCrouching;
   
    float attackTime;
 
  
    
    float jumpSpeed;//start jump speed
    float airFall;//fall speed
    float airSpeed;//current jump speed
    float speedStepX;
    float groundY;
    
 
   
  
    PixelData * jumpData;
    PixelData * jumpKickData;
    PixelData * jumpHitData;
    PixelData * jumpBlockData;
    
    
    PixelData * crouchData;
    PixelData * crouchWalk1Data;
    PixelData * crouchWalk2Data;
    PixelData * crouchKickData;
    PixelData * crouchHitData;
    PixelData * crouchBlockData;
    
    PixelData * standData;
    
    PixelData * standKickData;
    PixelData * standHitData1;
    PixelData * standHitData2;
    PixelData * standBlockData;
    
    
    PixelData * walk1Data;
    PixelData * walk2Data;
    PixelData * walk3Data;
    
    PixelData * gotHitData1;
    PixelData * gotHitData2;
    
    PixelData * deathData;
    Vector<int> lastKeys;
};


#endif
