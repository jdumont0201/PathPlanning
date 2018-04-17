//
// Created by jbmdu on 13/04/2018.
//

#ifndef UNTITLED_TERRAIN_H
#define UNTITLED_TERRAIN_H

#include <vector>
#include "Box3d.h"

class Terrain {
    std::vector<Box3d> d_boxes;
public:
    Terrain();
    void acquire();
    std::vector<Box3d> getBoxes();
};


#endif //UNTITLED_TERRAIN_H
