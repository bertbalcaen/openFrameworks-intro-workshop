#include "Wanderer.h"

Wanderer::Wanderer(){
    x = ofRandom(ofGetWidth());
    y = ofRandom(ofGetHeight());
    xNoise = ofRandom(10);
    yNoise = ofRandom(10);
    hue = ofRandom(0, 255);
    col.setHsb(hue, 200, 200, 80);
}

void Wanderer::update(){
    x += ofSignedNoise(xNoise) * 5;
    y += ofSignedNoise(yNoise) * 5;
    xNoise += 0.01;
    yNoise += 0.01;
}

void Wanderer::draw(){
    ofSetColor(col);
    ofLine(prevX, prevY, x, y);
    prevX = x;
    prevY = y;
}