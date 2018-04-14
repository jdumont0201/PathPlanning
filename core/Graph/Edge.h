//
// Created by jbmdu
//

#ifndef PATHOPTIMIZATION_EDGE_H
#define PATHOPTIMIZATION_EDGE_H

#include <vector>
#include <memory>
#include <ostream>
#include "../utils/Types.h"
class Node;

class Edge {
    typedef Types::pEdge pEdge;
    typedef Types::pNode pNode;
    typedef Types::R R;

    const pNode d_from;
private:
    const pNode d_to;
    const double d_weight;
public:
    /**
     * Returns one end of the node, in case of bidirectional nodes
     * @return a smart pointers to the Node
     */
    const pNode getFrom() const;
    /**
     * Returns the second end end of the node, in case of bidirectional nodes
     * @return a smart pointers to the Node
     */
    const pNode getTo() const;
    /**
     * Constructor
     * @param from origin of the edge
     * @param to destination of the edge
     * @param weight weight of the edge
     */
    Edge(pNode from, pNode to, R weight);

};
std::ostream &operator<<(std::ostream &os, const Edge &e);


#endif //PATHOPTIMIZATION__EDGE_H
