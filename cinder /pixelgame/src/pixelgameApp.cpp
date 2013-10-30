




#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"


#include "PixelMain.h"
using namespace ci;
using namespace ci::app;
using namespace std;

class pixelgameApp : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );
    void keyDown(KeyEvent event);
    void keyUp(KeyEvent event);
	void update();
	void draw();
    
    bool upL;
    bool downL;
    bool rightL;
    bool leftL;
    
    bool upR;
    bool downR;
    bool rightR;
    bool leftR;
    
   
      void setKeysL();
    void setKeysR();
    double previousTime ;
    PixelMain pixelMain;
   };

void pixelgameApp::setup()
{
    setWindowSize(90*13, 16*13);
    pixelMain.setup();
    previousTime =ci::app::getElapsedSeconds();
    gl::enableVerticalSync();
}

void pixelgameApp::mouseDown( MouseEvent event )
{
}

void pixelgameApp::update()
{
    double currentTime = ci::app::getElapsedSeconds();
    
    pixelMain.update(currentTime-previousTime);
    previousTime =currentTime;
    // count++;
    //if(count>90)count =0;
   // renderer.setPixel(count,rand()%16,rand()%250,rand()%250,rand()%250);
}

void pixelgameApp::draw()
{
   
	// clear out the window with black
	gl::clear( Color( 0.3, 0.1, 0.1 ) );
    pixelMain.draw();
}

void pixelgameApp::keyDown(KeyEvent event)
{
    //console()<< KeyEvent::KEY_RIGHT << " "<< event.getCode()<<endl;
    
    if(event.getCode()==KeyEvent::KEY_ESCAPE)
    {
        //v
        pixelMain.setGameState(STATE_INTRO);
        return;
    }
    if(event.getCode()==102)
    {
        //v
        pixelMain.setInput(25);
        
    }
    if(event.getCode()==103)
    {
        //b
        pixelMain.setInput(21);
        
    }
    if(event.getCode()==104)
    {
        //n
        pixelMain.setInput(23);
        
    }
    if(event.getCode()==44)
    {
        //v
        pixelMain.setInput(5);
        
    }
    if(event.getCode()==46)
    {
        //b
        pixelMain.setInput(1);
        
    }
    if(event.getCode()==47)
    {
        //n
        pixelMain.setInput(3);
      
    }
    if(event.getCode()==KeyEvent::KEY_RIGHT && !rightR)
    {
        rightR =true;
        leftR =false;
        setKeysR();
    }
    if(event.getCode()==KeyEvent::KEY_LEFT && !leftR)
    {
        rightR =false ;
        leftR =true;
        setKeysR();
  
    }
    if(event.getCode()==KeyEvent::KEY_UP && !upR )
    {
        upR =true;
        downR =false;
       setKeysR();
    }
    if(event.getCode()==KeyEvent::KEY_DOWN && !downR)
    {
        upR =false;
        downR =true;
        setKeysR();
    }
    
    
    if(event.getCode()==KeyEvent::KEY_d && !rightL)
    {
        rightL =true;
        leftL =false;
        setKeysL();
    }
    if(event.getCode()==KeyEvent::KEY_a && !leftL)
    {
        rightL =false ;
        leftL =true;
        setKeysL();
        
    }
    if(event.getCode()==KeyEvent::KEY_z && !upL )
    {
        upL =true;
        downL =false;
        setKeysL();
    }
    if(event.getCode()==KeyEvent::KEY_s && !downL)
    {
        upL =false;
        downL =true;
        setKeysL();
    }

    
}
void pixelgameApp::keyUp(KeyEvent event)
{
    if(event.getCode()==KeyEvent::KEY_ESCAPE)
    {
    
        return;
    }
    if(event.getCode()==102)
    {
        //v
        pixelMain.setInput(24);
        
    }
    if(event.getCode()==103)
    {
        //b
        pixelMain.setInput(20);
        
    }
    if(event.getCode()==104)
    {
        //n
        pixelMain.setInput(22);
        
    }
    if(event.getCode()==44)
    {
        //v
         pixelMain.setInput(4);
        
    }
    if(event.getCode()==46)
    {
        //b
         pixelMain.setInput(0);
         
    }
    if(event.getCode()==47)
    {
        //n
         pixelMain.setInput(2);
        
    }
    
    if(event.getCode()==KeyEvent::KEY_RIGHT)
    {
        rightR =false;
        setKeysR();
    }
    if(event.getCode()==KeyEvent::KEY_LEFT)
    {
        leftR =false;
       setKeysR();
    }
    if(event.getCode()==KeyEvent::KEY_UP)
    {
        upR=false;
         setKeysR();
    }
    if(event.getCode()==KeyEvent::KEY_DOWN)
    {
        downR  =false;
    setKeysR();
    }
    
    
    
    if(event.getCode()==KeyEvent::KEY_d)
    {
        rightL =false;
        setKeysL();
    }
    if(event.getCode()==KeyEvent::KEY_a)
    {
        leftL =false;
        setKeysL();
    }
    if(event.getCode()==KeyEvent::KEY_z)
    {
        upL=false;
        setKeysL();
    }
    if(event.getCode()==KeyEvent::KEY_s)
    {
        downL  =false;
        setKeysL();
    }
   
}
void pixelgameApp::setKeysL()
{
    if(upL)
    {
        if(leftL)
        {
            pixelMain.setInput(38);
        }
        else if(rightL)
        {
            pixelMain.setInput(32);
            
        }else
        {
            pixelMain.setInput(31);
            
        }
        
    }
    else if(downL)
    {
        if(leftL)
        {
            pixelMain.setInput(36);
            
        }
        else if(rightL)
        {
            pixelMain.setInput(34);
            
        }else
        {
            pixelMain.setInput(35);
            
        }
        
        
    }
    else if(leftL)
    {
        pixelMain.setInput(37);
    }
    else if(rightL)
    {
        pixelMain.setInput(33);
        
    }
    else
    {
        
        pixelMain.setInput(30);
        
        
    }
    
    
    
    
    
    
}
void pixelgameApp::setKeysR()
{
    if(upR)
    {
        if(leftR)
        {
            pixelMain.setInput(18);
        }
        else if(rightR)
        {
         pixelMain.setInput(12);
        
        }else
        {
         pixelMain.setInput(11);
        
        }
    
    }
    else if(downR)
    {
        if(leftR)
        {
            pixelMain.setInput(16);
            
        }
        else if(rightR)
        {
            pixelMain.setInput(14);
            
        }else
        {
            pixelMain.setInput(15);
            
        }
    
    
    }
    else if(leftR)
    {
        pixelMain.setInput(17);
    }
    else if(rightR)
    {
        pixelMain.setInput(13);
        
    }
    else
    {
    
    pixelMain.setInput(10);
    
    
    }






}
CINDER_APP_BASIC( pixelgameApp, RendererGl )


