//
// Created by jbmdu on 13/04/2018.
//

#include "Box3d.h"

Box3d::Box3d(double x, double y, double z, double width, double height, double depth) : d_x(x), d_y(y), d_z(z),
                                                                                    d_width(width), d_depth(depth),
                                                                                    d_height(height),
d_xx(d_x+width),d_yy(d_y+height),d_zz(d_z+depth){

}


const double Box3d::getZ() const {
    return d_z;
}

const double Box3d::getZZ() const {
    return d_zz;
}

const double Box3d::getDepth() const {
    return d_depth;
}
