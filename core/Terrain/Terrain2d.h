//
// Created by jbmdu on 14/04/2018.
//

#ifndef UNTITLED_TERRAIN2D_H
#define UNTITLED_TERRAIN2D_H


#include "Terrain.h"
#include "Obstacle2d.h"
#include "BoundingBox2d.h"
#include <string>

class Point2d;

class Terrain2d : public Terrain {
    double d_W;
    double d_H;
    BoundingBox2d d_boundingbox;
    std::vector<Point2d> d_vertices;
    std::vector<Obstacle2d> d_obstacles;
public:
    /**
     *
     * @param path relative path of the file
     */
    Terrain2d(std::string path);
};


#endif //UNTITLED_TERRAIN2D_H
