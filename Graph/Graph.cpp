//
// Created by jbmdu
//

#include "Graph.h"
#include "../utils/GraphReader.h"
#include <memory>
#include <cassert>

Graph::Graph(){

}Graph::Graph(int nbNodes){
    init(nbNodes);
}
Graph::Graph(std::string path){
    GraphReader reader;
    Graph g=reader.readFile(path);
    d_nodes=g.d_nodes;
    d_edges=g.d_edges;
    d_weights=g.d_weights;
}
void Graph::init(int nbNodes){
    d_nodes.resize(nbNodes);
    d_weights.resize(nbNodes);
    for(int i=0;i<nbNodes;++i){
        auto n=std::make_shared<Node>(Node(i));
        d_nodes[i]=n;
        d_weights[i]=std::map<int,double>();
    }
}

Types::pNode Graph::getNode(int nodeId){
    assert( nodeId<d_nodes.size());
    assert( d_nodes[nodeId]);
    return d_nodes[nodeId];
}
void Graph::addEdge(int fromId,int toId,double weight) {
    pNode pfrom=getNode(fromId);
    pNode pto=getNode(toId);
    auto e=std::make_shared<Edge>(Edge(pfrom, pto, weight));
    d_edges.push_back(e);
    d_nodes[fromId]->addEdge(e);
    d_nodes[toId]->addEdge(e);
    d_nodes[fromId]->addAdjacent(pto);
    d_nodes[toId]->addAdjacent(pfrom);

    d_weights[fromId].insert(std::pair<int,double>(toId,weight));
    d_weights[toId].insert(std::pair<int,double>(fromId,weight));
}
int Graph::getNbNodes() const{
    return d_nodes.size();
}
int Graph::getNbEdges() const {
    return d_edges.size();
}

double Graph::getWeight(int fromId,int toId) {
    return d_weights[fromId][toId];
}