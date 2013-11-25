//
//  PixelMain_Game.cpp
//  PixelGameLocal
//
//  Created by Kris Temmerman on 24/10/13.
//
//

#include "PixelMain.h"



#include "DataFlower.h"
#include "DataCity.h"
#include "DataPond.h"
#include "DataBush.h"
#include "DataInterface.h"
#include "DataInterface2.h"

#include "DataHitPointTest.h"





#include "DataLife0.h"
#include "DataLife1.h"
#include "DataLife2.h"
#include "DataLife3.h"

#include "DataLife4.h"
#include "DataLife5.h"
#include "DataLife6.h"
#include "DataLife7.h"
#include "DataLifeLight.h"


#include "DataBlood1.h"
#include "DataBlood2.h"
#include "DataBlood3.h"

#include "DataGirlShoot1.h"
#include "DataGirlShoot2.h"
#include "DataBoyShoot1.h"
#include "DataBoyShoot2.h"
#include "DataAlienShoot1.h"
#include "DataAlienShoot2.h"

#include "DataBackGrass.h"



#include "DataManJump.h"
#include "DataManStand.h"
#include "DataManWalk1.h"
#include "DataManWalk2.h"
#include "DataManWalk3.h"

#include "DataManCrouch.h"

#include "DataManJumpKick.h"
#include "DataManCrouchKick.h"
#include "DataManStandKick.h"

#include "DataManJumpHit.h"
#include "DataManCrouchHit.h"
#include "DataManStandHit1.h"
#include "DataManStandHit2.h"

#include "DataManJumpKick.h"
#include "DataManCrouchKick.h"
#include "DataManStandKick.h"

#include "DataManJumpBlock.h"
#include "DataManCrouchBlock.h"
#include "DataManStandBlock.h"
#include "DataBoyDeath.h"

#include "DataManGitHit1.h"
#include "DataManGitHit2.h"

#include "DataGirlJump.h"
#include "DataGirlStand.h"
#include "DataGirlWalk1.h"
#include "DataGirlWalk2.h"
#include "DataGirlWalk3.h"

#include "DataGirlCrouch.h"

#include "DataGirlJumpKick.h"
#include "DataGirlCrouchKick.h"
#include "DataGirlStandKick.h"

#include "DataGirlJumpHit.h"
#include "DataGirlCrouchHit.h"
#include "DataGirlStandHit1.h"
#include "DataGirlStandHit2.h"

#include "DataGirlJumpKick.h"
#include "DataGirlCrouchKick.h"
#include "DataGirlStandKick.h"

#include "DataGirlJumpBlock.h"
#include "DataGirlCrouchBlock.h"
#include "DataGirlStandBlock.h"
#include "DataGirlDeath.h"


#include "DataGirlGotHit1.h"
#include "DataGirlGotHit2.h"

#include "DataAlien1Head.h"
#include "DataAlien1Feed.h"

#include "DataAlien2Head.h"
#include "DataAlien2Feed.h"
#include "DataPond.h"
#include "DataDuckBig.h"
#include "DataDuckSmall.h"
#include "Alien1.h"
#include "Alien2.h"
#include "AlienPond.h"
#include "DataPaddo.h"

#include "DataSplash1.h"
#include "DataSplash2.h"

#include "DataManCrouchWalk1.h"
#include "DataManCrouchWalk2.h"

#include "DataGirlCrouchWalk1.h"
#include "DataGirlCrouchWalk2.h"

