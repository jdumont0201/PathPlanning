//
// Created by jbmdu on 14/04/2018.
//

#include "BoundingBox3d.h"

BoundingBox3d::BoundingBox3d(double xmin,double ymin,double zmin,double xmax, double ymax,double zmax):d_minX(xmin),
d_maxX(xmax),d_minY(ymin),d_maxY(ymax),d_maxZ(zmax),d_minZ(zmin){

};
BoundingBox3d::BoundingBox3d(){

};
double BoundingBox3d::getMinX(){return d_minX;};
double BoundingBox3d::getMinY(){ return d_minY;};
double BoundingBox3d::getMaxY(){ return d_maxX;};
double BoundingBox3d::getMaxX(){ return d_maxY;};
double BoundingBox3d::getMinZ(){ return d_minZ;};
double BoundingBox3d::getMaxZ(){ return d_maxZ;};