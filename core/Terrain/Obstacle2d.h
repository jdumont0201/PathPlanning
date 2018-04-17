//
// Created by jbmdu on 14/04/2018.
//

#ifndef UNTITLED_OBSTACLE_H
#define UNTITLED_OBSTACLE_H

#include <vector>
#include <utility>

class Point2d;

class Obstacle2d {
    std::vector<Point2d> & d_vertices;
    Obstacle2d(std::vector<Point2d> & vertices);
};


#endif //UNTITLED_OBSTACLE_H
