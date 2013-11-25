//
//  Alien3.h
//  PixelGameLocal
//
//  Created by Kris Temmerman on 04/11/13.
//
//

#ifndef PixelGameLocal_Alien3_h
#define PixelGameLocal_Alien3_h

#include "Alien.h"

class Alien3: public Alien
{
    
    
public:
    Alien3(){};
    void setup(){
        
        heroType=4;
       
        waitshoot =0;
        armL =new Sprite();
        armL->currentData = new DataSpaceArmL();
        addChild(armL);
            
            armR =new Sprite();
            armR->currentData = new DataSpaceArmR();
            addChild(armR);
            
            
            head =new Sprite();
            head->currentData =new DataSpaceHead();
            //head->fy =-4;
            head->fy =-1;
            addChild(head);
            
            
            
            
            
            
            ship= new Sprite();
            ship->currentData =new DataSpaceBottem();
            addChild(ship);
            //ship->fy =3;
            ship->fy =1;
            headTime =0;
            
        posTime=0;
        fxStart =fx;
        
        
        hitRect.x  =-8;
        hitRect.y =-7;
        
        hitRect.width  =16;
        hitRect.height =7;
        life=3;
        
        };
    
    virtual void reset()
    {
        fxReal =fxStart;
        isDead =false;
        life =3;
        fy =15;
         saveTime =-1;
    }
       
    float fxStart;
    void update(float timeElapsed)
    {
        
     
         if(intHidden)return;
       // if(fx >120)return;
        saveTime -=timeElapsed;
        if(isDead)
        {
            fy-=1;
            if(fy<20)intHidden =true;
            fxReal+=hitSpeed* timeElapsed;
            hitSpeed*=0.4;
            return;
        }
        
        posTime+=timeElapsed;
        if(posTime>16  )posTime =0;
        if(posTime>0 && posTime<=2)
        {
            //  ship->fy  =cubicEaseOut(posTime,1 , 2, 2);
            fxReal = cubicEaseInOut(posTime,20 , -40, 2)+fxStart;
            if(posTime<=1)
            {
                fy = cubicEaseInOut(posTime,15 , -14, 1);
            }
            
            if(posTime<=2 && posTime>=1)
            {
                fy = cubicEaseInOut(posTime-1,1 , 14, 1);
            }
        }
        if(posTime>8 && posTime<=10)
        {
            
            float tPos =posTime-8;
            fxReal = cubicEaseInOut(tPos,-20 , 40, 2)+fxStart;
            
            if(tPos<=1)
            {
                fy = cubicEaseInOut(tPos,15 , -14, 1);
            }
            
            if(tPos<2 && tPos>=1)
            {
                fy = cubicEaseInOut(tPos-1,1 , 14, 1);
            }

           
            
        }
        if(fy>14)fy=14;
        
        if(posTime>2&& posTime<=8)showHead(posTime-2);
        if(posTime>10&& posTime<=16)showHead(posTime-10);
        waitshoot-=timeElapsed;
               /*
        if(headTime<0.5 )
        {
            head->fy  =backEaseOut(headTime,-2 , -2, 0.5);
            ship->fy  =backEaseOut(headTime,1 , 2, 0.5);
            
        }else if(headTime>0.5 && headTime <1)
        {
            float armTime = headTime-0.5;
            armR->fx   =cubicEaseOut( armTime,0 ,5, 0.5);
            armL->fx   =cubicEaseOut( armTime,1 ,-5, 0.5);
                       
        }
        else  if(headTime>1.5 && headTime<3 )
        {
            int armTimeInt = (headTime-1.5)*5;
            
            if( armTimeInt%2==0)
            {
                armR->drawType =1;
                armL->drawType =1;
                armR->fx   = -4;
                armL->fx =5;
                armR->fy =head->fy-1;
                armL->fy =head->fy-2;
                
            }else
            {
                
                armR->fx   = 5;
                armL->fx = -4;
                armR->drawType =0;
                armL->drawType =0;
                
                armR->fy =head->fy-1;
                armL->fy =head->fy-2;
                
                
            }
            
            
        }
        else  if(headTime>4 && headTime<4.5 )
        {
            float armTime = headTime-4;
            
            armR->fx   =cubicEaseOut( armTime,5 ,-5,0.5);
            armL->fx   =cubicEaseOut( armTime,-4 ,5, 0.5);
            head->fy  =cubicEaseOut(armTime,-4 , 2.1, 0.5);
            ship->fy  =cubicEaseOut(armTime ,3, -2,0.5);
            
            
        }else
        {
            
                          ship->fy =1;
            head->fy =-2;
            armR->fx=0;
            armL->fx=0;
            armR->fy =head->fy-2;
            armL->fy =head->fy-2;
            
          
        }
        
        headTime+=timeElapsed;
        
        if(headTime>6)headTime=0;*/
    }
    void showHead(float headTime)
    {
        if(headTime<=0.3 )
        {
            head->fy  =cubicEaseOut(headTime,-2 , -2, 0.3);
                     
        }else if(headTime>5.7 && headTime <=6)
        {
            head->fy  =cubicEaseOut(headTime-5.7,-4 ,3, 0.3);
        
            
        }else
        {
            head->fy=-5;
        }
        if(headTime>1.5 && headTime<5 )
        {
            int armTimeInt = (headTime-1.5)*5;
            
            if( armTimeInt%2==0)
            {
                armR->drawType =1;
                armL->drawType =1;
                armR->fx   = -4;
                armL->fx =5;
                armR->fy =head->fy-1;
                armL->fy =head->fy-2;
                
            }else
            {
                if(waitshoot<0){
                    waitshoot=0.4;
                    if (drawType==1)drawType =0;
                    else drawType =1;
               startShoot =true;
                }
                armR->fx   = 5;
                armL->fx = -4;
                armR->drawType =0;
                armL->drawType =0;
                
                armR->fy =head->fy-1;
                armL->fy =head->fy-2;
                
                
            }
            armR->visible  =true;
            armL->visible  =true;

            
        }else
        {
            armR->visible  =false;
            armL->visible  =false;
        }

    
    
    }
    float waitshoot;
    float posTime;
    float headTime;
    Sprite *head;
    Sprite *ship;
    Sprite *armL;
    Sprite *armR;
    float backEaseOut(float t,float b , float c, float d) {
        float s = 1.70158f;
        return c*((t=t/d-1)*t*((s+1)*t + s) + 1) + b;
    }
    float cubicEaseOut(float t,float b , float c, float d) {
        
        return c*((t=t/d-1)*t*t + 1) + b;
    }
    float cubicEaseInOut(float t,float b , float c, float d) {
        if ((t/=d/2) < 1) return c/2*t*t*t + b;
        return c/2*((t-=2)*t*t + 2) + b;
    }
    
};



#endif
