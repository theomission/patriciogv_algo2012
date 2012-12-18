#pragma once

#include "ofMain.h"

#include "ofxGui.h"

#include "Brush.h"

class testApp : public ofBaseApp{
public:
    void setup();
    void update();
    void draw();

    void keyPressed  (int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);

    ofxPanel        brushPanel;

    ofxIntSlider    brushWidth;
    ofxIntSlider    brushNumber;
    ofxFloatSlider  brushDamp;
    ofxFloatSlider  brushSoftness;
    ofxFloatSlider  brushHeight;

    Brush           brush;
};
