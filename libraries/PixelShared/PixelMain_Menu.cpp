//
//  PixelMain_Menu.cpp
//  PixelGameLocal
//
//  Created by Kris Temmerman on 25/10/13.
//
//

#include "PixelMain.h"

#include "DataBackSky.h"
#include "DataMenuMain.h"
#include "DataMenuSelect1.h"
#include "DataMenuSelect2.h"
#include "DataMenuSelect3.h"
#include "DataBackSky.h"
void PixelMain::setupMenu()
{
    
    backgroundMenu= new  Sprite();
    backgroundMenu->drawType =3;
    backgroundMenu->currentData =new DataBackSky();
    stageMenu.addChild(backgroundMenu);
    Sprite *menuBack  =new Sprite();
    menuBack->currentData = new DataMenuMain();
    menuBack->fx =45;
      menuBack->fy =11;
    stageMenu.addChild(menuBack);
    
    
    menuItem1 =new Sprite();
    //menuItem1->currentData  = new  DataMenuSelect1();
    menuItem1->fx =12;
    menuItem1->fy =12;
    
    stageMenu.addChild(menuItem1);
    
    menuItem2 =new Sprite();
    menuItem2->visible =false;
    //menuItem2->currentData  = new  DataMenuSelect2();
    menuItem2->fx =44;
    menuItem2->fy = 12;
    stageMenu.addChild(menuItem2);

    menuItem3 =new Sprite();
        menuItem3->visible =false;
   // menuItem3->currentData  = new DataMenuSelect3();
    menuItem3->fx =77;
    menuItem3->fy = 12;
    
    stageMenu.addChild(menuItem3);

    menuPos=0;
}
void PixelMain::allocMenu()
{
   
    if(menuItem1->currentData==0){
        menuItem1->currentData  = new  DataMenuSelect1();
        menuItem2->currentData  = new  DataMenuSelect2();
        menuItem3->currentData  = new DataMenuSelect3();
    }

}
void PixelMain::deallocMenu()
{
 
    delete    menuItem1->currentData  ;
    delete   menuItem2->currentData  ;
    delete  menuItem3->currentData ;
    menuItem1->currentData  = 0;
    menuItem2->currentData  = 0;
    menuItem3->currentData  = 0;
   
}
void PixelMain::menuRight()
{
   
  
    menuPos++;
    menuItem1->visible =false;
    menuItem2->visible =false;
    menuItem3->visible =false;
  
    
    if(  menuPos>2){
        menuPos =0;
        
    }
    
    if(menuPos==0 )
    {
        menuItem1->visible =true ;
    }
    else  if(menuPos==1  )
    {
        menuItem2->visible =true ;
    }
    else if(menuPos==2 )
    {
        menuItem3->visible =true ;
    }

    

}void PixelMain::menuLeft()
{
  
    menuItem1->visible =false;
    menuItem2->visible =false;
    menuItem3->visible =false;
    menuPos--;
    
    if(  menuPos<0){
        menuPos =2;
         
    }
    
    if(menuPos==0 )
    {
             menuItem1->visible =true ;
    }
    else  if(menuPos==1  )
    {
        menuItem2->visible =true ;
    }
    else if(menuPos==2 )
    {
             menuItem3->visible =true ;
    }

   //   cout << "gDown"<<  menuPos<< endl;
}
void PixelMain::updateMenu(float timeElapsed)
{
    
    
    
     
    
}