void PixelMain::allocGame()
{
    if(jumpDataB!=0)return;
   //cout << "allocgame"<<endl;;
    
    jumpDataB = new DataManJump();
    jumpKickDataB = new DataManJumpKick();
    jumpKickDataB->centerX-=1;
    jumpHitDataB=new DataManJumpHit();
    jumpBlockDataB =new DataManJumpBlock();
    
    crouchDataB =new DataManCrouch();
    
     crouchDataWalk1B =new DataManCrouchWalk1();
     crouchDataWalk2B =new DataManCrouchWalk2();
    crouchDataWalk1G =new DataGirlCrouchWalk1();
    crouchDataWalk2G =new DataGirlCrouchWalk2();

    
    crouchKickDataB =new DataManCrouchKick();
    crouchKickDataB->centerX-=1;
    crouchHitDataB =new DataManCrouchHit();
    crouchHitDataB->centerX-=1;
    crouchBlockDataB =new DataManCrouchBlock();
    
    standDataB = new DataManStand();
    standKickDataB =new DataManStandKick();
    standHitData1B =new DataManStandHit1();
    standHitData1B->centerX-=1;
    standHitData2B =new DataManStandHit2();
    standHitData2B->centerX-=1;
    standBlockDataB =new DataManStandBlock();
    gotHit1B = new DataManGitHit1();
    gotHit2B = new DataManGitHit2();
    gotHit2B->centerY-=1;
    
    walk1DataB =new DataManWalk1();
    walk2DataB =new DataManWalk2();
    walk3DataB =new DataManWalk3();
    deathDataB =new DataBoyDeath();
    ///girl
  jumpDataG = new DataGirlJump();
    jumpKickDataG = new DataGirlJumpKick();
    jumpKickDataG->centerX-=1;
    jumpHitDataG=new DataGirlJumpHit();
    jumpBlockDataG =new DataGirlJumpBlock();
    
    crouchDataG =new DataGirlCrouch();
    crouchKickDataG =new DataGirlCrouchKick();
    crouchKickDataG->centerX-=1;
    crouchHitDataG =new DataGirlCrouchHit();
    crouchHitDataG->centerX-=1;
    crouchBlockDataG =new DataGirlCrouchBlock();
    
    standDataG = new DataGirlStand();
    standKickDataG =new DataGirlStandKick();
    standKickDataG->centerX-=1;
    standHitData1G =new DataGirlStandHit1();
    standHitData1G->centerX-=1;
    standHitData2G =new DataGirlStandHit2();
    standHitData2G->centerX-=1;
    standBlockDataG =new DataGirlStandBlock();
    
    
    
    walk1DataG =new DataGirlWalk1();
    walk2DataG =new DataGirlWalk2();
    walk3DataG =new DataGirlWalk3();
    
    deathDataG =new DataGirlDeath();
    gotHit1G = new DataGirlGotHit1();
    gotHit2G = new DataGirlGotHit2();
gotHit2G->centerY-=1;
    //set the data
    setHeroData(hero1pm,0);

    setHeroData(hero2pF,1);
    setHeroData(hero2pM,0);
    
     setHeroData(heroVSF,1);
     setHeroData(heroVSM,0);
    boyInterData =  new DataInterface();
    girlInterData = new DataInterface2();

    lifeBoyHolder1p->currentData =boyInterData;

    lifeBoyHolder2p->currentData =boyInterData;
    lifeGirlHolder2p->currentData =girlInterData;
    lifeBoyHolderVS->currentData =boyInterData;
    lifeGirlHolderVS->currentData =girlInterData;
    
    
    
    ///
    alien1Head =new DataAlien1Head();
    alien1Feet=new DataAlien1Feed();
    
    
    alien2Head =new DataAlien2Head();
    alien2Feet =new DataAlien2Feed();
    
    alienPond =new DataPond();
    alienDuckBig =new DataDuckBig();
    alienDuckSmall =new DataDuckSmall();
    
   
    setAliens(aliens1p);
    setAliens(aliens2p);
    splashFrame1 = new DataSplash1();
    splashFrame2 =new DataSplash2();
    waterSplash1p->frame1 = splashFrame1;
    waterSplash1p->frame2 = splashFrame2;
    
    waterSplash2p->frame1 = splashFrame1;
    waterSplash2p->frame2 = splashFrame2;
};

