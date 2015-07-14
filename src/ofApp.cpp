#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	img.loadImage("of.png");

	shad.load("noise.vert", "noise.frag");

	sound.loadSound("1.mp3");
	sound.play();

	ofLog() << "!!!!!!!!" ;

	if (vid.loadMovie("1.mov")) {
		ofLog() << "LOAD MOV OK";
	}
	else {
		ofLog() << "LOAD MOV KO";
	}
	vid.play();
}

//--------------------------------------------------------------
void ofApp::update(){
	vid.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
	img.draw(0, 0, ofGetWidth(), ofGetHeight() / 2);

	shad.begin();

	shad.setUniform1f("timeValX", ofGetElapsedTimef() * 0.1);
	shad.setUniform1f("timeValY", -ofGetElapsedTimef() * 0.18);
	shad.setUniform2f("mouse", mouseX - ofGetWidth() / 2, ofGetHeight() / 2 - mouseY);

	img.draw(0, ofGetHeight() / 2, ofGetWidth(), ofGetHeight() / 2);

	shad.end();

	vid.draw(0, ofGetHeight() / 2, ofGetWidth(), ofGetHeight() / 2);

	ofLog() << "SPCT" << ofSoundGetSpectrum(1024)[10];
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
