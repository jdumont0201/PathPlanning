//
// Created by jbmdu on 13/04/2018.
//

#include "UnorientedGraph.h"

 UnorientedGraph::UnorientedGraph() {

}
 UnorientedGraph::UnorientedGraph(std::string path) {
    readFromFile<UnorientedGraph>(path);
}

void UnorientedGraph::addEdge(int fromId,int toId,R weight) {
    pNode pfrom=getNode(fromId);
    pNode pto=getNode(toId);
    auto e=std::make_shared<Edge>(Edge(pfrom, pto, weight));
    d_edges.push_back(e);
    d_nodes[fromId]->addEdge(e);
    d_nodes[toId]->addEdge(e);
    d_nodes[fromId]->addAdjacent(pto);
    d_nodes[toId]->addAdjacent(pfrom);
    d_weights[fromId].insert(std::pair<int,R>(toId,weight));
    d_weights[toId].insert(std::pair<int,R>(fromId,weight));
}