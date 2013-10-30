//
//  PixelMain.h
//  PixelGame
//
//  Created by Kris Temmerman on 15/09/13.
//  Copyright (c) 2013 Kris Temmerman. All rights reserved.
//

#ifndef PixelGame_PixelMain_h
#define PixelGame_PixelMain_h


#include "PixelRenderer.h"
#include "Stage.h"
#include "PixelGameInclude.h"


#include "Hero.h"
#include "DataThreeClose.h"
#include "DataThreeFar.h"
#include "DataCloud1.h"
#include "DataFlower.h"
#include "Cloud.h"
#include "Blood.h"
#include "Life.h"
#include "SpecialAttack.h"
#include "Vector.h"
#include "WinSprite.h"
#include "SpaceShip.h"
#include "Star.h"
#include "DecorSprite.h"
#include "Live.h"
#define STATE_INTRO 0
#define STATE_INTRO_TO_MENU 1
#define STATE_MENU 2
#define STATE_MENU_TO_GAME 3
#define STATE_GAME_START 4
#define STATE_GAME 5


#define GAME_TYPE_1P 0
#define GAME_TYPE_2P 1
#define GAME_TYPE_VS 2
class PixelMain
{
public:
    
    PixelRenderer * renderer;
    
    PixelMain();
    void setup();
    
    
    void setGameState(int state);
    
    int gameState;
    int gameType;
    
    
    void update(float timeElapsed);
 

    
    
    void draw();
    
    void setInput(int key);
    void setWin(int heroType);
    
    Stage stage2p;
    Stage stage1p;
    Stage stageVS;
    
    float switchTime;
    /*
     INTRO STUFF
     */
    ///////////////////////////////////////
    
    void setupIntro();
    void updateIntro(float timeElapsed);
    void resetIntro();
    void allocIntro();
    void deallocInto();
    float introTime;
    
    Stage stageIntro;
    Sprite * invasionText;
    SpaceShip *spaceShip;
    Sprite *pressKeyText;
    Vector <Star *> stars;
    
     Sprite * backgroundIntro;
    
    ////////////////////////////////////////
    /*
   MENU STUFF
     */
    ///////////////////////////////////////
    
    void setupMenu();
    void updateMenu(float timeElapsed);
    void menuRight();
    void menuLeft();
    void allocMenu();
    void deallocMenu();
    
    Stage stageMenu;
    Sprite * backgroundMenu;
    
    Sprite * menuItem1;
    Sprite * menuItem2;
    Sprite * menuItem3;
    
    float menuSpeed  ;   int menuPos;
    
    
    ////////////////////////////////////////
    //GAME STUFF SHARED
    void allocGame();
    void deallocGame();
    
    
    void setupGame();
    void updateGame(float timeElapsed);
    void setHeroData(Hero * hero,int type);
     void setLifeData(Life * life);
    Blood * getBlood(const Vector<Blood *> & bloods);
    SpecialAttack * getSpecialAttack(const Vector<SpecialAttack *> &attacs);
    
    
    Vector<SpecialAttack *>specialAttackBuffer1p;
    Vector<Blood *>bloodBuffer1p;
    
    Vector<SpecialAttack *>specialAttackBuffer2p;
    Vector<Blood *>bloodBuffer2p;
    
    Vector<SpecialAttack *>specialAttackBufferVS;
    Vector<Blood *>bloodBufferVS;
    
    
   void  resolveShoot(const Vector<Live *> &lives,const Vector<SpecialAttack *> &attacs);
   void  resolveAttack(const Vector<Live *> &lives);
    //shared
    PixelData * ballAttackG;
    PixelData * strokeAttackG;
    DataThreeClose *treeCloseData;
        DataThreeFar *treeFarData;
        DataCloud1 *cloudData;
        DataFlower *flowerData;

        PixelData * backGrass ;
     PixelData * cityData;
    
    //heroData
    
        PixelData * jumpDataB;
        PixelData * jumpKickDataB;
        PixelData * jumpHitDataB;
        PixelData * jumpBlockDataB;
    
    
        PixelData * crouchDataB;
        PixelData * crouchKickDataB;
        PixelData * crouchHitDataB;
        PixelData * crouchBlockDataB;
    
