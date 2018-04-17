//
// Created by jean on 17/04/18.
//

#ifndef UNTITLED_BOX2D_H
#define UNTITLED_BOX2D_H



class Box2d {
    const double d_x;
    const double d_y;
    const double d_xx;
    const double d_yy;
    const double d_width;
    const double d_height;
public:
    const double getX() const;
    const double getY() const;
    const double getXX() const;
    const double getYY() const;
    const double getWidth() const;
    const double getHeight() const;

public:
    Box2d(double x,double y,double width,double height);
};


#endif //UNTITLED_BOX2D_H
