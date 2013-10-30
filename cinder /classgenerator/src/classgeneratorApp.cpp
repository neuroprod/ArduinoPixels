
#include <fstream>
#include "stdint.h"
#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "cinder/Utilities.h"
#include "cinder/Filesystem.h"
#include "cinder/ImageIo.h"
#include "cinder/gl/Texture.h"
using namespace ci;
using namespace ci::app;
using namespace std;

class classgeneratorApp : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
    void setFile( int w,int h, unsigned char *data,string name);
    bool alpha ;
};

void classgeneratorApp::setup()
{
    
    string filetype = ".png";
    
    fs::path p( getHomeDirectory().string() +"dropbox/pixelgame/" );
    for( fs::directory_iterator it( p ); it != fs::directory_iterator(); ++it ) {
        if( ! is_directory( *it ) )
        {
            if (filetype.compare(it->path().extension().string()) == 0)
            {
                console() << "   " << it->path().string();
          
                Surface k= Surface( loadImage(loadFile(it->path().string()) ) );
                alpha =false;
                if(k.hasAlpha())alpha =true;
                int w  =  k.getWidth();
                int h  =  k.getHeight();
                unsigned char *data =   k.getData();
               string  myString=it->path().filename().string();
                string name  = myString.substr(0, myString.size()-4);
                setFile(w,h,data,name );
              //  console() <<(int)data[0]<<" "<<(int)data[1]<<" "<<(int)data[2]<<endl;
            }
        }
    }
    
    

      
 
    
    
    
    
    
    
}
void classgeneratorApp::setFile( int w,int h, unsigned char *data,string name)
{
    std::ofstream oStream ;
    std::string filename=  getHomeDirectory().string() +"Documents/Arduino/libraries/PixelShared/Data"+ name+".h";
     console() <<"writing:  "<<filename<<" "<<endl;
    oStream.open(filename.c_str() );
     oStream << "//generated pixeldata"<< endl;
    oStream << "#ifndef _Data" <<name <<"_h"<< endl;
    oStream <<  "#define _Data" <<name <<"_h"<< endl;
     oStream <<  "#include \"PixelData.h\""<< endl;
    oStream << "class Data"<<name <<":public PixelData{ "<< endl;
    oStream << "public:"<< endl;
    
    
     oStream <<"    Data"<<name<< "()"<< endl;
     oStream << "   {"<< endl;

    oStream << "       width ="<< w<<";"<<endl;
    oStream << "        height="<< h<<";" <<endl;
    int w2  =w/2;
    
    oStream << "       centerX="<< w2<<";"<<endl;
    oStream << "        centerY="<< h<<";" <<endl;
    oStream << "        int size =width*height;"<<endl;
    oStream << "        color = new uint8_t[size*3];"<<endl;
    oStream << "        alpha = new uint8_t[size];"<<endl;
    int count=0;
    for (int j=0;j<w*h;j++)
    {
        int r =(float)data[count++]*0.85;
        int g = (float)data[count++];
        int b = (float)data[count++]*0.99;
        oStream << "        color["<< (j*3)<<"] ="<< r<<";"<<endl;
        oStream << "        color["<< (j*3+1)<<"] ="<< g<<";"<<endl;
        oStream << "        color["<< (j*3+2)<<"] ="<< b<<";"<<endl;
        if( alpha ){
        oStream << "        alpha["<< (j)<<"] ="<<  (int)data[count++]<<";"<<endl;
    
        }else
        {
         oStream << "        alpha["<< (j)<<"] =255;"<<endl;
        }
    }
    
    
     oStream << "   };"<< endl;
 
    
    
    
    
    
    
    
    oStream << "};"<< endl;
    oStream << "#endif" << endl;

    oStream.close();


}
void classgeneratorApp::mouseDown( MouseEvent event )
{
}

void classgeneratorApp::update()
{
}

void classgeneratorApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}


CINDER_APP_BASIC( classgeneratorApp, RendererGl )
