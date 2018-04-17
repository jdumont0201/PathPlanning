//
// Created by jbmdu on 13/04/2018.
//

#ifndef UNTITLED_BOX_H
#define UNTITLED_BOX_H

#include "Box2d.h"

class Box3d : public Box2d {
    const double d_z;
    const double d_zz;
    const double d_depth;
public:
    const double getZ() const;
    const double getZZ() const;
    const double getDepth() const;

public:
    Box3d(double x,double y,double z,double width,double height, double d_depth);
};


#endif //UNTITLED_BOX_H
