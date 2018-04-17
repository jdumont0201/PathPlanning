//
// Created by jbmdu on 13/04/2018.
//

#ifndef UNTITLED_BOX_H
#define UNTITLED_BOX_H


class Box3d {
    const double d_x;
    const double d_y;
    const double d_z;
    const double d_xx;
    const double d_yy;
    const double d_zz;
    const double d_width;
    const double d_height;
    const double d_depth;
public:
    const double getX() const;
    const double getY() const;
    const double getZ() const;
    const double getXX() const;
    const double getYY() const;
    const double getZZ() const;
    const double getWidth() const;
    const double getHeight() const;
    const double getDepth() const;

public:
    Box3d(double x,double y,double z,double width,double height, double d_depth);
};


#endif //UNTITLED_BOX_H
