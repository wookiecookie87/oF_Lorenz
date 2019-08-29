#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetBackgroundColor(0);
	mesh.setMode(OF_PRIMITIVE_LINE_STRIP);
}

//--------------------------------------------------------------
void ofApp::update(){
	float dt = 0.01;
	float dx = (sigma * (y - x)) * dt;
	float dy = (x * (rou - z) - y) * dt;
	float dz = (x * y - beta * z) * dt;

	x = x + dx;
	y = y + dy;
	z = z + dz;
	
	ofPoint point = ofPoint(x, y, z);
	ofVec3f vertex(x, y, z);
	ofVec3f offSet(ofNoise(-0.5, 0.5), ofNoise(-0.5, 0.5), ofNoise(-0.5, 0.5));
	vertex += offSet;
	c.setHsb(hue, 255, 255);
	mesh.addVertex(vertex);
	mesh.addColor(c);
	hue += 0.1;
	if (hue > 255)
		hue = 0;
}

//--------------------------------------------------------------
void ofApp::draw(){
	
	ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
	//ofNoFill();
	cam.begin();
		ofScale(8);
		ofColor c = ofColor(0);
	
		ofBeginShape();
			mesh.draw();
		ofEndShape();
	cam.end();
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