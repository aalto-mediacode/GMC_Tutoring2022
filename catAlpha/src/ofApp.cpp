#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    myCat.load("cat.jpg");
    myPixels.allocate(myCat.getWidth(), myCat.getHeight(), OF_PIXELS_RGBA);
    newPixels.allocate(myCat.getWidth(), myCat.getHeight(), OF_PIXELS_RGBA);
    myTexture.allocate(myPixels);

    myPixels = myCat.getPixels();

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    myCat.draw(0,0);
    for(int x=0;x<myCat.getWidth();x++){
        for(int y=0;y<myCat.getHeight();y++){
            ofColor originalColor = myPixels.getColor(x,y);
            ofColor newColor = originalColor;
            float limit=20;
            if(originalColor.r<limit && originalColor.g<limit && originalColor.b<limit){
                newColor.a = 0;
            }
            newPixels.setColor(x, y, newColor);
        }
    }
    myTexture.loadData(newPixels);
    myTexture.draw(500,0);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
