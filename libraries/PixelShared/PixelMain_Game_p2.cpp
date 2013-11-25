//
//  PixelMain_Game_p2.cpp
//  PixelGameLocal
//
//  Created by Kris Temmerman on 28/10/13.
//
//

#include "PixelMain.h"
#include "Alien1.h"
#include "Alien2.h"
#include "AlienPond.h"
#include "Alien3.h"
#include "GameOverText.h"
void PixelMain::setupGame2p()
{
    int posCity [2] = {30,150};
    for(int i=0;i<2;i++)
    {
        DecorSprite * city  = new  DecorSprite();
        city ->currentData =cityData;
        
        city->fx = city->fxReal = posCity [i];
        
        city->fy =7;
        city->depth =0.2;
        
        decor2p.push_back(city);
    }
    srand (5);
    int treePosS [15] = { 35,296,120,157,272,221,253,90,112,55,97,35,190,158,224};
    int treePosSH [15] = {-1,0,-1,-1,0,0,0,-1,-1,0,-1,-1,0,0,-1};
    
    for(int i=0;i<15;i++)
    {
        DecorSprite * treeFar  = new  DecorSprite();
        treeFar ->currentData =treeFarData;
        treeFar ->fx  =treeFar ->fxReal = treePosS[i];
        // cout << treeFar->fx<<",";
        int rPos = treePosSH[i];
        
        treeFar ->fy = -rand()%2+treeFarData->height;
        treeFar ->depth=0.3;
        if( rPos ==-1) treeFar ->depth=0.25;
        
        
        decor2p.push_back(treeFar );
    }
    
    //srand (1);
    int treePos [8] = {50,233,270,400,430,250,252,147};
    int treePosH [8] = {-2,0,-1,-2,0,-2,-1,-1};
    for(int i=0;i<8;i++)
    {
        DecorSprite * treeClose  = new  DecorSprite();
        
        treeClose->currentData =treeCloseData;
        treeClose->fx = treeClose->fxReal = treePos [i];
        // cout << treeClose->fx<<",";
        int rPos = treePosH[i]  ;
        
        treeClose->fy = rPos+treeCloseData->height-5;
        treeClose->depth =0.8;
        if( rPos ==-1)treeClose->depth=0.5;
        if( rPos ==-2)treeClose->depth=0.4;
        
        decor2p.push_back(treeClose );
    }
    srand (1);
    for(int i=0;i<20;i++)
    {
        DecorSprite * flower  = new  DecorSprite();
        flower ->currentData =flowerData;
        
        flower->fx = flower->fxReal = rand()%600;
        int rPos = -rand()%3;
        flower->fy = rPos+16;
        flower->depth =1;
        if( rPos ==-2)  flower->depth=0.98;
        if( rPos ==-3)  flower->depth=0.95;
        
        
        decor2p.push_back( flower);
    }
    int posBush [] = {60,150, 400,470};
    for(int i=0;i<4;i++)
    {
        DecorSprite * bush  = new  DecorSprite();
        
        bush->currentData =bushData;
        bush->fx = bush->fxReal = posBush[i];
        
        bush->fy = 13;
        bush->depth =1;
        decor2p.push_back( bush );
    }
    
    int posPaddo[] = {250,320,550};
    for(int i=0;i<3;i++)
    {
        DecorSprite * paddo = new  DecorSprite();
        
        paddo->currentData =paddoData;
        paddo->fx = paddo->fxReal = posPaddo[i];
        
        paddo->fy = 13;
        paddo->depth =1;
        decor2p.push_back( paddo);
    }
    
    // slow sort ;)
    bool sorted =false;
    while(!sorted){
        sorted  =true;
        for (int i=0;i<   decor2p.size()-1;i++)
        {
            if(decor2p[i]->depth >decor2p[i+1]->depth)
            {
                DecorSprite *temp = decor2p[i];
                decor2p[i] = decor2p[i+1];
                decor2p[i+1] = temp;
                sorted  =false ;
            }
        }
    }
    for (int i=0;i<   decor2p.size();i++)
    {
        stage2p.addChild( decor2p[i]);
        
    }

    
    
    int posAlienPond [2] = {193,350};
    for (int i=0;i<2;i++)
    {
        
        AlienPond *alien  = new  AlienPond ();
        alien->setup();
        alien->fx  = alien->fxReal = posAlienPond [i];
        alien->fy =16;
        aliens2p.push_back( alien);
        stage2p.addChild(   alien);
        live2p.push_back(   alien);
    }
    
    
    
    
    
    
    
    for (int i=0;i<16;i++)
    {
        SpecialAttack *attack =new SpecialAttack();
        attack->girlShoot1 = girlShoot1;
        attack->girlShoot2 = girlShoot2;
        
        attack->boyShoot1 = boyShoot1;
        attack->boyShoot2 = boyShoot2;
        
        attack->alienShoot1 = alienShoot1;
        attack->alienShoot2 = alienShoot2;

        attack->setup();
        specialAttackBuffer2p.push_back(attack);
        stage2p.addChild( attack);
    }
    int posAlien1 [4] = {290,380, 451 , 500};
    for (int i=0;i<4;i++)
    {
        
        Alien1 *alien  = new Alien1();
        
        alien->fx  = alien->fxReal = posAlien1 [i]; // rand()%200;
        alien->fy =15;
        alien->setup();
        aliens2p.push_back( alien);
        stage2p.addChild(   alien);
        live2p.push_back(   alien);
        
    }
    
    int posAlien2 [4] = {95,150, 250 , 420};
    for (int i=0;i<4;i++)
    {
        
        Alien2 *alien  = new Alien2();
        
        alien->fx  = alien->fxReal =posAlien2[i];
        alien->fy =15;
        alien->setup();//setup after fx
        aliens2p.push_back( alien);
        stage2p.addChild(   alien);
        live2p.push_back(   alien);
        
    }

   {
       alienBoss2p  = new Alien3();
        
       alienBoss2p->fx  =  alienBoss2p->fxReal=600 ;//=600;//40+ rand()%200;
          alienBoss2p->fy =15;
          alienBoss2p->setup();//setup after fx
       aliens2p.push_back(   alienBoss2p);
        stage2p.addChild(     alienBoss2p);
        live2p.push_back(     alienBoss2p);
    }

    hero2pF=new Hero();
    stage2p.addChild(hero2pF);
    hero2pF->setup(1);
    live2p.push_back(hero2pF);
    
    
    
    hero2pM=new Hero();
    stage2p.addChild(hero2pM);
    hero2pM->setup(0);
    live2p.push_back(hero2pM);
    
  

    
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

    
    waterSplash2p =new WaterSplash();
    stage2p.addChild( waterSplash2p);

    
    for (int i=0;i<8;i++)
    {
        Blood *blood =new Blood();
        blood->frame1 = frame1b;
        blood->frame2 = frame2b;
        blood->frame3 = frame3b;
        blood->setup();
        bloodBuffer2p.push_back(blood);
        
        
        
        stage2p.addChild( blood);
    }

    //gameOver
    gameOverText2p = new GameOverText();
    gameOverText2p->fy = 0;
    gameOverText2p->fx = 0;
    stage2p.addChild(   gameOverText2p );
    
  
}
void PixelMain::resetGame2p()
{
    hero2pM->fxReal = 20;
    hero2pM->fx =20;
    hero2pM->fy = -16;
    hero2pM->reset();

    hero2pF->fxReal = 27;
    hero2pF->fx =27;
    hero2pF->fy = -16;
    hero2pF->reset();
hero2pF->groundY =14;
    
    lifeBoyHolder2p->fx =-15;
    lifeBoyHolder2p->fy =16;
    lifeGirlHolder2p->fx =104;
    lifeGirlHolder2p->fy =16;
   lifeGirl2p->reset();
    lifeBoy2p->reset();
    for(int i=0;i< aliens2p.size();i++)
    {
        
        aliens2p[i]->reset();
        
    }
    hero2pF->setLevelPos(stagefx);
    
    hero2pM->setLevelPos(stagefx);
    
    for(int i=0;i< aliens2p.size();i++)
    {
        
        aliens2p[i]->setLevelPos(stagefx);
        
    }
    
    
    
    for (int i=0;i<   decor2p.size();i++)
    {
        decor2p[i]->setLevelPos(stagefx);
    }


}

