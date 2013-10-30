//
//  PixelMain_Game_vs.cpp
//  PixelGameLocal
//
//  Created by Kris Temmerman on 28/10/13.
//
//

#include "PixelMain.h"

void PixelMain::setupGameVS()
{
    
    
    for (int i=0;i<4;i++)
    {
        SpecialAttack *attack =new SpecialAttack();
        attack->ball =ballAttackG;
        attack->stroke =strokeAttackG;
        attack->setup();
        specialAttackBufferVS.push_back(attack);
        stageVS.addChild( attack);
    }
    
    
    
    ///hero
    heroVSM =new Hero();
    //setHeroData(heroVSM,0);
    stageVS.addChild(heroVSM);
    heroVSM->setup(0);
liveVS.push_back( heroVSM);
    
    heroVSF =new Hero();
    //setHeroData(heroVSF,1);
    stageVS.addChild(heroVSF);
    heroVSF->setup(1);
    liveVS.push_back( heroVSF);
    
    //life stuff
    
    lifeBoyHolderVS= new Sprite();
    stageVS.addChild(lifeBoyHolderVS);
    lifeBoyHolderVS->currentData =boyInterData;
    lifeGirlHolderVS= new Sprite();
    stageVS.addChild(lifeGirlHolderVS);
    lifeGirlHolderVS->currentData =girlInterData;
    lifeGirlVS =new Life();
    lifeBoyVS =new Life();
    setLifeData(lifeGirlVS);
    setLifeData(lifeBoyVS);
    lifeBoyVS->setup();
    lifeGirlVS->setup();
    lifeGirlVS->fx =1;
    lifeGirlVS->fy=-2;
    lifeBoyVS->fx =0;
    lifeBoyVS->fy=-2;
    lifeBoyHolderVS->addChild( lifeBoyVS);
    lifeGirlHolderVS->addChild( lifeGirlVS);
    
    
    
    
    
    
}

void PixelMain::resetGameVS()
{
    lifeBoyHolderVS->fx =-15;
    lifeBoyHolderVS->fy =16;
    lifeGirlHolderVS->fx =104;
    lifeGirlHolderVS->fy =16;
    lifeGirlVS->setLive(7);
    lifeBoyVS->setLive(7);
    
    
    lifeBoy1p->setLive(7);
    lifeBoyHolder1p->fx =-15;
    lifeBoyHolder1p->fy =16;
    
    
    heroVSM->fxReal = 20;
     heroVSM->fx =20;
    heroVSM->fy = -16;
    heroVSM->isAir =true;
    
    
    heroVSF->fxReal = 70;
    heroVSF->fx =70;
    heroVSF->fy = -16;
    heroVSF->isAir =true;
    
    
    
 
    
}
void PixelMain::updateGameVS(float timeElapsed)
{
    if (gameState == STATE_GAME_START)
    {
        
        
        lifeBoyHolderVS->fx = linearEase(1-switchTime,-15,19,1);
        lifeGirlHolderVS->fx = linearEase(1-switchTime,104,-19,1);
        
        switchTime -=timeElapsed;
        if(switchTime<0){
            setGameState(STATE_GAME);
            lifeBoyHolderVS->fx = 4;
            lifeGirlHolderVS->fx = 85;
        }
        
        
        
        
        return;
        
    }
    
    
    resolveShoot(liveVS,specialAttackBufferVS);
  
    
    
    
    heroVSM->update(timeElapsed);
    heroVSF->update(timeElapsed);
    
 
    resolveAttack(liveVS);
    
    for (int i=0;i<specialAttackBufferVS.size();i++)
    {
        specialAttackBufferVS[i]->update(timeElapsed);
        
    }
    //
    //chek hit etc
    
    
    if(  heroVSM->hitTestRect(heroVSF))
    {
       //cout << "hit"<<endl;
        heroVSM->speed =0;
        if(  heroVSM->fxReal< heroVSF->fxReal)
        {
            heroVSM->fxReal-=0.5;
            heroVSF->fxReal+=0.5;
        }else
        {
            heroVSM->fxReal+=0.5;
            heroVSF->fxReal-=0.5;
        
        }
    
       

    }

      
    //
    //
    heroVSM->setLevelPos(stagefx);
    heroVSF->setLevelPos(stagefx);
    
   

    /*for (int i=0;i<   decorVS.size();i++)
    {
        decorVS[i]->setLevelPos(stagefx);
    }*/
    for (int i=0;i<3;i++)
    {
        cloudsVS[i]->update(timeElapsed);
        
    }
    
    
    lifeBoyVS->update(timeElapsed);
    lifeGirlVS->update(timeElapsed);
    

}