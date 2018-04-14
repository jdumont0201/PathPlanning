//
// Created by jbmdu on 13/04/2018.
//

#ifndef UNTITLED_TERRAIN_H
#define UNTITLED_TERRAIN_H

#include <vector>
#include "Box.h"

class Terrain {
    std::vector<Box> d_boxes;
public:
    Terrain();
    void acquire();
    std::vector<Box> getBoxes();
};


#endif //UNTITLED_TERRAIN_H
