//
// Created by jbmdu
//

#include "Graph.h"
#include "../utils/GraphReader.h"
#include <memory>
#include <cassert>

Graph::Graph() {

}

Graph::Graph(int nbNodes) {
    init(nbNodes);
}


void Graph::init(int nbNodes) {
    d_nodes.resize(nbNodes);
    d_weights.resize(nbNodes);
    for (int i = 0; i < nbNodes; ++i) {
        auto n = std::make_shared<Node>(Node(i));
        d_nodes[i] = n;
        d_weights[i] = std::map<int, R>();
    }
}

Types::pNode Graph::getNode(int nodeId) {
    assert(nodeId < d_nodes.size());
    assert(d_nodes[nodeId]);
    return d_nodes[nodeId];
}

int Graph::getNbNodes() const {
    return d_nodes.size();
}

int Graph::getNbEdges() const {
    return d_edges.size();
}

Types::R Graph::getWeight(int fromId, int toId) {
    return d_weights[fromId][toId];
}