//
// Created by jbmdu on 14/04/2018.
//

#include "ShortestPathResult.h"

const std::vector<int> &ShortestPathResult::getPath() const {
    return d_path;
}

void ShortestPathResult::setPath(const std::vector<int> &d_path) {
    ShortestPathResult::d_path = d_path;
}

ShortestPathResult::R ShortestPathResult::getCost() const {
    return d_cost;
}

void ShortestPathResult::setCost(R d_cost) {
    ShortestPathResult::d_cost = d_cost;
}
