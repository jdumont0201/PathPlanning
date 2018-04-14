//
// Created by jbmdu on 13/04/2018.
//

#include "Result.h"

const std::vector<int> &Result::getPath() const {
    return d_path;
}

void Result::setPath(const std::vector<int> &d_path) {
    Result::d_path = d_path;
}

Result::R Result::getCost() const {
    return d_cost;
}

void Result::setCost(Result::R d_cost) {
    Result::d_cost = d_cost;
}
