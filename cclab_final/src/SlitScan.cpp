//
//  SlitScan.hpp
//  cclab_final
//
//  Created by Carla on 03/12/2017.
//

/* SlitScan based in Tyler Herny code*/

#include "SlitScan.hpp"


SlitScan::SlitScan()
: SlitScan(640,480)    // default call alternate constructor below
{}

SlitScan::SlitScan( int w, int h )
{
    width = w;
    height = h;
    
    // always pre-allocate FBOs
    fbo.allocate( width, height, GL_RGBA);
    fbo.begin();
    ofClear(0,0,0,0);
    fbo.end();
    
    
    lineNum = 0;
}


void SlitScan::addLine( ofTexture source )
{
    fbo.begin();        // draw offscreen
    
    // draw a single line from the webcam image on our fbo
    source.drawSubsection
    (
     0, lineNum, width, 1,    // draw area (x,y,w,h)
     0, lineNum, width, 1    // source area
     );
    
    fbo.end();
    
    lineNum = (lineNum+1) % height;
    // increment lineNum by 1, and at height, reset to 0
    
}

void SlitScan::draw(float x, float y, float w, float h)
{
    fbo.draw(x,y,w,h);
}

void SlitScan::bind()
{
    fbo.getTexture().bind();
}

void SlitScan::unbind()
{
    fbo.getTexture().unbind();
}

ofPixels SlitScan::getPixels()
{
    ofPixels pix;
    fbo.readToPixels(pix);
    return pix;
}








