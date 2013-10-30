//
//  Live.h
//  PixelGameLocal
//
//  Created by Kris Temmerman on 20/10/13.
//
//

#ifndef PixelGameLocal_Life_h
#define PixelGameLocal_Life_h

class Life:public Sprite
{
public:
    Life(){currentTime=0;}
        
    PixelData * life0;
    PixelData * life1;
    PixelData * life2;
    PixelData * life3;
    PixelData * life4;
    PixelData * life5;
    PixelData * life6;
    PixelData * life7;
   
    
    PixelData * lifeGlow;
    Sprite *glow;
    float currentTime;
    
    void setup()
    {
        glow  =new Sprite();
        glow->fx =0;
         glow->fy =1;
        glow->currentData = lifeGlow;
      addChild(glow);
        glow->visible =false;
    
    }
    void setLive(int i )
    {
        
        if(i==7)currentData = life7;
        else if(i==6)currentData = life6;
        else if(i==5)currentData = life5;
        else if(i==4)currentData = life4;
        else if(i==3)currentData = life3;
        else if(i==2)currentData = life2;
        else if(i==1)currentData = life1;
        else if(i==0)currentData = life0;
        
          glow->visible =true;
        currentTime =1;
        
    }
    void update(float timeElapsed)
    {
      if(currentTime<=0)return;
        currentTime-=timeElapsed;
         if(currentTime<=0)glow->visible =false;
  
    
    }
};

#endif
