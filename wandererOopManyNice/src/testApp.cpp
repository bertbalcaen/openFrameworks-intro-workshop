#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    for (int i = 0; i < 100; i ++) {
        Wanderer wanderer;
        wanderers.push_back(wanderer);
    }
    ofSetBackgroundAuto(false);
    ofBackground(255);
    ofEnableAlphaBlending();
    ofEnableSmoothing();
}

//--------------------------------------------------------------
void testApp::update(){
    for( int i = 0; i < wanderers.size(); i++){
        wanderers[i].update();
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    for( int i = 0; i < wanderers.size(); i++){
        wanderers[i].draw();
    }
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}