void PixelMain::deallocGame()
{
    if(jumpDataB ==0)return;
    
    
    delete  boyInterData;
    boyInterData =0;
    delete  girlInterData;
    girlInterData =0;
    
   //cout << "deallocgame"<<endl;
    delete jumpDataB;
    jumpDataB =0;
    delete jumpKickDataB ;

    delete jumpHitDataB;
    delete jumpBlockDataB;
    
    
    delete  crouchDataWalk1B ;
    delete  crouchDataWalk2B;
    delete  crouchDataWalk1G; 
    delete  crouchDataWalk2G;
    
    
    
    delete crouchDataB;
    delete crouchKickDataB;
  
    delete crouchHitDataB;
 
    delete crouchBlockDataB;
    
    delete standDataB;
    delete standKickDataB;
    delete standHitData1B;
  
    delete standHitData2B;
    
    delete standBlockDataB;
    delete gotHit1B;
    delete gotHit2B;
    
    
    delete walk1DataB;
    delete walk2DataB;
    delete walk3DataB;
    delete deathDataB;
    delete jumpDataG;
    delete jumpKickDataG;
  
    delete jumpHitDataG;
    delete jumpBlockDataG;
    
    delete crouchDataG;
    delete crouchKickDataG;
  
    delete crouchHitDataG;
    
    delete crouchBlockDataG;
    
    delete standDataG;
    delete standKickDataG;
    delete standHitData1G;
   
    delete standHitData2G;
   
    delete standBlockDataG;
    
    
    
    delete walk1DataG ;
     delete walk2DataG ;
     delete walk3DataG ;
    
     delete deathDataG ;
     delete gotHit1G ;
     delete gotHit2G ;

    //boy
    jumpDataB =0;
    
    jumpKickDataB = 0;
    
    jumpHitDataB=0;
    jumpBlockDataB =0;
    
    crouchDataB =0;
    crouchKickDataB =0;
    
    crouchHitDataB =0;
    
    crouchBlockDataB =0;
    
    standDataB = 0;
    standKickDataB =0;
    standHitData1B =0;
    
    standHitData2B =0;
    
    standBlockDataB =0;
    gotHit1B = 0;
    gotHit2B =0;
    
    
    walk1DataB =0;
    walk2DataB =0;
    walk3DataB =0;
    deathDataB =0;
    ///girl
    jumpDataG = 0;
    jumpKickDataG = 0;
    
    jumpHitDataG=0;
    jumpBlockDataG =0;
    
    crouchDataG =0;
    crouchKickDataG =0;
    
    crouchHitDataG =0;
    
    crouchBlockDataG =0;
    
    standDataG = 0;
    standKickDataG =0;
    standHitData1G =0;
    
    standHitData2G =0;
    
    standBlockDataG =0;
    
    crouchDataWalk1B=0 ;
      crouchDataWalk2B=0;
      crouchDataWalk1G=0;
      crouchDataWalk2G=0;
    
    walk1DataG =0;
    walk2DataG =0;
    walk3DataG =0;
    
    deathDataG =0;
    gotHit1G = 0;
    gotHit2G = 0;
    
    
    delete alien1Head; 
    delete alien1Feet;
    alien1Head =0;
    alien1Feet=0;
    
    
    delete alien2Head ;
     delete alien2Feet ;
    
    delete  alienPond ;
   delete alienDuckBig ;
    delete alienDuckSmall;
 
    
    alien2Head =0;
    alien2Feet =0;
    
    alienPond =0;
    alienDuckBig =0;
    alienDuckSmall =0;
    
    
    delete splashFrame1;
    delete splashFrame2;
    
    splashFrame1 =0;
    splashFrame2 =0;
    
};

void PixelMain::setAliens(const Vector<Alien *> &aliens)
{

    for(int i=0;i<aliens.size();i++)
    {
        Alien * a = aliens[i];
        if(a->heroType==2)
        {
            Alien1 * a1 = (Alien1 *) a;
            a1->headSprite->currentData = alien1Head;
           
            a1->feetSprite->currentData = alien1Feet;
        }
        else if(a->heroType==3)
        {
            Alien2 * a1 = (Alien2 *) a;
            a1->currentData = alien2Head;
            a1->feet->currentData  =alien2Feet;
           
        }
        else if(a->heroType==5)
        {
            AlienPond * a1 = (AlienPond *) a;
            a1->currentData = alienPond;
            
            a1->duckBigSprite->currentData = alienDuckBig;
             a1->duckSmallSprite->currentData = alienDuckSmall;
        }
    
    }


}
void PixelMain::alienHitTest(Hero * hero,const Vector <Alien *> &aliens,const Vector<Blood *> &bloods)
{
    if(hero->saveTime >0)return;
    for(int i=0;i<aliens.size();i++)
    {
        if(aliens[i]->intHidden)continue;
    
        if(  hero->hitTestRect(aliens[i]))
        {
            Alien * alien = aliens[i];
            //water
            if(alien->heroType==5)
            {
                
                hero->life --;
             

                
                if(hero->life==0){
                    hero->setDead();
                    
                }else
                {
                    hero->hitWater();
                    hero-> saveTime =0.3;
                }
                if(gameType == GAME_TYPE_1P)
                {

                    
                    waterSplash1p->show(hero->fxReal);
                }
                if(gameType == GAME_TYPE_2P)
                {
                    
                    
                    waterSplash2p->show(hero->fxReal);
                }
            
            }else{
            
                if(alien->fxReal > hero->fxReal)
                {
                    hero->hitSpeed =-35;
               
                }
                else
                {
                    hero->hitSpeed =35;
                }
           
                hero->speed =0;
                hero->life --;
            
            
                if(hero->life==0){
                    hero->setDead();
               
                }
           
            
                hero->hitFall =rand()%2;
                hero->saveTime =0.8;
            
                Blood * blood =getBlood(bloods);
                if(blood!=0)
                {
                    blood->fxReal = hero->fxReal ;
                    blood->fy= hero->fy -4;
                    blood->show();

                }
            }
        }
    
    }

    


}


