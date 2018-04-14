//
// Created by jbmdu on 13/04/2018.
//

#include "OrientedGraph.h"

OrientedGraph::OrientedGraph() {

}
OrientedGraph::OrientedGraph(std::string path) {
   readFromFile<OrientedGraph>(path);
}



void OrientedGraph::addEdge(int fromId, int toId, R weight) {
    pNode pfrom=getNode(fromId);
    pNode pto=getNode(toId);
    auto e=std::make_shared<Edge>(Edge(pfrom, pto, weight));
    d_edges.push_back(e);
    d_nodes[fromId]->addEdge(e);
    d_nodes[toId]->addEdge(e);
    d_nodes[fromId]->addAdjacent(pto);
    d_nodes[toId]->addPrecedent(pfrom);
    d_weights[fromId].insert(std::pair<int,R>(toId,weight));
}