void PixelMain::updateGame2p (float timeElapsed)
{
   
    if (gameState == STATE_GAME_OVER)
    {
        switchTime -=timeElapsed;
          gameOverText2p->update(switchTime);
     
        if(switchTime<0)
        {
            gameOverText2p->hide();
            setGameState(STATE_INTRO);
            return;
        }
    }
    
    else if (gameState == STATE_GAME_START)
    {
        
        
        lifeBoyHolder2p->fx = linearEase(1-switchTime,-15,19,1);
        lifeGirlHolder2p->fx = linearEase(1-switchTime,104,-19,1);
        
        switchTime -=timeElapsed;
        if(switchTime<0){
            setGameState(STATE_GAME);
            lifeBoyHolder2p->fx = 4;
            lifeGirlHolder2p->fx = 85;
        }
            for (int i=0;i<3;i++)
        {
            clouds2p[i]->update(timeElapsed);
            
        }

        
        
        
        return;
        
    }
       for(int i=0;i< aliens2p.size();i++)
    {
        
        aliens2p[i]->update(timeElapsed);
        
    }
    
    
    hero2pM->update(timeElapsed);
    hero2pF->update(timeElapsed);
    
    resolveShoot(live2p,specialAttackBuffer2p);
      checkShoot(live2p,specialAttackBuffer2p,bloodBuffer2p);
    
    
    
    ;
    for (int i=0;i<specialAttackBuffer2p.size();i++)
    {
        specialAttackBuffer2p[i]->update(timeElapsed,stagefx);
    }
    
    
    if(hero2pM->fxReal < -10 )
    {
        hero2pM->fxReal  =-10;
        hero2pM->setKey(0);
    }
    
    if(hero2pF->fxReal < -10 )
    {
        hero2pF->fxReal  =-10;
        hero2pF->setKey(0);
    }
    Hero * first;
     Hero *last;
    if(hero2pM->fxReal >hero2pF->fxReal )
    {
        first = hero2pM;
        last= hero2pF;
    }else
    {
        first = hero2pF;
        last= hero2pM;
    
    }
    
    
    
    if(first->fxReal > stagefx+60 )
    {
        //cout<<"1";
        stagefx +=first->fxReal -( stagefx+60 );
        
    } else if(first->fxReal < stagefx+30)
    {
         //cout<<"2";
        stagefx -= ( stagefx+30 )-first->fxReal;
        
    }/*else if(last->fxReal < stagefx+10 && first->fxReal<stagefx+50)
    {
         cout<<"3";
      stagefx -= ( stagefx+50 )-first->fxReal;
        
    }*/
    if(last->fxReal < stagefx+5  )
    {
       //  cout<<"4";
        last->fxReal =stagefx+5;
        
    }
      // cout<<endl;
    alienHitTest( hero2pM, aliens2p,bloodBuffer2p);
     alienHitTest( hero2pF, aliens2p,bloodBuffer2p);
    resolveAttack(live2p,bloodBuffer2p);
    
    
    
    
      hero2pF->setLevelPos(stagefx);
    
    hero2pM->setLevelPos(stagefx);
    
    for(int i=0;i< aliens2p.size();i++)
    {
        
        aliens2p[i]->setLevelPos(stagefx);
        
    }
    
    
    
    for (int i=0;i<   decor2p.size();i++)
    {
        decor2p[i]->setLevelPos(stagefx);
    }
    for (int i=0;i<3;i++)
    {
        clouds2p[i]->update(timeElapsed);
        
    }
    
    lifeBoy2p->setLife(hero2pM->life);
    lifeGirl2p->setLife(hero2pF->life);
    
    lifeBoy2p->update(timeElapsed);
    lifeGirl2p->update(timeElapsed);

    
    
    for (int i=0;i<bloodBuffer2p.size();i++)
    {
        bloodBuffer2p[i]->update(timeElapsed,stagefx);
        
    }
     waterSplash2p->update(timeElapsed,stagefx);
    if( alienBoss2p->isDead && gameState ==STATE_GAME)
    {
        gameOverText2p->show(3);
     
        setGameState(STATE_GAME_OVER);
        return;
    }
    if(hero2pM->life<=0  && hero2pF->life<=0 && gameState ==STATE_GAME)
    {
        gameOverText2p->show();
  
        setGameState(STATE_GAME_OVER); ;
    }
    

    

    
}