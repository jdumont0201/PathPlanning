//
// Created by jbmdu on 14/04/2018.
//

#ifndef UNTITLED_POINT2D_H
#define UNTITLED_POINT2D_H


#include "../../Terrain/Terrain2d.h"

class Point2d {
    double d_x;
    double d_y;
public:
    Point2d(double x, double y);
    double getX();
    double getY();
    void setX(double x);
    void setY(double y);
    /**
     * Checks whether the point is inside the free(i.e. non obstructed) area of the Terrain
     * @param B
     * @return true if the point is in the box
     */
    bool isInFreespace(Terrain2d & T);
    /**
     * Checks whether the point is inside a rectangular BoundingBox B
     * @param B
     * @return true if the point is in the box
     */
    bool isInBoundingBox(BoundingBox & B);
};


#endif //UNTITLED_POINT2D_H