void  PixelMain::resolveAttack(const Vector<Live *> &lives,const Vector<Blood *> &bloods)
{

    for(int j=0;j<lives.size();j++)
    {
         if(lives[j]->intHidden)continue;
        Live *attacker=lives[j];
        if(attacker->attackType == HIT ||attacker->attackType == KICK )
        {
            int hitPosX=attacker->fxReal+attacker->hitX;
            int hitPosY = attacker->y+attacker->hitY;
           
            for(int i=0;i<lives.size();i++)
            {
                    if( lives[i]->heroType==5)continue;
                   if(lives[i]->intHidden)continue;
                if(i==j)continue;
                if(gameType == GAME_TYPE_2P)
                {
                  
                    if(attacker->heroType==1 && lives[i]->heroType==0)
                    {
                       continue;
                
                    } if(attacker->heroType==0 && lives[i]->heroType==1)
                    {
                        continue;
                        
                    }
                
                
                }
                
                if(lives[i]->saveTime>0  )return;
                
                bool hasHit = lives[i]->hitTest(hitPosX,hitPosY);
               
                if(hasHit   )
                {
              //      Serial.println("hit");
                      Live *attackee=lives[i];
                    if(attackee->attackType==BLOCK && attackee->drawType !=attacker->drawType )
                    {
                       if(attackee->x>attacker->x)
                        {
                            attacker->hitSpeed =-20;
                        }else 
                        {
                               attacker->hitSpeed =20;
                        }
                        
                        
                    }
                    else
                    {
                        if(attackee->x>attacker->x)
                        {
                           attackee->hitSpeed =35;
                        }else 
                        {
                            attackee->hitSpeed =-35;
                        }
                    
                        attackee->life --;
                        
                       if(attackee->life==0)
                       {
                           attackee->setDead();
                       }
                        if(attacker->drawType==1)
                            attackee->drawType =0;
                        else if (attacker->drawType==0)
                            attackee->drawType =1;
                        
                        attackee->hitFall =rand()%2;
                       attackee->saveTime =0.8;
                        
                        Blood * blood =getBlood(bloods);
                        if(blood!=0)
                        {
                            blood->fxReal = hitPosX;
                            blood->fy= hitPosY;
                            blood->show();
                        }
                    }
                }

            
            }
        }
    }
    
    
  

}
void  PixelMain::checkShoot(const Vector<Live *> &lives,const Vector<SpecialAttack *> &attacs,const Vector<Blood *> &bloods)
{

    for(int j=0;j<attacs.size();j++)
    {
        if(attacs[j]->isUsed)
        {
          
            SpecialAttack * attack = attacs[j];
            for(int i=0;i<lives.size();i++)
            {
                
                if(gameType == GAME_TYPE_2P)
                {
                    
                    if(attack->heroType==1 && lives[i]->heroType==0)
                    {
                        continue;
                        
                    } if(attack->heroType==0 && lives[i]->heroType==1)
                    {
                        continue;
                        
                    }
                    
                    
                }

                if( attack->heroType>1 && lives[i]->heroType>1)continue;
            if( attack->heroType != lives[i]->heroType)
            {
              
                if(lives[i]->hitTest(attack->fxReal, attack->fy) &&   lives[i]->saveTime<=0)
                {
                    Live *attackee=lives[i];
                                    
                    if(attackee->attackType==BLOCK && attack->drawType !=attackee->drawType )
                    {
                        if(attackee->x >  attack->x)
                        {
                            attackee->hitSpeed =20;
                           
                        }else
                        {
                           attackee->hitSpeed =-20;
                        }
                         attackee->speed =0;
                        attack-> hit();
                    }
                    else
                    {
                        if(attackee->x>attack->x)
                        {
                            attackee->hitSpeed =35;
                        }else
                        {
                            attackee->hitSpeed =-35;
                        }
                        //playSound(SOUND_HIT);
                        attackee->life --;
                        
                        if(attackee->life==0)
                        {
                            attackee->setDead();
                        }
                        if(attack->drawType==1)
                            attackee->drawType =0;
                        else if (attack->drawType==0)
                            attackee->drawType =1;
                        
                        attackee->hitFall =rand()%2;
                        attackee->saveTime =0.8;
                        
                        Blood * blood =getBlood(bloods);
                        if(blood!=0)
                        {
                            blood->fxReal = attack->fxReal;
                            blood->fy= attack->fy;
                            blood->show();
                        }
                         attack-> hit();
                    }

                
                
                
                }
            
            
            }
        
        }
    
        }
    
    }

}
void  PixelMain::resolveShoot(const Vector<Live *> &lives,const  Vector<SpecialAttack *> &attacts)
{
    for(int i=0;i< lives.size();i++)
    
    if(lives[i]->startShoot)
    {
        lives[i]->startShoot =false;
        SpecialAttack * attack=getSpecialAttack(attacts);
        if(attack){
            attack->fxReal =lives[i]->fxReal +4;
            if(lives[i]->drawType==1)attack->fxReal -=7;
            
            attack->fy =lives[i]->y-2;
            attack->start(lives[i]->drawType, lives[i]->heroType);
        }
    }



}

