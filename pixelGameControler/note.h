#ifndef note_h
#define note_h

#include <arduino.h>

class note
{

public:
  unsigned long startTime ;
 
   unsigned long endTime;
   unsigned long notelength;
   unsigned long releaseTime;
   unsigned long duration;
   int noteLength;
   boolean isEnd;
   note() {};

   note(unsigned long _duration , float _noteTone)
  {

    notelength =1000000/_noteTone;
    duration=_duration; 
    startTime=1;
    endTime=1;
    isEnd =true;
  };
 virtual void start(unsigned long time)
  {
    startTime = time;
    endTime = time+duration+200000;
    releaseTime= time+duration;
    isEnd =false;
  };


  virtual float update(unsigned long time)
  {
    
     //return (time/200)%2  *200;
      if(time>endTime){
        
        isEnd =true;
        return 0;
      }
     /// return random()*200;
      
     unsigned long currentTime = time-startTime;
     float volume =10;
   //float rPos =time-releaseTime;
   // if(rPos>0){ volume*=rPos/200000;}
     
      return   ((float)((currentTime /notelength)%2)-0.5) *volume;
  };




};

#endif
