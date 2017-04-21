#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
private:
    int size_cirle = 0;
    float *volume; //再生中の音量
    ofSoundPlayer soundPlayer;
    
    int x_circle = 0; //円の表示されるx座標
    int y_circle = 0; //円の表示されるy座標

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    ofVec2f pos[30]; //位置の配列
    int x,y;
    int randomI, randomN;
		
    ofTrueTypeFont verdana;

};
