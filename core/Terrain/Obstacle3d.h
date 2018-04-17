//
// Created by jbmdu on 14/04/2018.
//

#ifndef UNTITLED_OBSTACLE_H
#define UNTITLED_OBSTACLE_H

#include <vector>
#include <utility>

class Point3d;

class Obstacle3d {
    std::vector<Point3d> & d_vertices;
    Obstacle3d(std::vector<Point3d> & vertices);
};


#endif //UNTITLED_OBSTACLE_H
