//
//
//  Created by DavidePrati on 06/09/16.
//
//

#pragma once

#include "ofMain.h"
#include "leaf.h"
#include "branch.h"

class Tree {

public:
    Tree();
    void draw();
    
private:
    vector<Leaf> leaves;
    std::vector<shared_ptr<Branch> > branches;
    int n_leaves = 5;
    int max_dist = 20;
    int min_dist = 13;
};
