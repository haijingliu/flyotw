#include "testApp.h"

float circleNum;

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetVerticalSync(true);
   
    ofSetCircleResolution(1000);
    ofBackground(255, 255, 255);
    
    ofEnableAlphaBlending();
    ofEnableSmoothing();
    
    
}

//--------------------------------------------------------------
void testApp::update(){
   

    
    ofSetHexColor(ofGetSeconds()*0xEE01B);

    
    
    

}

//--------------------------------------------------------------
void testApp::draw(){
    
    
    for (int i =1; i < 100; i++){
        
        ofCircle(90*i,ofGetWindowHeight()/2,ofRandomf()*ofGetMouseX()/600*ofGetSeconds());
    
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
