//
// Created by jbmdu on 13/04/2018.
//

#ifndef UNTITLED_ORIENTEDGRAPH_H
#define UNTITLED_ORIENTEDGRAPH_H

#include "Graph.h"

class OrientedGraph:public Graph {
public:
    /**Constructor, initializes a Graph from file in path
   * @param path
   */
    OrientedGraph(std::string path);
    OrientedGraph();

    /**
     * Adds an edge to the graph
     * @param fromId id of origin
     * @param toId id of destination
     * @param weight weight of the path from fromid to toId
     */
    void addEdge(int fromId,int toId,R weight);
};


#endif //UNTITLED_ORIENTEDGRAPH_H
