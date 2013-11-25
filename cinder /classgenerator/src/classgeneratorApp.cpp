
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
    int getIndex(int r, int g,int b,int a);
    vector<int> colorData;
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
                console() << "   " << it->path().string()<<endl;;
          
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
    colorData.clear();

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
    oStream << "        indices= new uint8_t[size];"<<endl;
    //oStream << "        alpha = new uint8_t[size];"<<endl;
    int count=0;
    for (int j=0;j<w*h;j++)
    {
        int r =(float)data[count++];//*0.85;
        int g = (float)data[count++];
        int b = (float)data[count++];//*0.99;
        int a;
        if( alpha ){
           a =(int)data[count++];
            
        }else
        {
            a =255;
        }

         oStream << "        indices["<<j<<"]="<< getIndex(r,g,b,a)<<";"<<endl;
       
    }
     oStream << "        color= new uint8_t["<<colorData.size() <<"];"<<endl;
    
    
    for (int j=0;j<colorData.size();j+=4)
    {
        int r=colorData[j ];
        int g=colorData[j+1 ];
        int b=colorData[j+2 ];
        int a=colorData[j +3];
        oStream << "        color["<< (j)<<"] ="<< r<<";"<<endl;
        oStream << "        color["<< (j+1)<<"] ="<< g<<";"<<endl;
        oStream << "        color["<< (j+2)<<"] ="<< b<<";"<<endl;
        oStream << "        color["<< (j+3)<<"] ="<< a<<";"<<endl;
    }
    
    
    
     oStream << "   };"<< endl;
 
    
    
    
    
    
    
    
    oStream << "};"<< endl;
    oStream << "#endif" << endl;

    oStream.close();


}
int classgeneratorApp::getIndex(int r, int g,int b,int a)
{
    if(a==0)return 255;

    for (int j=0;j<colorData.size();j+=4)
    {
        
        if(colorData[j]==r  && colorData[j+1]==g && colorData[j+2]==b && colorData[j+3]==a )
        {
        
            return j;
        }
        
    }
   
        colorData.push_back(r );
        colorData.push_back(g  );
        colorData.push_back(b );
        colorData.push_back(a );
   
    return colorData.size()-4;
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
