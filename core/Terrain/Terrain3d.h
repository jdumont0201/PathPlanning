//
// Created by jbmdu on 14/04/2018.
//

#ifndef UNTITLED_TERRAIN2D_H
#define UNTITLED_TERRAIN2D_H


#include "Terrain.h"
#include "Obstacle.h"
#include "BoundingBox3d.h"
#include <string>

class Point3d;

class Terrain3d : public Terrain {
    double d_W;
    double d_H;
    double d_D;
    BoundingBox3d d_boundingbox;
    std::vector<Point3d> d_vertices;
    std::vector<Obstacle> d_obstacles;
public:
    /**
     *
     * @param path relative path of the file
     */
    Terrain3d(std::string path);
};


#endif //UNTITLED_TERRAIN2D_H
