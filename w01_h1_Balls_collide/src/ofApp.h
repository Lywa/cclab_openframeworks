
#ifndef _TEST_APP
#define _TEST_APP


#include "ofMain.h"
#include "ball.h"





class ofApp : public ofBaseApp{
    
public:
    
    //methods
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
    
    //declaring the object
    
    ofBall **myBall;// creating an array of pointers
    int nBalls;
    
    
    
};

#endif