Blood * PixelMain::getBlood(const Vector<Blood *> &bloods)
{
    for (int i=0;i<bloods.size();i++)
    {
        if(!bloods[i]->isUsed) return bloods[i];
        
    }
    return 0;
}
SpecialAttack * PixelMain::getSpecialAttack(const  Vector<SpecialAttack *> &attacts)
{
    
    for (int i=0;i<attacts.size();i++)
    {
        if(!attacts[i]->isUsed) return attacts[i];
        
    }
    return 0;
    
}


void  PixelMain::resetGame()
{
    endGame  =false;
    stagefx =0;
    resetGame1p();
    resetGame2p();
    resetGameVS();
}

void PixelMain::setupGame()
{
 
    cloudData =new DataCloud1();
    treeCloseData =new DataThreeClose();
    treeFarData= new DataThreeFar() ;
    flowerData = new Dataflower();
    bushData =new DataBush();
    cityData = new DataCity();
    paddoData = new DataPaddo();
  
    backGrass  =  new DataBackGrass();
    
     frame1b =new DataBlood1();
    frame2b =new DataBlood2();
    frame2b->centerY =2;
   frame3b =new DataBlood3();
    frame3b->centerY =0;
    
    
    for(int i =0;i<3;i++)
    {
        Stage *stage;
        if(i==0) stage  =&stage1p;
        if(i==1) stage  =&stage2p;
        if(i==2) stage  =&stageVS;
        
        
        
        //backGround
        
        Sprite * backgroundGame = new  Sprite();
        backgroundGame->drawType =3;
        backgroundGame->currentData =backGrass;
        stage->addChild( backgroundGame);
        
        for (int j=0;j<3;j++)
        {
            Cloud *c = new Cloud();
            c->currentData  = cloudData;
            c->fx = rand()%90;
            c->fy = rand()%5  -4+cloudData->height;;
            c->setup();
            if(i==0) clouds1p.push_back(c);
            if(i==1) clouds2p.push_back(c);
            if(i==2) cloudsVS.push_back(c);
            stage->addChild(c);
        }
       
        
        
    }
    
    
    //boy
    jumpDataB =0;
  
    jumpKickDataB = 0;
    
    jumpHitDataB=0;
    jumpBlockDataB =0;
    
    crouchDataB =0;
    crouchKickDataB =0;
 
    crouchHitDataB =0;
   
    crouchBlockDataB =0;
    
    standDataB = 0;
    standKickDataB =0;
    standHitData1B =0;
   
    standHitData2B =0;
  
    standBlockDataB =0;
    gotHit1B = 0;
    gotHit2B =0;
    
    
    walk1DataB =0;
    walk2DataB =0;
    walk3DataB =0;
    deathDataB =0;
///girl
    jumpDataG = 0;
    jumpKickDataG = 0;
   
    jumpHitDataG=0;
    jumpBlockDataG =0;
    
    crouchDataG =0;
    crouchKickDataG =0;
    
    crouchHitDataG =0;
   
    crouchBlockDataG =0;
    
    standDataG = 0;
    standKickDataG =0;
    standHitData1G =0;
   
    standHitData2G =0;
  
    standBlockDataG =0;
    
    
    
    walk1DataG =0;
    walk2DataG =0;
    walk3DataG =0;
    
    deathDataG =0;
    gotHit1G = 0;
    gotHit2G = 0;
 ///life data
   
    
    
    
    
  
    life0 = new DataLife0();
    life1  = new DataLife1();
    life2  = new DataLife2();
    life3 = new DataLife3();
    
    life4  = new DataLife4();
    life5  = new DataLife5();
    life6  = new DataLife6();
    life7 = new DataLife7();
    
    lifeGlow  =new DataLifeLight();
//////
    //attacs
    
    girlShoot1 = new DataGirlShoot1();
    girlShoot2 = new DataGirlShoot2();
    
    boyShoot1 = new DataBoyShoot1();
    boyShoot2 = new DataBoyShoot2();
    
    alienShoot1 = new DataAlienShoot1();
    alienShoot2 = new DataAlienShoot2();

    
    //////
    /*
    readyToStart =false;
    backgroundGame = new  Sprite();
    backgroundGame->drawType =3;
    backgroundGame->currentData =new DataBackGrass();
    stageVS.addChild(backgroundGame);
    stage1p.addChild(backgroundGame);
    stage2p.addChild(backgroundGame);
    
    
    
    
    
    int spritePos = 0;
    
    for (int i=0;i<3;i++)
    {
        Cloud *c = new Cloud();
        c->currentData  = cloudData;
        c->fx = rand()%90;
        c->fy = rand()%5  -4+cloudData->height;;
        c->setup();
        clouds.push_back(c);
        stage.addChild(c);
    }
    treeCloseData =new DataThreeClose();
    treeFarData= new DataThreeFar() ;
    for (int i=0;i<15;i++)
    {
        Sprite * treeFar  = new Sprite();
        treeFar ->currentData =treeFarData;
        treeFar ->fx = rand()%500;
        treeFar ->fy = -rand()%2+treeFarData->height;
        treeFar ->depth=0.5;
        
        stage.addChild(treeFar );
        spritePos++;
    }
    
    for (int i=0;i<15;i++)
    {
        Sprite * treeClose  = new Sprite();
        treeClose->currentData =treeCloseData;
        treeClose->fx = rand()%1000;
        treeClose->fy = -rand()%3+treeCloseData->height;
        if(treeClose->fy==-1)treeClose->depth=0.9;
        if(treeClose->fy==-2)treeClose->depth=0.7;
        stage.addChild(treeClose);
        
        spritePos++;
    }
    flowerData = new DataFlower();
    
    for (int i=0;i<50;i++)
    {
        Sprite * flower = new Sprite();
        flower->currentData =flowerData;
        flower->fx = rand()%500;
        flower->fy = rand()%5+10;
        
        stage.addChild( flower);
        spritePos++;
    }
    
    
    
    
    
    Sprite *pond = new Sprite();
    stage.addChild(pond);
    pond->currentData =new DataPond();
    pond->fx =70;
    pond->fy =16;
    spritePos++;
    
    
    Sprite *space= new Sprite();
    stage.addChild(space);
    space->currentData =new DataSpaceShip();
    space->fx =150;
    space->fy =16;
    
    spritePos++;
    //our heros
    
    
    girlHero=new Hero();
    girlHero->fx =25;
    girlHero->fy =15;
    girlHero->setup(1);
    stage.addChild(girlHero);
    
    
    boyHero =new Hero();
    boyHero->fx =35;
    boyHero->fy =15;
    boyHero->setup(0);
    stage.addChild(boyHero);
    //attacks
    PixelData * ball=new DataGirlBall();
    PixelData * stroke=new DataGirlBallStroke1();
    
    for (int i=0;i<4;i++)
    {
        SpecialAttack *attack =new SpecialAttack();
        attack->ball =ball;
        attack->stroke =stroke;
        attack->setup();
        specialAttackBuffer.push_back(attack);
        stage.addChild( attack);
    }
    
    //blood
    PixelData * frame1b =new DataBlood1();
    PixelData * frame2b =new DataBlood2();
    frame2b->centerY =2;
    PixelData * frame3b =new DataBlood3();
    frame3b->centerY =0;
    for (int i=0;i<4;i++)
    {
        Blood *blood =new Blood();
        blood->frame1 = frame1b;
        blood->frame2 = frame2b;
        blood->frame3 = frame3b;
        blood->setup();
        bloodBuffer.push_back(blood);
        stage.addChild( blood);
    }
    
    
    
    //interface;
    lifeBoyHolder= new Sprite();
    stage.addChild(lifeBoyHolder);
    lifeBoyHolder->currentData =new DataInterface();
    lifeBoyHolder->fx =4;
    lifeBoyHolder->fy =16;
    
    lifeGirlHolder= new Sprite();
    stage.addChild(lifeGirlHolder);
    lifeGirlHolder->currentData =new DataInterface2();
    lifeGirlHolder->fx =90-5;
   lifeGirlHolder->fy =16;
    
    
    
    
    lifeGirl =new Life();
    lifeBoy =new Life();
    lifeBoy->life0 =  lifeGirl->life0 = new DataLife0();
    lifeBoy->life1 = lifeGirl->life1 = new DataLife1();
    lifeBoy->life2 = lifeGirl->life2 = new DataLife2();
    lifeBoy->life3 = lifeGirl->life3 = new DataLife3();
    
    lifeBoy->life4 =lifeGirl->life4 = new DataLife4();
    lifeBoy->life5 = lifeGirl->life5 = new DataLife5();
    lifeBoy->life6 =  lifeGirl->life6 = new DataLife6();
    lifeBoy->life7 =  lifeGirl->life7 = new DataLife7();
    
    lifeBoy->lifeGlow =  lifeGirl->lifeGlow =new DataLifeLight();
    lifeBoy->setup();
    lifeGirl->setup();
    
    
    lifeGirl->setLive(7);
    
    
    
    lifeGirl->fx =1;
    lifeGirl->fy=-2;
    
    lifeBoy->setLive(7);
    lifeBoy->fx =0;
    lifeBoy->fy=-2;
    
    lifeBoyHolder->addChild( lifeBoy);
    lifeGirlHolder->addChild( lifeGirl);

*/
}

