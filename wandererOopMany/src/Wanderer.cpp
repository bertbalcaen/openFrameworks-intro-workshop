#include "Wanderer.h"

Wanderer::Wanderer(){
    x = ofGetWidth()/2;
    y = ofGetHeight()/2;
    xNoise = ofRandom(1);
    yNoise = ofRandom(1);
}

void Wanderer::update(){
    x += ofSignedNoise(xNoise) * 5;
    y += ofSignedNoise(yNoise) * 5;
    xNoise += 0.01;
    yNoise += 0.01;
}

void Wanderer::draw(){
    ofCircle(x, y, 10);
}