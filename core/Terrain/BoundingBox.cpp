//
// Created by jbmdu on 14/04/2018.
//

#include "BoundingBox.h"

BoundingBox::BoundingBox(double xmin,double ymin,double xmax, double ymax):d_minX(xmin),
d_maxX(xmax),d_minY(ymin),d_maxY(ymax){

};
BoundingBox::BoundingBox(){

};
double BoundingBox::getMinX(){return d_minX;};
double BoundingBox::getMinY(){ return d_minY;};
double BoundingBox::getMaxY(){ return d_maxX;};
double BoundingBox::getMaxX(){ return d_maxY;};