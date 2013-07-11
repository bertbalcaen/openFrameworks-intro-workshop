#pragma once

#include "ofMain.h"

class Wanderer {

    
public:
    Wanderer();
    void update();
    void draw();
    float x, y, prevX, prevY, xNoise, yNoise;
    int hue;
    ofColor col;
};