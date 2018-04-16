//
// Created by jbmdu on 14/04/2018.
//

#ifndef UNTITLED_PATHUNIT_H
#define UNTITLED_PATHUNIT_H


#include "../utils/Geometry/Point2d.h"

class PathUnit{
    Point2d d_from;
    Point2d d_to;
public:
    PathUnit(Point2d d_from,Point2d d_to);
    Point2d getFrom();
    Point2d getTo();
};


#endif //UNTITLED_PATHUNIT_H
