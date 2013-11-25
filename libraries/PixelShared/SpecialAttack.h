//
//  SpecialAttack.h
//  PixelGameLocal
//
//  Created by Kris Temmerman on 22/10/13.
//
//

#ifndef PixelGameLocal_SpecialAttack_h
#define PixelGameLocal_SpecialAttack_h

#include "PixelGameInclude.h"
#include "Sprite.h"

class SpecialAttack:public Sprite
{
public:
    SpecialAttack(){};
    
    void setup()
    {
              isUsed =false;
        visible=false;
      
    }
    
    void start(int dir, int type)
    {
        if(type>1)
        {
            if(dir ==1) dir =0;
            else dir =1;
        }
        
        heroType =type;
        if(type ==0)
        {
            shoot1=boyShoot1  ;
            shoot2  =boyShoot2;
        
        }
        else if(type ==1)
        {
             shoot1=girlShoot1  ;
             shoot2  =girlShoot2;
            
        }else
        {
            shoot1=alienShoot1  ;
            shoot2  =alienShoot2;
        
        }

        
        
        visible=true;
        speed =40;
       
        if(dir==1){
            
            speed =-speed;
        }
        lastTime =2;
        isUsed =true;
        _dir =dir;
        drawType =dir;
       // speed = rand()%4 +3;
    }
    void hit()
    {
        lastTime=0;
        
        isUsed =false;
        visible=false;
       
    }
    void update(float timeElapsed,float stagefx)
    {
        if(visible==false)return;
       fxReal+=speed*timeElapsed;
        lastTime -=timeElapsed;
        if(x%4==0 || x%4==1)
        {
            currentData = shoot1;
          
        }else
        {
              currentData  = shoot2;
        }
        
        if(x<-5 || x>90)
        {
            isUsed =false;
            visible=false;
        }
        setLevelPos(stagefx);
    }
    void setLevelPos(float stagefx)
    {
        fx = fxReal -stagefx;
        
        
    }
    float fxReal;
    
    float lastTime;
    float speed;
    bool isUsed;
    PixelData *  shoot1 ;
    PixelData *  shoot2 ;
    
    
    PixelData *  girlShoot1 ;
    PixelData *  girlShoot2 ;
    
    PixelData * boyShoot1 ;
    PixelData * boyShoot2;
    
    PixelData * alienShoot1;
    PixelData * alienShoot2;
    int _dir;
    int heroType;
   
   
};


#endif
