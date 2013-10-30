//
//  PixelMain_Game_p2.cpp
//  PixelGameLocal
//
//  Created by Kris Temmerman on 28/10/13.
//
//

#include "PixelMain.h"
void PixelMain::setupGame2p()
{
   
    
    
    //life stuff
    
    lifeBoyHolder2p= new Sprite();
    stage2p.addChild(lifeBoyHolder2p);
    lifeBoyHolder2p->currentData =boyInterData;
    lifeGirlHolder2p= new Sprite();
    stage2p.addChild(lifeGirlHolder2p);
    lifeGirlHolder2p->currentData =girlInterData;
    lifeGirl2p =new Life();
    lifeBoy2p =new Life();
    setLifeData(lifeGirl2p);
    setLifeData(lifeBoy2p);
    lifeBoy2p->setup();
    lifeGirl2p->setup();
    lifeGirl2p->fx =1;
    lifeGirl2p->fy=-2;
    lifeBoy2p->fx =0;
    lifeBoy2p->fy=-2;
    lifeBoyHolder2p->addChild( lifeBoy2p);
    lifeGirlHolder2p->addChild( lifeGirl2p);

    
}
void PixelMain::resetGame2p()
{
    lifeBoyHolder2p->fx =-15;
    lifeBoyHolder2p->fy =16;
    lifeGirlHolder2p->fx =104;
    lifeGirlHolder2p->fy =16;
   lifeGirl2p->setLive(7);
    lifeBoy2p->setLive(7);
}

void PixelMain::updateGame2p (float timeElapsed)
{
    if (gameState == STATE_GAME_START)
    {
        
        
        lifeBoyHolder2p->fx = linearEase(1-switchTime,-15,19,1);
        lifeGirlHolder2p->fx = linearEase(1-switchTime,104,-19,1);
        
        switchTime -=timeElapsed;
        if(switchTime<0){
            setGameState(STATE_GAME);
            lifeBoyHolder2p->fx = 4;
            lifeGirlHolder2p->fx = 85;
        }
        
        
        
        
        return;
        
    }
    lifeBoy2p->update(timeElapsed);
    lifeGirl2p->update(timeElapsed);
    
}