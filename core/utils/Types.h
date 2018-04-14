//
// Created by jbmdu
//

#ifndef PATHOPTIMIZATION_TYPES_H
#define PATHOPTIMIZATION_TYPES_H


#include <memory>
#include <vector>
#include "geometry/Point2d.h"

class Node;
class Edge;
class Types {
public:
    /**
     * Shortcut to shared pointer to a node
     */
    typedef std::shared_ptr<Node> pNode;
    /**
     * Shortcut to shared pointer to an edge
     */
    typedef std::shared_ptr<Edge> pEdge;
    /**
     * default computation type.
     * useful for automatic differentiation
     */
     typedef double R;
     typedef std::vector<Point2d> Boundary2d;
};


#endif //PATHOPTIMIZATION__TYPES_H
