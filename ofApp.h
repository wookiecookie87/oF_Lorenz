#pragma once

#include <stdio.h>
#include "ofMain.h"

class ofApp : public ofBaseApp{
	private:
		float x = 0.01;
		float y = 0;
		float z = 0;

		float sigma = 10;
		float rou = 28;
		float beta = 8.0/3.0;
		std::deque<ofPoint> pointLogs;
		ofEasyCam cam;

	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);


};
