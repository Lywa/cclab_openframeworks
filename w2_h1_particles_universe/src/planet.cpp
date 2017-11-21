//
//  planet.cpp
//  w2_h1_particles_universe
//
//  Created by Carla on 20/11/2017.
//
//

#include "planet.hpp"


Planet::Planet(){
    
}

void Planet::setup(){
    //x= ofGetWidth() /2 ;
    //y= ofGetHeight() /2;
}

void Planet::update(){
    
}


void Planet::draw(){
    
    ofSetColor(255,255,255);
    ofNoFill();
    ofSetLineWidth(2);
    ofDrawCircle(ofGetMouseX(),ofGetMouseY(),dist);
    

    
    float x = ofGetMouseX() + sin(angle) * dist;
    float y = ofGetMouseY() + cos(angle) * dist;
    ofSetColor(color);
    ofFill();
    ofSetLineWidth(1);
    ofDrawCircle(x, y, size);
    
      angle += PI / speed;
}

