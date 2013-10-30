
#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  130.81
#define NOTE_CS3 138.59

#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  261.63
#define NOTE_CS4 277.18

#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978

#define t8 100000
#define t4 t8*2
#define t2 t4*2
#define t1 t2*2

#include "note.h"
#include "DrumNote.h"
#include "music.h"


const int ledPin =12;
music mus(512+64,t8);
note at1 (t2,NOTE_C5 );
note at2 (t2,NOTE_DS5 );
note at3 (t2,NOTE_G5);
note at4 (t2,NOTE_C6 );
note at5 (t2,NOTE_DS6 );
note at6 (t2,NOTE_G6);



note a2t1 (t2,NOTE_C5 );
note a2t2 (t2,NOTE_DS5 );
note a2t3 (t2,NOTE_GS5);
note a2t4 (t2,NOTE_C6 );
note a2t5 (t2,NOTE_DS6 );
note a2t6 (t2,NOTE_GS6);


DrumNote tt2 ;

void setup() {
  
   SerialUSB.begin(57600); 
 Serial3.begin(57600); 
 int dp =3;
 int dp2 =3+2; 
 
 int dp3 =dp +6;
 int dp4 =dp2 +2; 
  int p=0;
  mus.setDrum(dp+p);
  mus.setDrum(dp2+p);
  mus.setDrum(dp3+p);
  mus.setDrum(dp4+p);
  
  mus.setNote(1+p,t4,NOTE_C3);
  mus.setNote(5+p,t4,NOTE_C4);
  mus.setNote(9+p,t4,NOTE_C3);
  mus.setNote(13+p,t4,NOTE_C4);
  
  
  p+=16;
  mus.setDrum(dp+p);
  mus.setDrum(dp2+p);

  mus.setNote(1+p,t4,NOTE_C3);
  mus.setNote(5+p,t4,NOTE_C4);
  mus.setNote(9+p,t4,NOTE_C3);
  mus.setNote(13+p,t4,NOTE_C4);
  //////////////////////////////////////1
    p+=16;
      mus.setDrum(dp+p);
     mus.setDrum(dp2+p);
        mus.setDrum(dp3+p);
     mus.setDrum(dp4+p);
   mus.setNote(1+p,t4,NOTE_CS3);
  mus.setNote(5+p,t4,NOTE_CS4);
  mus.setNote(9+p,t4,NOTE_CS3);
  mus.setNote(13+p,t4,NOTE_CS4);
  
      p+=16;
         mus.setDrum(dp+p);
     mus.setDrum(dp2+p);
    //    mus.setDrum(dp3+p);
    // mus.setDrum(dp4+p);
   mus.setNote(1+p,t4,NOTE_CS3);
  mus.setNote(5+p,t4,NOTE_CS4);
  mus.setNote(9+p,t4,NOTE_CS3);
  mus.setNote(13+p,t4,NOTE_CS4);
  
   //////////////////////////////////////1
  p+=16;
     mus.setDrum(dp+p);
     mus.setDrum(dp2+p);
        mus.setDrum(dp3+p);
     mus.setDrum(dp4+p);
  mus.setNote(1+p,t4,NOTE_C3);
  mus.setNote(5+p,t4,NOTE_C4);
  mus.setNote(9+p,t4,NOTE_C3);
  mus.setNote(13+p,t4,NOTE_C4);
  
  p+=16;
    mus.setDrum(dp+p);
     mus.setDrum(dp2+p);
    //    mus.setDrum(dp3+p);
    // mus.setDrum(dp4+p);
  mus.setNote(1+p,t4,NOTE_C3);
  mus.setNote(5+p,t4,NOTE_C4);
  mus.setNote(9+p,t4,NOTE_C3);
  mus.setNote(13+p,t4,NOTE_C4);
  
  
   //////////////////////////////////////1
   p+=16;
     mus.setDrum(dp+p);
     mus.setDrum(dp2+p);
      mus.setDrum(dp3+p);
     mus.setDrum(dp4+p);
   mus.setNote(1+p,t4,NOTE_CS3);
  mus.setNote(5+p,t4,NOTE_CS4);
  mus.setNote(9+p,t4,NOTE_CS3);
  mus.setNote(13+p,t4,NOTE_CS4);
  
      p+=16;
         mus.setDrum(dp+p);
     mus.setDrum(dp2+p);
    //  mus.setDrum(dp3+p);
    // mus.setDrum(dp4+p);
  mus.setNote(1+p,t4,NOTE_CS3);
  mus.setNote(5+p,t4,NOTE_CS4);
  mus.setNote(9+p,t4,NOTE_CS3);
  mus.setNote(13+p,t4,NOTE_CS4);
  
   //////////////////////////////////////4 ->start
    p+=16;
for(int i=0;i<2;i++)
{

  mus.setDrum(dp+p);
  mus.setDrum(dp2+p);
  mus.setDrum(dp3+p);
  mus.setDrum(dp4+p);
  mus.setNote(1+p,t4,NOTE_C3);
  mus.setNote(1+p,t4,NOTE_C4);
    
  mus.setNote(5+p,t4,NOTE_C3);
  mus.setNote(5+p,t4,NOTE_C4);
  
  mus.setNote(9+p,t4,NOTE_C3);
  mus.setNote(9+p,t4,NOTE_C4);
  mus.setNote(13+p,t4,NOTE_C3);
  mus.setNote(13+p,t4,NOTE_C4);
  
  
  mus.setNote(1+p,t2,NOTE_C5);
  mus.setNote(9+p,t2,NOTE_C6);
  
  p+=16;
  mus.setDrum(dp+p);
  mus.setDrum(dp2+p);
    //    mus.setDrum(dp3+p);
    // mus.setDrum(dp4+p);
  mus.setNote(1+p,t4,NOTE_C3);
  mus.setNote(1+p,t4,NOTE_C4);
  mus.setNote(5+p,t4,NOTE_C3);
  mus.setNote(5+p,t4,NOTE_C4);
  
  
  
   mus.setNote(9+p,t4,NOTE_C3);
   mus.setNote(9+p,t4,NOTE_C4);
   mus.setNote(13+p,t4,NOTE_C3);
   mus.setNote(13+p,t4,NOTE_C4);
 
   mus.setNote(1+p,t2,NOTE_F5);
   mus.setNote(9+p,t2,NOTE_GS5);
  
  
   p+=16;
   mus.setDrum(dp+p);
   mus.setDrum(dp2+p);
   mus.setDrum(dp3+p);
   mus.setDrum(dp4+p);
   mus.setNote(1+p,t4,NOTE_CS3);
   mus.setNote(1+p,t4,NOTE_CS4);
   mus.setNote(5+p,t4,NOTE_CS3);
   mus.setNote(5+p,t4,NOTE_CS4);
  
   mus.setNote(9+p,t4,NOTE_CS3);
   mus.setNote(9+p,t4,NOTE_CS4);
   mus.setNote(13+p,t4,NOTE_CS3);
   mus.setNote(13+p,t4,NOTE_CS4);
   
   mus.setNote(1+p,t2,NOTE_CS6);
   mus.setNote(9+p,t2,NOTE_GS5);
   
   p+=16;
   mus.setDrum(dp+p);
   mus.setDrum(dp2+p);
   mus.setDrum(dp3+p);
   mus.setDrum(dp4+p);
   
   mus.setNote(1+p,t4,NOTE_CS3);
   mus.setNote(1+p,t4,NOTE_CS4);
   mus.setNote(5+p,t4,NOTE_CS3);
   mus.setNote(5+p,t4,NOTE_CS4);
  
   mus.setNote(9+p,t4,NOTE_CS3);
   mus.setNote(9+p,t4,NOTE_CS4);
   mus.setNote(13+p,t4,NOTE_CS3);
   mus.setNote(13+p,t4,NOTE_CS4);
  
  
   mus.setNote(1+p,t2,NOTE_GS4);
   mus.setNote(9+p,t2,NOTE_GS5);
   p+=16;
}




for(int i=0;i<2;i++)
{
 mus.setDrum(dp+p);
  mus.setDrum(dp2+p);
  mus.setDrum(dp3+p);
  mus.setDrum(dp4+p);
 
 // mus.setNote(1+p,t4,NOTE_C3);
  mus.setNote(1+p,t4,NOTE_C4);   
 // mus.setNote(5+p,t4,NOTE_C3);
  mus.setNote(5+p,t4,NOTE_C4);
  
  //mus.setNote(9+p,t4,NOTE_C3);
  mus.setNote(9+p,t4,NOTE_C4);
//  mus.setNote(13+p,t4,NOTE_C3);
  mus.setNote(13+p,t4,NOTE_C4);
  
 
  
  
  mus.setNote(1+p,t2,NOTE_C5);
  mus.setNote(9+p,t2,NOTE_C6);
  
  p+=16;
  mus.setDrum(dp+p);
  mus.setDrum(dp2+p);
    //    mus.setDrum(dp3+p);
    // mus.setDrum(dp4+p);
  //mus.setNote(1+p,t4,NOTE_C3);
  mus.setNote(1+p,t4,NOTE_CS4);
  //mus.setNote(5+p,t4,NOTE_C3);
  mus.setNote(5+p,t4,NOTE_CS4);
  
  
  
   //mus.setNote(9+p,t4,NOTE_C3);
   mus.setNote(9+p,t4,NOTE_CS4);
   //mus.setNote(13+p,t4,NOTE_C3);
   mus.setNote(13+p,t4,NOTE_CS4);
 
   mus.setNote(1+p,t2,NOTE_F5);
   mus.setNote(9+p,t2,NOTE_GS5);
  
 
   p+=16;
   mus.setDrum(dp+p);
   mus.setDrum(dp2+p);
   mus.setDrum(dp3+p);
   mus.setDrum(dp4+p);
   //mus.setNote(1+p,t4,NOTE_CS3);
   mus.setNote(1+p,t4,NOTE_A3);
   //mus.setNote(5+p,t4,NOTE_CS3);
   mus.setNote(5+p,t4,NOTE_A3);
  
   //mus.setNote(9+p,t4,NOTE_CS3);
   mus.setNote(9+p,t4,NOTE_A3);
   //mus.setNote(13+p,t4,NOTE_CS3);
   mus.setNote(13+p,t4,NOTE_A3);
   
   mus.setNote(1+p,t2,NOTE_CS6);
   mus.setNote(9+p,t2,NOTE_A5);
 
   p+=16;
   mus.setDrum(dp+p);
   mus.setDrum(dp2+p);
  // mus.setDrum(dp3+p);
  // mus.setDrum(dp4+p);
   
   //mus.setNote(1+p,t4,NOTE_CS3);
   mus.setNote(1+p,t4,NOTE_GS3);
   //mus.setNote(5+p,t4,NOTE_CS3);
   mus.setNote(5+p,t4,NOTE_GS3);
  
   //mus.setNote(9+p,t4,NOTE_CS3);
   mus.setNote(9+p,t4,NOTE_GS3);
   //mus.setNote(13+p,t4,NOTE_CS3);
   mus.setNote(13+p,t4,NOTE_GS3);
  
  
   mus.setNote(1+p,t2,NOTE_GS4);
   mus.setNote(9+p,t2,NOTE_GS5);
   p+=16;

}




  
  mus.setDrum(dp+p);
  mus.setDrum(dp2+p);
  mus.setDrum(dp3+p);
  mus.setDrum(dp4+p);
  
  mus.setNote(1+p,t4,NOTE_C3);
  mus.setNote(5+p,t4,NOTE_C4);
  mus.setNote(9+p,t4,NOTE_C3);
  mus.setNote(13+p,t4,NOTE_C4);
  
  
  p+=16;
  
  mus.setDrum(dp+p);
  mus.setDrum(dp2+p);
 
  
  mus.setNote(1+p,t4,NOTE_C3);
  mus.setNote(5+p,t4,NOTE_C4);
  mus.setNote(9+p,t4,NOTE_C3);
  mus.setNote(13+p,t4,NOTE_C4);
  
  p+=16;
  
  mus.setDrum(dp+p);
  mus.setDrum(dp2+p);
  mus.setDrum(dp3+p);
  mus.setDrum(dp4+p);
  
    mus.setNote(1+p,t4,NOTE_DS3);
  mus.setNote(5+p,t4,NOTE_DS4);
  mus.setNote(9+p,t4,NOTE_DS3);
  mus.setNote(13+p,t4,NOTE_DS4);
  
  p+=16;
  
  mus.setDrum(dp+p);
  mus.setDrum(dp2+p);

  mus.setNote(1+p,t4,NOTE_DS3);
  mus.setNote(5+p,t4,NOTE_DS4);
  mus.setNote(9+p,t4,NOTE_DS3);
  mus.setNote(13+p,t4,NOTE_DS4);

    /////////////////////////////////////////
   p+=16;
    for(int i=0;i<2;i++){
  
   mus.setDrum(dp+p);
   mus.setDrum(dp2+p);
   mus.setDrum(dp3+p);
   mus.setDrum(dp4+p);
   
   mus.setNote(1+p,t4,NOTE_C3);
   mus.setNote(5+p,t4,NOTE_C3);
   mus.setNote(9+p,t4,NOTE_C3);
   mus.setNote(13+p,t4,NOTE_C3);
  
  
   mus.setNote(1+p,t2,NOTE_C5);
   mus.setNote(9+p,t2,NOTE_C6);
   p+=16;
   
   
   
   mus.setDrum(dp+p);
   mus.setDrum(dp2+p);
 
   
   mus.setNote(1+p,t4,NOTE_DS3);
   mus.setNote(5+p,t4,NOTE_DS3);
   mus.setNote(9+p,t4,NOTE_DS3);
   mus.setNote(13+p,t4,NOTE_DS3);
  
  
   mus.setNote(1+p,t2,NOTE_DS5);
   mus.setNote(9+p,t2,NOTE_G5);


   p+=16;
   mus.setDrum(dp+p);
   mus.setDrum(dp2+p);
   mus.setDrum(dp3+p);
   mus.setDrum(dp4+p);
   
   mus.setNote(1+p,t4,NOTE_F3);
   mus.setNote(5+p,t4,NOTE_F3);
   mus.setNote(9+p,t4,NOTE_F3);
   mus.setNote(13+p,t4,NOTE_F3);
  
  
   mus.setNote(1+p,t2,NOTE_C6);
   mus.setNote(9+p,t2,NOTE_AS5);
   p+=16;
   
   
   
   mus.setDrum(dp+p);
   mus.setDrum(dp2+p);
 
   
    mus.setNote(1+p,t4,NOTE_G3);
   mus.setNote(5+p,t4,NOTE_G3);
   mus.setNote(9+p,t4,NOTE_G3);
   mus.setNote(13+p,t4,NOTE_G3);
  
  
   mus.setNote(1+p,t2,NOTE_G5);
   mus.setNote(9+p,t2,NOTE_DS5);
   p+=16;}
 SerialUSB.println(p);
 
 pinMode(22, INPUT); 
 pinMode(24, INPUT); 
 pinMode(26, INPUT); 
 pinMode(28, INPUT); 
 pinMode(30, INPUT); 
 pinMode(32, INPUT); 
 pinMode(34, INPUT);
 pinMode(36, INPUT); 
 pinMode(38, INPUT); 
 pinMode(40, INPUT); 
 pinMode(42, INPUT); 
 pinMode(44, INPUT); 
analogWriteResolution(8) ;
 pinMode(DAC1, OUTPUT);

}

