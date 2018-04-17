//
// Created by jbmdu on 14/04/2018.
//

#ifndef UNTITLED_POINT2D_H
#define UNTITLED_POINT2D_H


#include "../../Terrain/Terrain3d.h"

class Point3d {
    double d_x;
    double d_y;
    double d_z;
public:
    Point3d();
    Point3d(double x, double y,double z);
    double getX();
    double getY();
    double getZ();
    void setX(double x);
    void setY(double y);
    void setZ(double z);
    /**
     * Checks whether the point is inside the free(i.e. non obstructed) area of the Terrain
     * @param B
     * @return true if the point is in the box
     */
    bool isInFreespace(Terrain3d & T);
    /**
     * Checks whether the point is inside a rectangular BoundingBox B
     * @param B
     * @return true if the point is in the box
     */
    bool isInBoundingBox(BoundingBox3d & B);
};


#endif //UNTITLED_POINT2D_H
