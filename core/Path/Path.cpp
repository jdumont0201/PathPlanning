//
// Created by jbmdu on 14/04/2018.
//

#include "Path.h"
#include "PathUnit.h"

void Path::addUnit(PathUnit & unit){
    d_units.push_back(unit);
};
Path::Path(){
    d_units.resize(0);
}