int btnRightBlue =0;
int btnRightRed =0;
int btnRightYellow =0;

int btnLeftBlue =0;
int btnLeftRed =0;
int btnLeftYellow =0;

int downRightState = 0; 
int upRightState = 0;
int rightRightState = 0; 
int leftRightState = 0;

int downLeftState = 0; 
int upLeftState = 0;
int rightLeftState = 0; 
int leftLeftState = 0;


int leftState=0;
int rightState=0;

unsigned long lastTime=0;

void loop() {
 
  
  if(millis()-lastTime>20)
  {
   
  
    
  
    int btnRightBlueTemp= digitalRead(22);
    if(btnRightBlueTemp!= btnRightBlue)
    {
      btnRightBlue =btnRightBlueTemp;
      send(20,btnRightBlue);
     
    }
    int btnRightRedTemp= digitalRead(24);
    if(btnRightRedTemp!= btnRightRed)
    {
      btnRightRed =btnRightRedTemp;
      send(22,btnRightRed);
    }
    int btnRightYellowTemp= digitalRead(52);
    if(btnRightYellowTemp!= btnRightYellow)
    {
      btnRightYellow =btnRightYellowTemp;
      send(24,btnRightYellow);
    
     
    }
   int btnLeftBlueTemp= digitalRead(44);
    if(btnLeftBlueTemp!= btnLeftBlue)
    {
      btnLeftBlue =btnLeftBlueTemp;
      send(0,btnLeftBlue);
    }
    int btnLeftRedTemp= digitalRead(42);
    if(btnLeftRedTemp!= btnLeftRed)
    {
      btnLeftRed =btnLeftRedTemp;
      send(2,btnLeftRed);
    }
    int btnLeftYellowTemp= digitalRead(48);
  if(btnLeftYellowTemp!= btnLeftYellow)
    {
      btnLeftYellow=btnLeftYellowTemp;
      send(4,btnLeftYellow);
    }
  
  
  
  
  downRightState = digitalRead(28);
  upRightState = digitalRead(30);
  rightRightState = digitalRead(26);
  leftRightState = digitalRead(32);
  int rightStateTemp =0;
  if(downRightState )
  {
    
    if (rightRightState )
    {
        rightStateTemp =4;
    }else if (leftRightState )
    {
        rightStateTemp =6;
    }
    else
    {
        rightStateTemp =5;
    }
  }
  else if (upRightState )
  {
    if (rightRightState )
    {
         rightStateTemp =2;
    }else if (leftRightState )
    {
       rightStateTemp =8;
    }
    else
    {
        rightStateTemp =1;
        
       // n.start(micros(),1000000/2,NOTE_E6);
    }
  }
  else if (rightRightState )
  {
   rightStateTemp =3;
  }
  else if (leftRightState )
  {
      rightStateTemp =7;
  }
  
  if(rightStateTemp != rightState)
  {
     rightState= rightStateTemp ; 
   send(30,rightState);
  }
  
  
  downLeftState = digitalRead(40);
  upLeftState = digitalRead(34);
  rightLeftState = digitalRead(38);
  leftLeftState = digitalRead(36);
   int leftStateTemp =0;
   if(downLeftState )
  {
    
    if (rightLeftState )
    {
        leftStateTemp =4;
    }else if (leftLeftState )
    {
       leftStateTemp =6;
    }
    else
    {
        leftStateTemp =5;
    }
  }
  else if (upLeftState )
  {
    if (rightLeftState )
    {
         leftStateTemp =2;
    }else if (leftLeftState )
    {
       leftStateTemp =8;
    }
    else
    {
        leftStateTemp =1;
        
       // n.start(micros(),1000000/2,NOTE_E6);
    }
  }
  else if (rightLeftState )
  {
   leftStateTemp =3;
  }
  else if (leftLeftState )
  {
      leftStateTemp =7;
  }
  
  if(leftStateTemp != leftState)
  {
     leftState= leftStateTemp ; 
     send(10,leftState);
  }
  

  lastTime =millis();

  }


 analogWrite(DAC1, mus.update(micros()));
  //analogWrite(DAC0, mus.update(micros()));
 }

void send(int type, int val)
{
 byte valb  =type+val; 
Serial3.write(valb);

Serial3.flush();




} 
