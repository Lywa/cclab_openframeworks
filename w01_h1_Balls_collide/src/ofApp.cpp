
#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(225, 225, 225);
    //ofSetFrameRate(60);
    ofSetVerticalSync(true); //sets fps to your monitor refresh rate. makes animation smoother.
    //ofSetWindowTitle("simple bouncing ball");
    ofSetCircleResolution(50);
    
    
    nBalls = 10; // the number of ball objects we want to create
    
    myBall = new ofBall*[nBalls];   // an array of pointers for the objects
    
    
    for (int i = 0; i < nBalls; i++){ //assigning values to posX and posY and radius
        int posX = ofRandom(0, 1024);
        int posY = ofRandom(0, 768);
        
        
        int radius = ofRandom(10,30);
        
        myBall[i] = new ofBall(posX,posY,radius);  //create each object from the array
        
    }
    
}


//--------------------------------------------------------------
void ofApp::update(){
    
    for (int i=0; i < nBalls; i++) {
        
        myBall[i]->update();
        
        for (int j=0; j < nBalls; j++){
            if (i != j) {
                myBall[i] -> collide(myBall[j]);
            }
            
        }
        
        
        
    }
    
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for (int i=0; i < nBalls; i++) {
        
        myBall[i]->draw();
        
        
    }
    
    
    
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
  
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}




