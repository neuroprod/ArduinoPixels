//
//  Live.h
//  PixelGameLocal
//
//  Created by Kris Temmerman on 29/10/13.
//
//

#ifndef PixelGameLocal_Live_h
#define PixelGameLocal_Live_h
#include "Sprite.h"
class Live :public Sprite
{

public:
    Live(){startShoot =false;hitSpeed =0;hitFall=0;saveTime =0;};
    virtual void setDead(){isDead =true;};
    
    float speed;
    bool startShoot;
    int heroType;
    int attackType;
    int hitX;
    int hitY;
    bool isDead;
    int life;
    float saveTime;
    float hitSpeed;
    int hitFall;
};

#endif
