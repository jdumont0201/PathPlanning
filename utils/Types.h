//
// Created by jbmdu
//

#ifndef PATHOPTIMIZATION_TYPES_H
#define PATHOPTIMIZATION_TYPES_H


#include <memory>

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
};


#endif //PATHOPTIMIZATION__TYPES_H
