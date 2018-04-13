//
// Created by jbmdu on 13/04/2018.
//

#ifndef UNTITLED_UNORIENTEDGRAPH_H
#define UNTITLED_UNORIENTEDGRAPH_H

#include "Graph.h"
class UnorientedGraph :public Graph{
public:


    /**Constructor, initializes a Graph from file in path
    * @param path
    */
    UnorientedGraph(std::string path);
    UnorientedGraph();


    /**
     * Adds an edge to the graph
     * @param fromId id of origin
     * @param toId id of destination
     * @param weight weight of the path from fromid to toId
     */
    void addEdge(int fromId,int toId,R weight);

};


#endif //UNTITLED_UNORIENTEDGRAPH_H
