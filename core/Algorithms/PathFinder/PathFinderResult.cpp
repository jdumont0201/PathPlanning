//
// Created by jbmdu on 14/04/2018.
//

#include "PathFinderResult.h"

const Path &PathFinderResult::getPath() const{
    return d_path;
};
void PathFinderResult::setPath(const Path &path){
    d_path=path;
};