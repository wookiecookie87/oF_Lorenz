#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetBackgroundColor(0);
	
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
	this->pointLogs.push_front(point);
}

//--------------------------------------------------------------
void ofApp::draw(){
	
	ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
	
	
	ofNoFill();
	//cout << x << "  " << y << "   " << z << endl;
	cam.begin();
	ofScale(10);
	ofBeginShape();
	ofColor c = ofColor(0);
	float hue = 0;
	for (ofPoint&log : this->pointLogs) {
		//ofDrawCircle(log, 0.2);
		c.setHsb(hue, 255, 255);
		ofSetColor(c);
		ofVertex(log);
		hue += 0.1;
		if (hue > 255)
			hue = 0;
	}
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