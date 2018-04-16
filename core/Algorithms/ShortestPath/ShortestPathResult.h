//
// Created by jbmdu on 14/04/2018.
//

#ifndef UNTITLED_SHORTESTPATHRESULT_H
#define UNTITLED_SHORTESTPATHRESULT_H


class ShortestPathResult :public Result{
    typedef Types::pEdge pEdge;
    typedef Types::pNode pNode;
    typedef Types::R R;

public:
    const std::vector<int> &getPath() const;
    void setPath(const std::vector<int> &d_path);
    R getCost() const;
    void setCost(R d_cost);

private:
    R d_cost;
    std::vector<int> d_path;
};


#endif //UNTITLED_SHORTESTPATHRESULT_H
