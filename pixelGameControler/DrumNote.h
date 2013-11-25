
#ifndef drumnote_h
#define drumnote_h

#include <arduino.h>

class DrumNote :public note
{

  public:
    DrumNote()
    {  
      isEnd =true; 
      startTime=1;
      endTime=1;
      count=0;
      modulus=2;
      lenght = 300000;
      power =2;
      masterVol =0.5;
      
      
    };
    void set(int _modulus,float _masterVol,int _lenght,int _power)
    {
      modulus =_modulus;
      masterVol =_masterVol;
      lenght =_lenght;
      power =_power;
    
    }
    virtual void start(unsigned long time)
    {
      startTime = time;
      endTime = time+lenght;
   
      isEnd =false;
    };

   virtual float update(unsigned long time)
   {
    
    
      if(time>endTime){
        
        isEnd =true;
        return 0;
      }
   
      
         unsigned long currentTime = time-startTime;
         float volume =1.0f-((float)currentTime/lenght);
         if(volume>1)volume=1;
         out=random(0,70*pow(volume,power)  -0.5)* masterVol;
     
      
     count++;
     
     return out;   
  };
  int count;
  float out;
  float masterVol;
  int modulus;
  int lenght;
  int power;
};

#endif
