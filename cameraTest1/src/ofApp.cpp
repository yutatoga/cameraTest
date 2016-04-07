#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(ofColor::black);
    
    camera.setPosition(0, 0, 100);
    camera.lookAt(ofVec3f(0, 0, 0));
    camera.setTarget(box.getPosition());
    
    light.setOrientation(ofVec3f(45, 0, 0));
    light.setDiffuseColor(ofFloatColor(1.0, 0.0, 0.0));
    light.setSpecularColor(ofFloatColor(0.0, 1.0, 0.0));
    light.setAmbientColor(ofFloatColor(0.0, 0.0, 1.0));
    light.setDirectional();
    
    ofEnableDepthTest();
    
    box.set(30, 30, 30);
    box.setPosition(0, 0, 0);
    
    // color of material for each material type
    material.setShininess(64); // shininess is a value between 0 - 128, 128 being the most shiny //
    material.setSpecularColor(ofFloatColor(1.0, 1.0, 1.0));
    material.setDiffuseColor(ofFloatColor(1.0, 1.0, 1.0));
    material.setAmbientColor(ofFloatColor(1.0, 1.0, 1.0));
}

//--------------------------------------------------------------
void ofApp::update(){
    float x = camera.getPosition().x;
    camera.setPosition(++x, camera.getPosition().y, camera.getPosition().z);
    camera.lookAt(ofVec3f(0, 0, 0)); // = camera.setTarget(ofVec3f(0, 0, 0));
}

//--------------------------------------------------------------
void ofApp::draw(){
    camera.begin();{
        light.enable();{
            material.begin();{
                // draw box
//                box.draw();
//                box.drawAxes(100);
                
                // draw sphere
                sphere.draw();
                sphere.drawAxes(100);
            }material.end();
        }light.disable();
    }camera.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
