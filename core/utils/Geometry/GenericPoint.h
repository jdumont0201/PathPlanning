//
// Created by jean on 17/04/18.
//

#ifndef UNTITLED_GENERICPOINT_H
#define UNTITLED_GENERICPOINT_H

#include "../../Terrain/Terrain2d.h"


class GenericPoint {
public:
    GenericPoint();
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
    bool isInBoundingBox(BoundingBox2d & B);
};


#endif //UNTITLED_GENERICPOINT_H
