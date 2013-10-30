//
//  PixelMain_Game_p1.cpp
//  PixelGameLocal
//
//  Created by Kris Temmerman on 28/10/13.
//
//

#include "PixelMain.h"
void PixelMain::setupGame1p()
{
   srand (2);
    for(int i=0;i<3;i++)
    {
        DecorSprite * city  = new  DecorSprite();
        city ->currentData =cityData;
        
        city->fx = city->fxReal = rand()%300;
        
        city->fy =7;
        city->depth =0.2;
               
        decor1p.push_back(city);
    }
 srand (1);
    for(int i=0;i<20;i++)
    {
        DecorSprite * treeFar  = new  DecorSprite();
        treeFar ->currentData =treeFarData;
        treeFar ->fx  =treeFar ->fxReal = rand()%500;
        int rPos = -rand()%2;
        treeFar ->fy = -rand()%2+treeFarData->height;
        treeFar ->depth=0.3;
        if( rPos ==-1) treeFar ->depth=0.4;
      
        
        decor1p.push_back(treeFar );
    }
    
    for(int i=0;i<20;i++)
    {
        DecorSprite * treeClose  = new  DecorSprite();
      
        treeClose->currentData =treeCloseData;
        treeClose->fx = treeClose->fxReal = rand()%1000;
        int rPos = -rand()%3;
        treeClose->fy = rPos+treeCloseData->height;
        treeClose->depth =1;
        if( rPos ==-1)treeClose->depth=0.9;
        if( rPos ==-2)treeClose->depth=0.7;
               
        decor1p.push_back(treeClose );
    }
    
    for(int i=0;i<40;i++)
    {
        DecorSprite * flower  = new  DecorSprite();
        flower ->currentData =flowerData;
     
        flower->fx = flower->fxReal = rand()%1090;
        int rPos = -rand()%4;
         flower->fy = rPos+15;
         flower->depth =1;
        if( rPos ==-2)  flower->depth=0.98;
        if( rPos ==-3)  flower->depth=0.95;
       
        
        decor1p.push_back( flower);
    }
    
  
    // slow sort ;)
    bool sorted =false;
    while(!sorted){
        sorted  =true;
        for (int i=0;i<   decor1p.size()-1;i++)
        {
            if(decor1p[i]->depth >decor1p[i+1]->depth)
            {
                DecorSprite *temp = decor1p[i];
                decor1p[i] = decor1p[i+1];
                decor1p[i+1] = temp;
                 sorted  =false ;
            }
        }
    }
    for (int i=0;i<   decor1p.size()-1;i++)
    {
        stage1p.addChild( decor1p[i]);
    
    }
    
    
    for (int i=0;i<8;i++)
    {
        SpecialAttack *attack =new SpecialAttack();
        attack->ball =ballAttackG;
        attack->stroke =strokeAttackG;
        attack->setup();
        specialAttackBuffer1p.push_back(attack);
        stage1p.addChild( attack);
    }
    

    
    
    
    
     ///hero
    hero1pm =new Hero();
   // setHeroData(hero1pm,0);
    stage1p.addChild(hero1pm);
    hero1pm->setup(0);
   
    live1p.push_back(hero1pm);
    
    
    //life
    lifeBoyHolder1p =new Sprite();
    lifeBoyHolder1p->currentData =boyInterData ;
    lifeBoy1p = new Life();
    setLifeData(lifeBoy1p);
    lifeBoy1p->setup();
    lifeBoy1p->fx =0;
    lifeBoy1p->fy=-2;
    
    lifeBoyHolder1p->addChild(lifeBoy1p);
    stage1p.addChild( lifeBoyHolder1p);
    
    
         
    
}
void PixelMain::resetGame1p()
{
    lifeBoy1p->setLive(7);
    lifeBoyHolder1p->fx =-15;
    lifeBoyHolder1p->fy =16;
    hero1pm->fxReal = 20;
    hero1pm->fx =20;
    hero1pm->fy = -16;
    
    hero1pm->isAir =true;
    
}

void PixelMain::updateGame1p (float timeElapsed)
{
    if (gameState == STATE_GAME_START)
    {
        
        
        lifeBoyHolder1p->fx = linearEase(1-switchTime,-15,19,1);
               
        switchTime -=timeElapsed;
        if(switchTime<0){
            setGameState(STATE_GAME);
            lifeBoyHolder1p->fx = 4;
        }
        
        
        
        
        return;
        
    }
    
    hero1pm->update(timeElapsed);
    
    
    resolveShoot(live1p,specialAttackBuffer1p);
    
    
    
    
 ;
    for (int i=0;i<specialAttackBuffer1p.size();i++)
    {
        specialAttackBuffer1p[i]->update(timeElapsed);
    }
    
    
    
    
    
    if(hero1pm->fxReal > stagefx+50 )
    {
        stagefx += hero1pm->fxReal -( stagefx+50 );
    
    }
    else  if(hero1pm->fxReal < stagefx+15)
    {
        stagefx -= ( stagefx+15 )-hero1pm->fxReal ;
        
    }
   // if(rand()%10 ==0)cout << stagefx<<endl;
    
    hero1pm->setLevelPos(stagefx);
    
    for (int i=0;i<   decor1p.size();i++)
    {
        decor1p[i]->setLevelPos(stagefx);
    }
    for (int i=0;i<3;i++)
    {
        clouds1p[i]->update(timeElapsed);
        
    }

    
    lifeBoy1p->update(timeElapsed);
   
}