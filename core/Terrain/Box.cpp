//
// Created by jbmdu on 13/04/2018.
//

#include "Box.h"

Box::Box(double x, double y, double z, double width, double height, double depth) : d_x(x), d_y(y), d_z(z),
                                                                                    d_width(width), d_depth(depth),
                                                                                    d_height(height),
d_xx(d_x+width),d_yy(d_y+height),d_zz(d_z+depth){

}

const double Box::getX() const {
    return d_x;
}

const double Box::getY() const {
    return d_y;
}

const double Box::getZ() const {
    return d_z;
}
const double Box::getXX() const {
    return d_xx;
}

const double Box::getYY() const {
    return d_yy;
}

const double Box::getZZ() const {
    return d_zz;
}

const double Box::getWidth() const {
    return d_width;
}

const double Box::getHeight() const {
    return d_height;
}

const double Box::getDepth() const {
    return d_depth;
}
