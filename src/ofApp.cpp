#include "ofApp.h"
#include <random>

using namespace std;

//--------------------------------------------------------------
void ofApp::setup(){
jewel.load("diamond.png");// image to use (must be stored in "random/bin/data" folder)
// set of x-coordinates for jewel
 //set of y-coordinates for jewel

std::random_device rd;
std::mt19937 eng1(rd());

std::uniform_int_distribution<> disx(0,1200);
std::uniform_int_distribution<> disy(0,970);
//uniform distribution above

std::mt19937 eng2(1337);

int meanx =1000;
int sdx=15;

int meany =800;
int sdy=15;

std::normal_distribution<float> disx2(meanx,sdx);
std::normal_distribution<float> disy2(meany,sdy);
//normal distribution above

for (int i=0; i<20; i++){
	X.push_back(disx2(eng2));
	Y.push_back(disy2(eng2));
   }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
ofBackground(0);

for(auto i = 0u; i < X.size(); i++)
 {
   jewel.draw(X[i], Y[i]);
 }
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
