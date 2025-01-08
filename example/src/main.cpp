#include "ofMain.h"
#include "ofApp.h"
//#include "ofAppGlutWindow.h"

//========================================================================
int main( ){

//    ofAppGlutWindow window;
    ofGLWindowSettings settings;
    settings.setSize(640, 480);
    settings.windowMode = OF_WINDOW;
//	ofSetupOpenGL(&window, 640,480, OF_WINDOW);			// <-------- setup the GL context

    auto window = ofCreateWindow(settings);
	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(window, make_shared<ofApp>());
    ofRunMainLoop();
}
