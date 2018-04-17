//
// Created by jbmdu on 14/04/2018.
//

#include "ShortestPathResult.h"

const std::vector<int> &ShortestPathResult::getPath() const {
    return d_path;
}

ShortestPathResult::ShortestPathResult(const std::vector<int> &path){
    setPath(path);
}
void ShortestPathResult::setPath(const std::vector<int> &path) {
    d_path = path;
}

ShortestPathResult::R ShortestPathResult::getCost() const {
    return d_cost;
}

void ShortestPathResult::setCost(R cost) {
    d_cost = cost;
}


std::ostream& operator<<(std::ostream& os, const ShortestPathResult& dt){
    for(auto x : dt.getPath()){
        os << x<<std::endl;
    }
return os;
}