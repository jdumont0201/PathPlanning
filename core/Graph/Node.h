//
// Created by jbmdu
//

#ifndef PATHOPTIMIZATION_NODE_H
#define PATHOPTIMIZATION_NODE_H

#include <vector>
#include <memory>
#include "Edge.h"
#include "../utils/Types.h"
class Node {
    typedef Types::pEdge pEdge;
    typedef Types::pNode pNode;

    const int d_id;
    std::vector<pEdge> d_edges;
    std::vector<pNode> d_adjacentNodes;
    std::vector<pNode> d_precedentNodes;

public:
    /*
     * Builds the node and sets id nodeId
     * @param nodeId id of the node
     */
    Node(int nodeId);

    /**
     * Returns the id of the node
     * @return
     */
    int getId() const;

    /**
     * Returns a vector of the adjacents pNodes
     * @return a vector of smart pointers to Nodes
     */
    std::vector<pNode> getAdjacents();

    /**
     * Returns a vector of the precedent pNodes, directed towards the current node
     * @return a vector of smart pointers to Nodes
     */
    std::vector<pNode> getPrecedents();

    /**
     * Returns a vector of the edges with vertex Node
     * @return a vector of smart pointers to Edges
     */
    std::vector<pEdge> getEdges();

    void setEdges(std::vector<pEdge> edges);
    void addEdge(pEdge e);
    void addAdjacent(pNode n);
    void addPrecedent(pNode n);
};


#endif //PATHOPTIMIZATION__NODE_H
