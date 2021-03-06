#pragma once

#include "ofMain.h"
#include "solarsystem.hpp"
#include "planet.hpp"
#include "mover.hpp"
#include "asteroids.hpp"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    Planet planet;
    SolarSystem solarsystem;
    
    vector<Mover> movers;
    
    
    
    void drawBlackholes();
    void drawAsteroids();
    
    void relocateAsteroids();
    
    vector<Asteroids> asteroids;
    Asteroids blackhole;
    int numAsteroids = 15;
    
    bool blackHoleOpen;
    
    
    
    
    
};

