//
// Created by jbmdu on 13/04/2018.
//

#include "Terrain.h"
Terrain::Terrain() {}
void Terrain::acquire() {
    d_boxes.push_back(Box(10,10,10,10,10,10));

}

std::vector<Box> Terrain::getBoxes(){
    return d_boxes;

};