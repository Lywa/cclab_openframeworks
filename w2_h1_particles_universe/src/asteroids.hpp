//
//  asteroids.hpp
//  w2_h1_particles_universe
//
//  Created by Carla on 20/11/2017.
//
//

#pragma once
#include "ofMain.h"

class Asteroids
{
public:
    float mass;
    ofVec3f pos, vel, acc;
    ofColor color;
    
    Asteroids();
    ~Asteroids();
    void setup();
    void update();
    void draw();
    void applyForce(ofVec3f force);
    void applyDampingForce(float force);
};
