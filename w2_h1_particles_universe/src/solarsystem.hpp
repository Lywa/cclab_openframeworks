//
//  solarsystem.hpp
//  w2_h1_particles_universe
//
//  Created by Carla on 20/11/2017.
//
//


#pragma once
#include "ofMain.h"
#include "planet.hpp"
#include "asteroids.hpp"

class SolarSystem{
    
public:
    
    SolarSystem();
    
    void setup();
    void update();
    void draw();
    
    
    ofColor color;
    float x, y;
    Planet planet;
    Planet planet2;
    Planet planet3;
    Planet planet4;
    
    
    
    
    
    
};
