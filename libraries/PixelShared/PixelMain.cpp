//
//  PixelMain.cpp
//  PixelGame
//
//  Created by Kris Temmerman on 15/09/13.
//  Copyright (c) 2013 Kris Temmerman. All rights reserved.
//

#include "PixelMain.h"


PixelMain::PixelMain()
{
    brightness =20;
}
void PixelMain::setGameState(int state)
{

  
    if( state == STATE_INTRO)
    {
      //  Serial.print("free ram");
        //Serial.println( freeRam ());
        deallocGame();
        allocIntro();
        resetIntro();
        stageIntro.fy =0;
    }else if(state == STATE_INTRO_TO_MENU  )
    {
        switchTime =1;
        //cout << switchTime <<endl;
        allocMenu();
        
          
    
    }else if(state == STATE_MENU )
    {
        deallocInto();
        
        stageMenu.fy =0;
        
        
    }else if( state == STATE_MENU_TO_GAME)
    {
        
        allocGame();
        resetGame();
      
        switchTime =1;
        
    }else if(state == STATE_GAME )
    {
        
      // Serial.print("free ram");
        //Serial.println( freeRam ());        //stage.fx =0;
        
    }else if(state == STATE_GAME_START)
    {
          deallocMenu();
       
        //stage.fx =0;
        switchTime =1;
        
    }else if(state == STATE_GAME_OVER)
    {
        
        
        //stage.fx =0;
        switchTime =10;
        
    }
  //  cout <<state<<endl ;
  gameState =state;
}
void PixelMain::setup()
{
    renderer =new PixelRenderer();
    renderer->setup();
   
    stage1p.renderer =renderer;
    stage2p.renderer =renderer;
    stageVS.renderer =renderer;
    stageIntro.renderer =renderer;
    stageMenu.renderer =renderer;
   
    
    setupIntro();
    setupMenu();
    setupGame();
    
    setupGame1p();
   setupGame2p();
   setupGameVS();
    
    setGameState(STATE_INTRO);
    
   
       
    
   
    
}
void PixelMain::setInput(int key)
{
    
    if( gameState == STATE_INTRO)
    {
         switchTime =1;
      setGameState(STATE_INTRO_TO_MENU);
    }else if(gameState == STATE_INTRO_TO_MENU|| gameState == STATE_MENU_TO_GAME|| gameState == STATE_GAME_START)
    {
    //do nothing
    
    }else if(gameState==STATE_MENU)
    {
    
        if((key>=0 && key<6) || (key>=20 && key<26))
        {
        
        //select
            if(menuPos==0){ gameType =GAME_TYPE_1P;}
            else if(menuPos==1){ gameType =GAME_TYPE_2P;}
            else{ gameType =GAME_TYPE_VS;}
            
            
         setGameState(STATE_MENU_TO_GAME);
        
        }
        if(key==13|| key==33) menuRight();
        if(key==17|| key==37) menuLeft();
    
    }
    else if(gameState==STATE_GAME|| gameState == STATE_GAME_OVER)
    {

        if(gameType ==GAME_TYPE_1P)
        {
            boyHero =hero1pm;
           
        } else if(gameType ==GAME_TYPE_VS)
        {
            boyHero =heroVSM;
            girlHero =heroVSF;
        }else if(gameType ==GAME_TYPE_2P)
        {
        
            boyHero =hero2pM;
            girlHero =hero2pF;
        
        }

        if(key==0)boyHero->setKey(10);
        if(key==1)boyHero->setKey(11);
        if(key==2)boyHero->setKey(10);
        if(key==3)boyHero->setKey(12);
        if(key==4)boyHero->setKey(10);
        if(key==5)boyHero->setKey(13);
    
    
        if(key==10)boyHero->setKey(0);
        if(key==11)boyHero->setKey(1);
        if(key==12)boyHero->setKey(2);
        if(key==13)boyHero->setKey(3);
        if(key==14)boyHero->setKey(4);
        if(key==15)boyHero->setKey(5);
        if(key==16)boyHero->setKey(6);
        if(key==17)boyHero->setKey(7);
        if(key==18)boyHero->setKey(8);
    
        
        if(gameType !=GAME_TYPE_1P)
        {
    
            if(key==20)girlHero->setKey(10);
            if(key==21)girlHero->setKey(11);
            if(key==22)girlHero->setKey(10);
            if(key==23)girlHero->setKey(12);
            if(key==24)girlHero->setKey(10);
            if(key==25)girlHero->setKey(13);
    
    
            if(key==30)girlHero->setKey(0);
            if(key==31)girlHero->setKey(1);
            if(key==32)girlHero->setKey(2);
            if(key==33)girlHero->setKey(3);
            if(key==34)girlHero->setKey(4);
            if(key==35)girlHero->setKey(5);
            if(key==36)girlHero->setKey(6);
            if(key==37)girlHero->setKey(7);
            if(key==38)girlHero->setKey(8);
        }
    }

}
void PixelMain::update(float timeElapsed)
{
    
  
   renderer->setBrightness(brightness);
    
    if(gameState==STATE_INTRO)
    {
    
        updateIntro( timeElapsed);
        stageIntro.int_update();
        stageIntro.draw(&stageIntro);
    
    } else if(gameState==STATE_INTRO_TO_MENU)
    {
        
        updateIntro( timeElapsed);
        stageIntro.fy = linearEase(1-switchTime,0,-16,1);;
        stageIntro.int_update();
        stageIntro.draw(&stageIntro);
    //  cout << switchTime<< "-- "<< timeElapsed <<endl;
        
        updateMenu( timeElapsed);
        stageMenu.fy = stageIntro.fy +16;
        stageMenu.int_update();
        stageMenu.draw(&stageMenu);
       
        switchTime -=timeElapsed;
        if(switchTime<0)setGameState(STATE_MENU);
        
    }else if(gameState==STATE_MENU)
    {
         //renderer->setBrightness(brightness);
        updateMenu( timeElapsed);
        stageMenu.int_update();
        stageMenu.draw(&stageMenu);

        
    }else if(gameState==STATE_MENU_TO_GAME)
    {
        
        updateMenu( timeElapsed);
        stageMenu.fy = linearEase(1-switchTime,0,-16,1);;
        stageMenu.int_update();
        stageMenu.draw(&stageMenu);
        
        
        updateGame( timeElapsed);
        
        if(gameType == GAME_TYPE_1P){
        
            stage1p.fy = stageMenu.fy +16;
            stage1p.int_update();
            stage1p.draw(&stage1p);
        }
        else  if(gameType == GAME_TYPE_2P){
            
            stage2p.fy = stageMenu.fy +16;
            stage2p.int_update();
            stage2p.draw(&stage2p);
        }
        if(gameType == GAME_TYPE_VS){
            
            stageVS.fy = stageMenu.fy +16;
            stageVS.int_update();
            stageVS.draw(&stageVS);
        }
        switchTime -=timeElapsed;
        if(switchTime<0){
            setGameState(STATE_GAME_START);
            stageVS.fy =0;
            stage2p.fy =0;
            stage1p.fy =0;
        }
        
    }
    else if (gameState==STATE_GAME || gameState==STATE_GAME_START || gameState==STATE_GAME_OVER )
    {
       

        if(gameType == GAME_TYPE_1P){
                
            updateGame1p(timeElapsed);
            updateGame(timeElapsed);
            if (gameState==STATE_GAME || gameState==STATE_GAME_START || gameState==STATE_GAME_OVER ){
            stage1p.int_update();
                stage1p.draw(&stage1p);}
            
        }
        else  if(gameType == GAME_TYPE_2P){
                
            updateGame2p(timeElapsed);
            updateGame(timeElapsed);
            if (gameState==STATE_GAME || gameState==STATE_GAME_START || gameState==STATE_GAME_OVER ){
            stage2p.int_update();
                stage2p.draw(&stage2p);}
        }
        if(gameType == GAME_TYPE_VS){
                
            updateGameVS(timeElapsed);
            updateGame(timeElapsed);
            if (gameState==STATE_GAME || gameState==STATE_GAME_START || gameState==STATE_GAME_OVER ){
            stageVS.int_update();
                stageVS.draw(&stageVS);}
        }
      
    
    }
    
    
   
    
            
    
    
}
void PixelMain::setWin(int heroType)
{


}




void PixelMain::draw()
{
   
 renderer->draw();


}