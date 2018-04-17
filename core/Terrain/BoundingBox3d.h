//
// Created by jbmdu on 14/04/2018.
//

#ifndef UNTITLED_BOUNDINGBOX_H
#define UNTITLED_BOUNDINGBOX_H


class BoundingBox3d {
    double d_minX;
    double d_maxX;
    double d_minY;
    double d_maxY;
    double d_minZ;
    double d_maxZ;
public:
    BoundingBox3d();
    BoundingBox3d(double xmin,double ymin,double zmin,double xmax, double ymax,double zmax);
    double getMinX();
    double getMinY();
    double getMaxY();
    double getMaxX();
    double getMinZ();
    double getMaxZ();
};


#endif //UNTITLED_BOUNDINGBOX_H
