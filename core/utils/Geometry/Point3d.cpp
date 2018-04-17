//
// Created by jbmdu on 14/04/2018.
//

#include "Point3d.h"

Point3d::Point3d(double x,double y,double z):d_z(z),d_x(x),d_y(y){

}
Point3d::Point3d(){

}
double Point3d::getX(){
    return d_x;
};
double Point3d::getY(){
    return d_y;
};
double Point3d::getZ(){
    return d_z;
};
void Point3d::setX(double x){
    d_x=x;
};
void Point3d::setY(double y){
    d_y=y;
};
void Point3d::setZ(double z){
    d_z=z;
};
bool Point3d::isInFreespace(Terrain3d & T){
    return false;
}
bool Point3d::isInBoundingBox(BoundingBox3d & B){
    return d_x >= B.getMinX() && d_x <= B.getMaxX() &&
           d_y >= B.getMinY() && d_y <= B.getMaxY() &&
           d_z >= B.getMinZ() && d_y <= B.getMaxZ();

}