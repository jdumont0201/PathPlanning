//
// Created by jbmdu on 14/04/2018.
//

#ifndef UNTITLED_BOUNDINGBOX_H
#define UNTITLED_BOUNDINGBOX_H


class BoundingBox {
    double d_minX;
    double d_maxX;
    double d_minY;
    double d_maxY;
public:
    BoundingBox();
    BoundingBox(double xmin,double ymin,double xmax, double ymax);

};


#endif //UNTITLED_BOUNDINGBOX_H
