//
// Created by jbmdu on 14/04/2018.
//

#include "Point2d.h"

Point2d::Point2d(double x,double y):d_x(x),d_y(y){

}
double Point2d::getX(){
    return d_x;
};
double Point2d::getY(){
    return d_y;
};
void Point2d::setX(double x){
    d_x=x;
};
void Point2d::setY(double y){
    d_y=y;
};
bool Point2d::isInFreespace(Terrain2d & T){
    return false;
}