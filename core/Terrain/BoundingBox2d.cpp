//
// Created by jbmdu on 14/04/2018.
//

#include "BoundingBox2d.h"

BoundingBox2d::BoundingBox2d(double xmin,double ymin,double xmax, double ymax):d_minX(xmin),
d_maxX(xmax),d_minY(ymin),d_maxY(ymax){

};
BoundingBox2d::BoundingBox2d(){

};
double BoundingBox2d::getMinX(){return d_minX;};
double BoundingBox2d::getMinY(){ return d_minY;};
double BoundingBox2d::getMaxY(){ return d_maxX;};
double BoundingBox2d::getMaxX(){ return d_maxY;};