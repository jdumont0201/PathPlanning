//
// Created by jbmdu on 13/04/2018.
//

#include "Box2d.h"

Box2d::Box2d(double x, double y,double width, double height) : d_x(x), d_y(y),
                                                                                        d_width(width),
                                                                                        d_height(height),
                                                                                        d_xx(d_x+width),d_yy(d_y+height){

}

const double Box2d::getX() const {
    return d_x;
}

const double Box2d::getY() const {
    return d_y;
}

const double Box2d::getXX() const {
    return d_xx;
}

const double Box2d::getYY() const {
    return d_yy;
}


const double Box2d::getWidth() const {
    return d_width;
}

const double Box2d::getHeight() const {
    return d_height;
}

