#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    size=30;
    counter=0;
    myCenter={size*NUM/2,size*NUM/2};
    for(int x=0; x<NUM; x++){
        for(int y=0; y<NUM; y++){
            posV[x][y]={x*size,y*size};
        }
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    counter++;
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int x=0; x<NUM; x++){
        for(int y=0; y<NUM; y++){
            float dist=glm::distance(posV[x][y], myCenter);
            if(dist>0){
                dist-=counter;
                //is the same as: dist=dist-counter;
            }
            float myColor=ofMap(dist,0,size*NUM/2,0,255);
            ofSetColor(0, 0, myColor);
            ofDrawRectangle(posV[x][y],size,size);
        }
    }
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
    counter=0;
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
