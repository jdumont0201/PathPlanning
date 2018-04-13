//
// Created by jbmdu
//

#ifndef PATHOPTIMIZATION_GRAPH_H
#define PATHOPTIMIZATION_GRAPH_H

#include "../utils/GraphReader.h"
#include <string>
#include <vector>
#include <memory>
#include <map>
#include "Node.h"
#include "Edge.h"
#include "../utils/Types.h"
class Graph {
protected:
    typedef Types::pEdge pEdge;
    typedef Types::pNode pNode;
    typedef Types::R R;

    std::vector<std::map<int, R>> d_weights;
    std::vector<pNode> d_nodes;
    std::vector<pEdge> d_edges;


public:
    /**Initializes a Graph object with nbNodes
     * @param nbNodes
     */
    Graph(int nbNodes);




    /**Initializes a Graph from file in path
     * @param path
     */

    template<class T>
    void readFromFile(std::string path) {
        GraphReader reader;
        T g = reader.readFile<T>(path);
        d_nodes = g.d_nodes;
        d_edges = g.d_edges;
        d_weights = g.d_weights;
    }


    /**Empty constructor
        */
    Graph();


    /**Initializes a Graph from file in path
     * @param path
     */
    void init(int nbNodes);


    /**
     * Returns node with id nodeId
     * @param nodeId
     * @return pNode shared pointer to Node
     */
    pNode getNode(int nodeId);

    /**
     * Adds an edge to the graph
     * @param fromId id of origin
     * @param toId id of destination
     * @param weight weight of the path from fromid to toId
     */
    virtual void addEdge(int fromId,int toId,R weight) =0 ;


    /**
     * Returns the count of the nodes of the graph
     * @return const number of nodes in the graph
     */
    int getNbNodes() const ;

    /**
     * Returns the count of the edges of the graph
     * @return const number of edges
     */
    int getNbEdges() const;
    /**
     * Returns the weight of the edge between the node fromId and toId
     * @param fromId origin node id
     * @param toId destination node id
     * @return
     */
    R getWeight(int fromId,int toId) ;
};


#endif //PATHOPTIMIZATION__GRAPH_H
