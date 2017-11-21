//
//  planet.hpp
//  w2_h1_particles_universe
//
//  Created by Carla on 20/11/2017.
//
//


#pragma once
#include "ofMain.h"

class Planet{

public:
    
    Planet();
    
    void setup();
    void update();
    void draw();
    void mousePressed();
    
    
    ofColor color;
    float x, y;
    float size;
    float angle = 0;
    float dist = 50;
    float speed = 100;
    float mouseX, mouseY;






};
