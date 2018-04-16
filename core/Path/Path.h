//
// Created by jbmdu on 14/04/2018.
//

#ifndef UNTITLED_PATH_H
#define UNTITLED_PATH_H


#include "PathUnit.h"
#include "../utils/Geometry/Point2d.h"

class Path {
    std::vector<PathUnit> d_units;
public:
    Path::Path();
    void addUnit(PathUnit &unit);
};

#endif //UNTITLED_PATH_H
