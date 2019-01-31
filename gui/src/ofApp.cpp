#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	logo.load( "TWEET.png");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(0, 132, 180); //LOGO BAR
	ofDrawRectangle(0,0,1025,80);
	logo.draw(510, 5 ,80,70);

	ofSetColor(232,245, 253); // BUTTON BAR
	ofDrawRectangle(0, 80, 1025, 40);
	
	//BUTTONS
	ofSetColor(0, 132, 180);
	ofDrawRectRounded(200, 84 , 50, 30, 20);
	ofSetColor(0, 132, 180);
	ofDrawRectRounded(300, 84 , 50, 30, 20);
	ofSetColor(0, 132, 180);
	ofDrawRectRounded(400, 84, 50, 30, 20);
	ofSetColor(0, 132, 180);
	ofDrawRectRounded(500, 84, 50, 30, 20);
	ofSetColor(0, 132, 180);
	ofDrawRectRounded(600, 84, 50, 30, 20);
	ofSetColor(0, 132, 180);
	ofDrawRectRounded(700, 84, 50, 30, 20);
	ofSetColor(0, 132, 180);
	ofDrawRectRounded(800, 84, 50, 30, 20);

	//MAIN TWEETS
	ofSetColor(51, 204, 255);
	ofDrawRectangle(0, 120, 825, 350);
	ofSetColor(0, 0, 0);
	ofDrawBitmapString("text, text, texty, text, text ,text ,text ,texing ,text ,tweet ,text", 50, 140);
	//MAIN TWEETS 2
	ofSetColor(221, 238, 246);
	ofDrawRectangle(0, 470, 825, 350);

	//RIGHT SIDE BAR // TOTAL NUMBER BAR.
	ofSetColor(0, 172, 237);
	ofDrawRectangle(825, 120, 200,800);



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
