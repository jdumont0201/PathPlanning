//
// Created by jbmdu on 14/04/2018.
//

#ifndef UNTITLED_BOUNDINGBOX_H
#define UNTITLED_BOUNDINGBOX_H


class BoundingBox2d {
    double d_minX;
    double d_maxX;
    double d_minY;
    double d_maxY;
public:
    BoundingBox2d();
    BoundingBox2d(double xmin,double ymin,double xmax, double ymax);
    double getMinX();
    double getMinY();
    double getMaxY();
    double getMaxX();
};


#endif //UNTITLED_BOUNDINGBOX_H
