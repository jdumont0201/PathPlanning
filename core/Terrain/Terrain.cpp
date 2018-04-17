//
// Created by jbmdu on 13/04/2018.
//

#include "Terrain.h"
Terrain::Terrain() {}
void Terrain::acquire() {
    d_boxes.push_back(Box3d(10,10,10,10,10,10));

}

std::vector<Box3d> Terrain::getBoxes(){
    return d_boxes;

};