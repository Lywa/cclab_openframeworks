//
//  SlitScan.hpp
//  cclab_final
//
//  Created by Carla on 03/12/2017.
//
/* SlitScan based in Tyler Herny code*/

#pragma once
#include "ofMain.h"

class SlitScan
{
public:
    
    SlitScan();
    SlitScan(int w, int h);
    
    ofFbo fbo;        // offscreen drawing buffer
    
    
    void addLine( ofTexture source );
    
    void draw(float x, float y, float w, float h);
    
    
    // bind and unbind the fbo's texture
    // to map it to meshes
    void bind();
    void unbind();
    
    ofPixels getPixels();    // read the fbo texture to pixels
    
    void setLineNum(int ln) { lineNum = ofClamp(ln, 0,480); }
    
private:
    
    int width, height;
    int lineNum;        // which line to draw to
    
    
};





