#pragma once

#include "ofMain.h"

class Mover{
    
public:
  
    int x;
    int y;
    ofColor color;

    Mover();
    void update();
    void draw();
    
};
