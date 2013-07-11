#include "Mover.h"

Mover::Mover(){
    
    x = ofGetWidth()/2;
    y = ofGetHeight()/2;
    color.set(ofRandom(255), ofRandom(255), ofRandom(255));
    
}

void Mover::update(){
    
    // The nature of code
    // ofRandom()
    if(ofRandom(1) < .5){
        x ++;
    } else {
        x --;
    }
    if(ofRandom(1) < .5){
        y ++;
    } else {
        y --;
    }
    
}

void Mover::draw(){
    ofSetColor(color, 50);
    ofCircle(x, y, 5);
}
