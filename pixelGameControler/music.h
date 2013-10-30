#ifndef music_h
#define music_h

#include <arduino.h>
#include "note.h"
class music
{

public:
  note ** track1;
  note ** track2;
  note ** track3;
  note ** track4;
  note ** currentNotes;
  int trackSteps;
  int currentStep;
  int noteBufferSize;
  unsigned long stepLength;
  unsigned long nextsteptime;
  music(int numTrackSteps,unsigned _stepLength)
  {
    trackSteps=numTrackSteps;
    noteBufferSize =10;
    track1 =new note*[trackSteps];
    track2 =new note*[trackSteps];
    track3 =new note*[trackSteps];
    track4 =new note*[trackSteps];
    for(int i=0;i<trackSteps ;i++)
    {
      track1[i] =NULL;
      track2[i] =NULL;
        track3[i] =NULL;
         track4[i] =NULL;
    }
    currentNotes=new note*[noteBufferSize];
    for(int i=0;i<noteBufferSize ;i++)
    {
      currentNotes[i] =NULL;
    }
    
   // track1[0]=new note(1000000/8,NOTE_E6);
   // track1[4]=new note(1000000/2,NOTE_D6);
   // track1[8]=new note(1000000/8,NOTE_E6);
   // track1[10]=new note(1000000/4,NOTE_F6);
   // track1[14]=new note(1000000/8,NOTE_E4);
    currentStep=300;
    stepLength = _stepLength;
    
    nextsteptime =millis()+stepLength;
  };
 
   void setDrum(int pos)
  {
    
    pos-=1;
    if(track1[pos]==NULL){
        track1[pos]=new DrumNote();
    }else if(track2[pos]==NULL){
        track2[pos]=new DrumNote();
    }else if(track3[pos]==NULL){
        track3[pos]=new DrumNote();
    }else if(track4[pos]==NULL){
        track4[pos]=new DrumNote();
    }
  }
  void setNote(int pos,unsigned long _duration , float _noteTone)
  {
    
    pos-=1;
    if(track1[pos]==NULL){
        track1[pos]=new note(_duration,_noteTone);
    }else if(track2[pos]==NULL){
        track2[pos]=new note(_duration,_noteTone);
    }else if(track3[pos]==NULL){
        track3[pos]=new note(_duration,_noteTone);
    }else if(track4[pos]==NULL){
        track4[pos]=new note(_duration,_noteTone);
    }
  }

  int update(unsigned long time)
  {
    if(time>=nextsteptime){
     
      currentStep++;
     // SerialUSB.println("next");
      if(currentStep>=trackSteps)currentStep=0;
      addNote(track1[currentStep],time);
      addNote(track2[currentStep],time);
     addNote(track3[currentStep],time);
      addNote(track4[currentStep],time);
      //SerialUSB.println("next");
        nextsteptime +=stepLength;
    }
    float a =0;
    int count=0;
    for (int i=0;i<noteBufferSize;i++)
    {
      if(currentNotes[i]!=NULL)
      {
        if(!currentNotes[i]->isEnd)
        {
          a+=currentNotes[i]->update(time);
          count++;
          //if(a>100)a=100;
        }
      }
    }
   
   a+=125;
   if(a<0)a =0;
   if(a>255)a =255;
    return a;
  };

  void addNote(note *n,unsigned long time)
  {
      if(n==NULL)return;
      n->start(time);
     for (int i=0;i<noteBufferSize;i++)
     {
        if(currentNotes[i]==NULL)
        {
          currentNotes[i]=n;
          return;
        } 
         if(currentNotes[i]->isEnd)
        {
          currentNotes[i]=n;
          return;
        } 
     }
  
  }


};

#endif
