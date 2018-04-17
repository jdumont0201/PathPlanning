//
// Created by jbmdu on 14/04/2018.
//

#ifndef UNTITLED_SHORTESTPATHRESULT_H
#define UNTITLED_SHORTESTPATHRESULT_H
#include <iostream>

#include "../Result.h"

class ShortestPathResult :public Result{
    typedef Types::pEdge pEdge;
    typedef Types::pNode pNode;
    typedef Types::R R;

public:
    ShortestPathResult(const std::vector<int> &path);
    const std::vector<int> &getPath() const;
    void setPath(const std::vector<int> &path);
    R getCost() const;
    void setCost(R d_cost);

private:
    R d_cost;
    std::vector<int> d_path;
};
std::ostream& operator<<(std::ostream& os, const ShortestPathResult& dt);


#endif //UNTITLED_SHORTESTPATHRESULT_H
