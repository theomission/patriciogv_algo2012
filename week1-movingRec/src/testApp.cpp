#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetFrameRate(24);
    ofSetVerticalSync(true);
    
    width = 640;
    height = 480;
    
    videoIn.initGrabber(width , height);
    
    sMotion.allocate(width, height);
}

//--------------------------------------------------------------
void testApp::update(){
    if (videoIn.isFrameNew()){
        sMotion.addFrame( videoIn.getPixels() );
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    ofBackground(0);
    
    videoIn.draw(0, 0);
}

//--------------------------------------------------------------
void testApp::exit(){
    sMotion.save("movie");
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