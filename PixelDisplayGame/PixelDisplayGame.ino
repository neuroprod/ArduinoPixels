







#ifndef PSTR
 #define PSTR // Make Arduino Due happy
#endif
#ifndef ARDUINOGAME
 #define ARDUINOGAME// Make Arduino Due happy
#endif

//#include <Adafruit_NeoPixel.h>

#include <Hero.h>
#include <PixelMain.h>
#include <PixelGameInclude.h>
#include <PixelRenderer.h>
PixelMain pixelMain;
int count =0;
unsigned long secTime=0;
unsigned long lastTime=0;
boolean chekBrightness =true;
void setup(){
     Serial.begin(57600);
     Serial3.begin(57600);
     Serial.println("start2");
   
   pixelMain.setup();
secTime =millis();
lastTime =millis(); 
}
  int incomingByte = 0;
void loop() {

  if(chekBrightness)
  {
    
       pixelMain.brightness = analogRead(0)/4;
  }
  
  unsigned long  currentTime =millis();
  float timestep  = currentTime-lastTime;
  lastTime = currentTime;
  
  
  
  
   if (Serial3.available() > 0) 
   {
              // chekBrightness =false;
                incomingByte = Serial3.read();
                Serial.println((int)incomingByte);
                pixelMain.setInput((int)incomingByte);
              
                
    }

    pixelMain.update(timestep /200);
    pixelMain.draw();
}
  
