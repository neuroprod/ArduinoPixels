//
//  npRect.h
//  PixelGameLocal
//
//  Created by Kris Temmerman on 28/10/13.
//
//

#ifndef PixelGameLocal_npRect_h
#define PixelGameLocal_npRect_h

class npRect
{

public:
    npRect()
    {
    
        isHit =false;
        x=0;
        y=0;
        width=0;
        height=0;
    }
    float x;
    float y;
    float width;
    float height;
    bool isHit;
    
    void setType(int heroType, int move,int draw)
    {
        if(heroType==0)
        {
        
            if(move==0)
            {
                width =5;
                height = 7;
                
               x =-3;
                y = -8;

            
            }else
            {
                width =5;
                height = 4;
                
                x =-3;
                y = -5;

            
            
            }
        
        }else
        {
        
            if(move==0)
            {
                width =5;
                height = 7;
                
                x =-3;
                y = -8;

                
            }else
            {
                
                width =5;
                height = 4;
                
                x =-3;
                y = -5;
                

                
                
            }
            if(draw==0)x+=1;
            else if(draw==1)x-=1;
        
        
        }
    
    
    
    }
    
   
};

#endif