void PixelMain::setLifeData(Life * life)
{
    life->life0 = life0;
    life->life1 = life1;
    life->life2 = life2;
    life->life3 = life3;
    life->life4 = life4;
    life->life5 = life5;
    life->life6 = life6;
    life->life7 = life7;
    life->lifeGlow = lifeGlow ;

}
void  PixelMain::setHeroData(Hero * hero,int type)
{

    if(type==0)
    {
        hero->jumpData = jumpDataB ;
        hero->jumpKickData = jumpKickDataB;
        hero->jumpHitData=jumpHitDataB;
        hero->jumpBlockData =jumpBlockDataB;
        
        hero->crouchData = crouchDataB;
        hero->crouchKickData =crouchKickDataB;
        hero->crouchHitData =crouchHitDataB;
        hero->crouchBlockData =crouchBlockDataB ;
        
        hero->standData = standDataB ;
        hero->standKickData =standKickDataB ;
        hero->standHitData1 =standHitData1B;
        hero->standHitData2 =standHitData2B;
        hero->standBlockData =standBlockDataB;
        
        hero->gotHitData1 =gotHit1B;
        hero->gotHitData2=gotHit2B;
        
        hero->walk1Data =walk1DataB ;
        hero->walk2Data =walk2DataB;
        hero->walk3Data =walk3DataB;
        hero->deathData = deathDataB;
    
        hero->crouchWalk1Data = crouchDataWalk1B;
         hero->crouchWalk2Data = crouchDataWalk2B;
    }else if(type==1)
    {
    
        hero->jumpData = jumpDataG ;
        hero->jumpKickData = jumpKickDataG;
        hero->jumpHitData=jumpHitDataG;
        hero->jumpBlockData =jumpBlockDataG;
        
        hero->crouchData = crouchDataG;
        hero->crouchKickData =crouchKickDataG;
        hero->crouchHitData =crouchHitDataG;
        hero->crouchBlockData =crouchBlockDataG ;
        
        hero->standData = standDataG ;
        hero->standKickData =standKickDataG ;
        hero->standHitData1 =standHitData1G;
        hero->standHitData2 =standHitData2G;
        hero->standBlockData =standBlockDataG;
        
        hero->crouchWalk1Data = crouchDataWalk1G;
        hero->crouchWalk2Data = crouchDataWalk2G;
        
        hero->walk1Data =walk1DataG ;
        hero->walk2Data =walk2DataG;
        hero->walk3Data =walk3DataG;
        hero->deathData = deathDataG;
    
        hero->gotHitData1 =gotHit1G;
        hero->gotHitData2=gotHit2G;

    
    }

    hero->currentData = hero->jumpData;



}
void PixelMain::updateGame(float timeElapsed)
{
    
    

    
    
    
    
    
    
    
    /*
    for (int i=0;i<3;i++)
    {
        clouds[i]->update(timeElapsed);
        
    }

    
    
    if (gameState == STATE_GAME_START)
    {
    
    
        lifeBoyHolder->fx = linearEase(1-switchTime,-15,19,1);
        lifeGirlHolder->fx = linearEase(1-switchTime,104,-19,1);
        
        switchTime -=timeElapsed;
        if(switchTime<0){
            setGameState(STATE_GAME);
            lifeBoyHolder->fx = 4;
            lifeGirlHolder->fx = 85;
        }

    
    
    
        return;
    
    }
    
    
    
    
    
    
    
    //HEROS
    
    
    
    
    
    
       
    
    
    if(boyHero->startShoot)
    {
        boyHero->startShoot =false;
        SpecialAttack * attack=getSpecialAttack();
        if(attack){
            attack->fx =boyHero->x+4;
            if(boyHero->drawType==1)attack->fx-=7;
            attack->fy =boyHero->y-1;
            attack->start(boyHero->drawType, boyHero->heroType);
        }
    }
    if(girlHero->startShoot)
    {
        girlHero->startShoot =false;
        SpecialAttack * attack=getSpecialAttack();
        if(attack){
            attack->fx =girlHero->x+4;
            if(girlHero->drawType==1)attack->fx-=7;
            attack->fy =girlHero->y-1;
            attack->start(girlHero->drawType, girlHero->heroType);
        }
    }
    
    
    
    
    boyHero->update(timeElapsed );
    girlHero->update(timeElapsed );
    bool hasBoyAttack =false ;
    bool hasGirlAttack =false ;
    for (int i=0;i<specialAttackBuffer.size();i++)
    {
        if( specialAttackBuffer[i]->isUsed)
        {
            
            if(specialAttackBuffer[i]->heroType!=0)
            {
                
                hasBoyAttack=true;
            }if(specialAttackBuffer[i]->heroType!=1)
            {
                
                hasGirlAttack=true;
            }
            
        }
        
    }
    
    
    
    
    
    if(boyHero->attackType == HIT || boyHero->attackType == KICK || hasGirlAttack)
    {
        if(girlHero->saveTime<=0)
        {
            int hitPosX= boyHero->x+boyHero->hitX;
            int hitPosY = boyHero->y+boyHero->hitY;
            
            bool hasHit = girlHero->hitTest(hitPosX,hitPosY);
            if(!hasHit || hasBoyAttack)
            {
                for (int i=0;i<specialAttackBuffer.size();i++)
                {
                    if( specialAttackBuffer[i]->isUsed)
                    {
                        if(specialAttackBuffer[i]->heroType!=1)
                        {
                            hitPosX= specialAttackBuffer[i]->fx;
                            hitPosY=specialAttackBuffer[i]->fy;
                            hasHit = girlHero->hitTest(hitPosX,hitPosY);
                            
                            if(hasHit){
                                specialAttackBuffer[i]->hit();
                                break;
                            }
                        }
                    }
                }
                
                
            }
            if(hasHit   )
            {
                
                if(girlHero->attackType==BLOCK)
                {
                    if(boyHero->x>girlHero->x)
                    {
                        boyHero->fx-=2;
                    }else if(boyHero->x<girlHero->x)
                    {
                        boyHero->fx+=2;
                    }
                    
                    
                }
                else
                {
                    
                    if(girlHero->x>boyHero->x)
                    {
                        girlHero->fx+=2;
                    }else if(girlHero->x<boyHero->x)
                    {
                        girlHero->fx-=2;
                    }
                    // boyHero->attackPauze =0.5;
                    girlHero->live --;
                    lifeGirl->setLive(girlHero->live);
                    
                    if(girlHero->live==0){
                        girlHero->setDead();
                        setWin(boyHero->heroType);
                    }
                    girlHero->saveTime =0.8;
                    
                    Blood * blood =getBlood();
                    if(blood!=0)
                    {
                        blood->fx = hitPosX;
                        blood->fy= hitPosY;
                        blood->show();
                    }
                }
            }
            
            
        }
        
    }
    
    if(girlHero->attackType == HIT || girlHero->attackType == KICK )
    {
        
        if(boyHero->saveTime<=0)
        {
            
            int hitPosX= girlHero->x+girlHero->hitX;
            int hitPosY = girlHero->y+girlHero->hitY;
            if(boyHero->hitTest(hitPosX,hitPosY) )
            {
                
                if(boyHero->attackType==BLOCK)
                {
                    if(boyHero->x>girlHero->x)
                    {
                        girlHero->fx-=2;
                    }
                    else if(boyHero->x<girlHero->x)
                    {
                        girlHero->fx+=2;
                    }
                }
                
            }
            else
            {
                if(boyHero->x>girlHero->x)
                {
                    boyHero->fx+=2;
                }else if(boyHero->x<girlHero->x)
                {
                    boyHero->fx-=2;
                }
                boyHero->live --;
                lifeBoy->setLive(boyHero->live);
                boyHero->saveTime =0.8;
                
                Blood * blood =getBlood();
                if(blood!=0)
                {
                    blood->fx = hitPosX;
                    blood->fy= hitPosY;
                    blood->show();
                }
                //Serial3.write(1);
            }
        }
        
        
        
    }
    for (int i=0;i<bloodBuffer.size();i++)
    {
        bloodBuffer[i]->update(timeElapsed);
        
    }
    for (int i=0;i<specialAttackBuffer.size();i++)
    {
        specialAttackBuffer[i]->update(timeElapsed);
        
    }
    
    lifeBoy->update(timeElapsed);
    lifeGirl->update(timeElapsed);
*/

}