

#include "ofMain.h"

class ofBall{
    
public:
    
    //methods
    void setup();
    void update();
    void draw();
    
    //constructor
    
    ofBall(int posX, int posY, int radius );
    
    //variables
    
    int speedX;
    int speedY;
    int posX;
    int posY;
    int radius;
    ofColor color;
    
    
    void collide(ofBall* inBall);
};





