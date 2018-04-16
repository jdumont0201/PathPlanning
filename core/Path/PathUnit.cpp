//
// Created by jbmdu on 14/04/2018.
//

#include "PathUnit.h"

Point2d PathUnit::getFrom(){
    return d_from;
};
Point2d PathUnit::getTo(){
    return d_to;
};

PathUnit::PathUnit() {

};
PathUnit::PathUnit(Point2d from,Point2d to):d_from(from),d_to(to) {

};
