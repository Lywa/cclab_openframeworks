
#include "ball.h"
// based on virajcircar code for creating an array of pointers (balls).

//--------------------------------------------------------------
ofBall::ofBall(int _posX , int _posY , int _radius ){
    
    
    posX = _posX;
    posY = _posY;
    radius = _radius;
    
    
    
    
    
    speedX = ofRandom(3, 10);
    speedY = ofRandom(3, 10);
    
    
}





//--------------------------------------------------------------
void ofBall::update(){
    
    
    
    
    posX = posX + speedX;
    posY = posY + speedY;
    
    
    bool hit = false;
    ////////////////////////////////////
    
    if (posY > ofGetHeight()-radius) {
        posY = ofGetHeight()-radius;
        speedY = speedY * -1;
        hit = true;
        
        
    }
    
    
    
    ////////////////////////////////
    
    
    if (posX > ofGetWidth()-radius) {
        posX = ofGetWidth()-radius;
        speedX = speedX * -1;
        hit = true;
        
    }
    
    
    ///////////////////////////////////
    
    if (posY < radius) {
        posY = radius;
        speedY = speedY * -1;
        hit = true;
    }
    
    
    
    ////////////////////////////////////
    
    if (posX < radius) {
        posX = radius;
        speedX = speedX * -1;
        hit = true;
        
    }
    
    
    ///////////////////////////////////

    if(hit) {
        color.r = ofRandom(0, 255);
        color.g = ofRandom(0, 255);
        color.b = ofRandom(0, 255);
    }
    
}

//--------------------------------------------------------------
void ofBall::draw(){
    
    
    
    ofFill();
    ofSetColor(color.r, color.g, color.b);
   
    ofDrawCircle(posX, posY , radius);
    
    ofSetColor(color.r, color.g, color.b);
   
    
    
}

//--------------------------------------------------------------------------------------------

void ofBall::collide(ofBall* inBall){
    
    if (ofDist(inBall->posX, inBall->posY, posX, posY) < radius*2) {
        ofDrawBitmapString("crash", 150,150);
        speedX*=-1; //change X direction
        speedY*=-1; //change Y direction
        
    }
    
    
}