        PixelData * standDataB;
    
        PixelData * standKickDataB;
        PixelData * standHitData1B;
        PixelData * standHitData2B;
        PixelData * standBlockDataB;
    
    
        PixelData * walk1DataB;
        PixelData * walk2DataB;
        PixelData * walk3DataB;
    
        PixelData * deathDataB;
    PixelData * gotHit1B;
    PixelData * gotHit2B;
    
        PixelData * jumpDataG;
        PixelData * jumpKickDataG;
        PixelData * jumpHitDataG;
        PixelData * jumpBlockDataG;
    
    
        PixelData * crouchDataG;
        PixelData * crouchKickDataG;
        PixelData * crouchHitDataG;
        PixelData * crouchBlockDataG;
    
        PixelData * standDataG;
    
        PixelData * standKickDataG;
        PixelData * standHitData1G;
        PixelData * standHitData2G;
        PixelData * standBlockDataG;
    
    
        PixelData * walk1DataG;
        PixelData * walk2DataG;
        PixelData * walk3DataG;
    
        PixelData * deathDataG;
    PixelData * gotHit1G;
    PixelData * gotHit2G;
    //////////////////////lifedata
        PixelData *  boyInterData;
        PixelData *  girlInterData;
    
        PixelData * life0;
        PixelData * life1;
        PixelData * life2;
        PixelData * life3;
    
        PixelData * life4;
        PixelData * life5;
        PixelData * life6;
        PixelData * life7;
    
        PixelData * lifeGlow;
    
       
    
   
    //////////////////
    float stagefx;
    Hero * boyHero;
    Hero * girlHero;

    //GAME 1PLAYER
    void setupGame1p();
    void updateGame1p(float timeElapsed);
    void resetGame1p();
    Vector<Cloud *>clouds1p;
    
     Vector<DecorSprite *>decor1p;
    
    Hero *hero1pm;
    
    Sprite *lifeBoyHolder1p;
    Life *lifeBoy1p;
  
  Vector<Live *>live1p;
    
    
    //GAME 2 PLAYER
    
    void setupGame2p();
    void updateGame2p(float timeElapsed);
    void resetGame2p();
    Vector<Cloud *>clouds2p;
    Hero *hero2pM;
    Hero *hero2pF;
    Sprite *lifeBoyHolder2p;
    Sprite *lifeGirlHolder2p;
    Life * lifeGirl2p;
    Life *lifeBoy2p;
     Vector<Live *>live2p;
    
    //GAME VS
    
    void setupGameVS();
    void updateGameVS(float timeElapsed);
    void resetGameVS();
    Vector<Cloud *>cloudsVS;
    Hero *heroVSM;
    Hero *heroVSF;
    
    Sprite *lifeBoyHolderVS;
    Sprite *lifeGirlHolderVS;
    Life * lifeGirlVS;
    Life *lifeBoyVS;

     Vector<Live *>liveVS;
    
    
    
    void resetGame();
    bool readyToStart;
 
    
    
   
   
    
 
  
    
    int brightness;

 
    
     
////////////EASING
    
    
    
    
    //t is the current time (or position) of the tween. This can be seconds or frames, steps, seconds, ms, whatever – as long as the unit is the same as is used for the total time [3].
    //b is the beginning value of the property.
    //c is the change between the beginning and destination value of the property.
    //d is the total time of the tween.
    
    float backEaseOut(float t,float b , float c, float d) {
        float s = 1.70158f;
        return c*((t=t/d-1)*t*((s+1)*t + s) + 1) + b;
    }
    
    
    float expoEaseIn (float t,float b , float c, float d) {
        return (t==0) ? b : c * pow(2, 10 * (t/d - 1)) + b;
    }
    float expoEaseOut(float t,float b , float c, float d) {
        return (t==d) ? b+c : c * (-pow(2, -10 * t/d) + 1) + b;
    }
    
    float linearEase(float t,float b , float c, float d) {
        return c*t/d + b;;
    }
    
    
    
    
    
    
};

#endif
