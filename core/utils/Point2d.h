//
// Created by jbmdu on 14/04/2018.
//

#ifndef UNTITLED_POINT2D_H
#define UNTITLED_POINT2D_H


#include "../Terrain/Terrain2d.h"

class Point2d {
    double d_x;
    double d_y;
public:
    Point2d(double x, double y);
    double getX();
    double getY();
    void setX(double x);
    void setY(double y);

    bool isInFreespace(Terrain2d & T);
};


#endif //UNTITLED_POINT2D_H