/*
 00067     // Key codes
 00068     enum {
 00069         KEY_UNKNOWN     = 0,
 00070         KEY_FIRST       = 0,
 00071         KEY_BACKSPACE   = 8,
 00072         KEY_TAB         = 9,
 00073         KEY_CLEAR       = 12,
 00074         KEY_RETURN      = 13,
 00075         KEY_PAUSE       = 19,
 00076         KEY_ESCAPE      = 27,
 00077         KEY_SPACE       = 32,
 00078         KEY_EXCLAIM     = 33,
 00079         KEY_QUOTEDBL    = 34,
 00080         KEY_HASH        = 35,
 00081         KEY_DOLLAR      = 36,
 00082         KEY_AMPERSAND   = 38,
 00083         KEY_QUOTE       = 39,
 00084         KEY_LEFTPAREN   = 40,
 00085         KEY_RIGHTPAREN  = 41,
 00086         KEY_ASTERISK    = 42,
 00087         KEY_PLUS        = 43,
 00088         KEY_COMMA       = 44,
 00089         KEY_MINUS       = 45,
 00090         KEY_PERIOD      = 46,
 00091         KEY_SLASH       = 47,
 00092         KEY_0           = 48,
 00093         KEY_1           = 49,
 00094         KEY_2           = 50,
 00095         KEY_3           = 51,
 00096         KEY_4           = 52,
 00097         KEY_5           = 53,
 00098         KEY_6           = 54,
 00099         KEY_7           = 55,
 00100         KEY_8           = 56,
 00101         KEY_9           = 57,
 00102         KEY_COLON       = 58,
 00103         KEY_SEMICOLON   = 59,
 00104         KEY_LESS        = 60,
 00105         KEY_EQUALS      = 61,
 00106         KEY_GREATER     = 62,
 00107         KEY_QUESTION    = 63,
 00108         KEY_AT          = 64,
 00109
 00110         KEY_LEFTBRACKET = 91,
 00111         KEY_BACKSLASH   = 92,
 00112         KEY_RIGHTBRACKET= 93,
 00113         KEY_CARET       = 94,
 00114         KEY_UNDERSCORE  = 95,
 00115         KEY_BACKQUOTE   = 96,
 00116         KEY_a           = 97,
 00117         KEY_b           = 98,
 00118         KEY_c           = 99,
 00119         KEY_d           = 100,
 00120         KEY_e           = 101,
 00121         KEY_f           = 102,
 00122         KEY_g           = 103,
 00123         KEY_h           = 104,
 00124         KEY_i           = 105,
 00125         KEY_j           = 106,
 00126         KEY_k           = 107,
 00127         KEY_l           = 108,
 00128         KEY_m           = 109,
 00129         KEY_n           = 110,
 00130         KEY_o           = 111,
 00131         KEY_p           = 112,
 00132         KEY_q           = 113,
 00133         KEY_r           = 114,
 00134         KEY_s           = 115,
 00135         KEY_t           = 116,
 00136         KEY_u           = 117,
 00137         KEY_v           = 118,
 00138         KEY_w           = 119,
 00139         KEY_x           = 120,
 00140         KEY_y           = 121,
 00141         KEY_z           = 122,
 00142         KEY_DELETE      = 127,
 00143
 00144         KEY_KP0         = 256,
 00145         KEY_KP1         = 257,
 00146         KEY_KP2         = 258,
 00147         KEY_KP3         = 259,
 00148         KEY_KP4         = 260,
 00149         KEY_KP5         = 261,
 00150         KEY_KP6         = 262,
 00151         KEY_KP7         = 263,
 00152         KEY_KP8         = 264,
 00153         KEY_KP9         = 265,
 00154         KEY_KP_PERIOD   = 266,
 00155         KEY_KP_DIVIDE   = 267,
 00156         KEY_KP_MULTIPLY = 268,
 00157         KEY_KP_MINUS    = 269,
 00158         KEY_KP_PLUS     = 270,
 00159         KEY_KP_ENTER    = 271,
 00160         KEY_KP_EQUALS   = 272,
 00161
 00162         KEY_UP          = 273,
 00163         KEY_DOWN        = 274,
 00164         KEY_RIGHT       = 275,
 00165         KEY_LEFT        = 276,
 00166         KEY_INSERT      = 277,
 00167         KEY_HOME        = 278,
 00168         KEY_END         = 279,
 00169         KEY_PAGEUP      = 280,
 00170         KEY_PAGEDOWN    = 281,
 00171
 00172         KEY_F1          = 282,
 00173         KEY_F2          = 283,
 00174         KEY_F3          = 284,
 00175         KEY_F4          = 285,
 00176         KEY_F5          = 286,
 00177         KEY_F6          = 287,
 00178         KEY_F7          = 288,
 00179         KEY_F8          = 289,
 00180         KEY_F9          = 290,
 00181         KEY_F10         = 291,
 00182         KEY_F11         = 292,
 00183         KEY_F12         = 293,
 00184         KEY_F13         = 294,
 00185         KEY_F14         = 295,
 00186         KEY_F15         = 296,
 00187
 00188         KEY_NUMLOCK     = 300,
 00189         KEY_CAPSLOCK    = 301,
 00190         KEY_SCROLLOCK   = 302,
 00191         KEY_RSHIFT      = 303,
 00192         KEY_LSHIFT      = 304,
 00193         KEY_RCTRL       = 305,
 00194         KEY_LCTRL       = 306,
 00195         KEY_RALT        = 307,
 00196         KEY_LALT        = 308,
 00197         KEY_RMETA       = 309,
 00198         KEY_LMETA       = 310,
 00199         KEY_LSUPER      = 311,     // Left "Windows" key
00200         KEY_RSUPER      = 312,      // Right "Windows" key
00201         KEY_MODE        = 313,      // "Alt Gr" key
00202         KEY_COMPOSE     = 314,      // Multi-key compose key 
00203
00204         KEY_HELP        = 315,
00205         KEY_PRINT       = 316,
00206         KEY_SYSREQ      = 317,
00207         KEY_BREAK       = 318,
00208         KEY_MENU        = 319,
00209         KEY_POWER       = 320,      // Power Macintosh power key
00210         KEY_EURO        = 321,      // Some european keyboards
00211         KEY_UNDO        = 322,      // Atari keyboard has Undo 
00212         
00213         KEY_LAST
00214     };
 
 
 */
