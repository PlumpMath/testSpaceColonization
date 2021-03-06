//
//  leaf.cpp
//  testSpaceColonization
//
//  Created by DavidePrati on 06/09/16.
//
//

#include "leaf.h"
Leaf::Leaf(){
    pos = ofVec3f(ofRandom(ofGetWidth()),
                  ofRandom(0, ofGetHeight()/2), 0);
}

void Leaf::draw(){
    ofDrawCircle(pos.x, pos.y, 20);
}

ofVec3f Leaf::getPosition(){
    return pos;
}
