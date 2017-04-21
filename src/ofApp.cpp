#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255); //背景を白に
    ofSetColor(0);
    ofSetFrameRate(40);
    
    soundPlayer.load("tofubeats_k_music.mp3");
    soundPlayer.setLoop(true);
    soundPlayer.setVolume(1.0);
    soundPlayer.play();
    
    //pink...D1474C (209, 71, 76)
    //blue...5CB7BC (92, 183, 188)
    //yellow...FFED03 (255, 237, 3)
    
    
    ofTrueTypeFont::setGlobalDpi(72);
    
    verdana.load("yasashisa.ttf", 180); // フォントのデータを指定する
    verdana.setLineHeight(24);       // 行間を指定する
    verdana.setLetterSpacing(1.0);   // 文字間を指定する

}

//--------------------------------------------------------------
void ofApp::update(){
    volume = ofSoundGetSpectrum(1);
    size_cirle = volume[0]*1500;
    
    randomI = ofRandom(10);
    randomN = ofRandom(8);
    }


//--------------------------------------------------------------
void ofApp::draw(){
    
    ofPushMatrix();
    ofFill();
    
//    ofTranslate(ofGetHeight()/2, ofGetHeight()/2);
    ofSetColor(92, 183, 188);
//    ofSetColor(209, 71, 76);
    for (int n = 0; n <= 8; n++){
        for (int i = 0; i <=10 ; i++) {
            ofDrawRectangle( ofGetWidth()/10 * i +15, ofGetHeight()/8 *n +10, 75, 75);
        }
    }
    
    ofPopMatrix();
    
//    ofSetColor(92, 183, 188);
    ofSetColor(255, 237, 3);
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, size_cirle); //ウィンドウの中心に円を表示

//    ofSetColor(255, 237, 3);
//    ofSetColor(92, 183, 188);
    ofSetColor(209, 71, 76);

    ofDrawRectangle(ofGetWidth()/10 * randomI +15, ofGetHeight()/8 *randomN +10, 75, 75);
    
    ofPushMatrix();
    ofNoFill();
    ofSetLineWidth(40);
    ofSetColor(0);
    ofDrawRectangle(75, ofGetHeight()/2 -140 , ofGetWidth()-150, 280);
    ofPopMatrix();

    ofSetColor(0); // 文字色を指定
    verdana.drawString("POSITIVE",100,  ofGetWidth()/2 - 60); // 文字とポジションを指定して描画
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'a') {
        size_cirle = size_cirle + 20;
    }
    if (key == 's') {
        size_cirle = size_cirle - 20;
    }

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if (key == 'q') {
        size_cirle = size_cirle + 20;
    }
    if (key == 'w') {
        size_cirle = size_cirle - 20;
    }
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    /*
    //円の座標をマウスの位置に
    x_circle = x;
    y_circle = y;
    //円の色を変える
    ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
     */

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
/*
    x_circle = x;
    y_circle = y;
 */
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    /*
    x_circle = ofGetWidth()/2;
    y_circle = ofGetHeight()/2;
     */

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
