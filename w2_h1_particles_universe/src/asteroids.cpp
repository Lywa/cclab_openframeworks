//
//  asteroids.cpp
//  w2_h1_particles_universe
//
//  Created by Carla on 20/11/2017.
//
//

#include "asteroids.hpp"


Asteroids::Asteroids()
{
    mass = ofRandom(1, 20);
    pos.set(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
    color = ofColor(200, 200, 200);
}


Asteroids::~Asteroids()
{
    
}

void Asteroids::setup()
{
    
}

void Asteroids::update()
{
    vel += acc;
    pos += vel;
    
    acc *= 0;
}

void Asteroids::draw()
{
    ofPushMatrix();
    ofTranslate(pos);
    ofSetColor(color);
    ofDrawCircle(0, 0, mass*2.);
    ofPopMatrix();
}

void Asteroids::applyForce(ofVec3f force)
{
    // force = mass * acceleration
    // acc = force / mass
    if (mass > 0)
        acc += force / mass;
    else
        acc.set(0, 0, 0);
}

void Asteroids::applyDampingForce(float force)
{
    acc -= vel.getNormalized() * force;
    
}
