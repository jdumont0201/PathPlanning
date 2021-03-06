//
// Created by jbmdu
//

#include "Node.h"

Node::Node(int nodeId):d_id(nodeId) {
    d_edges.resize(0);
}
void Node::setEdges(std::vector<pEdge> edges) {
    d_edges = edges;
}
void Node::addEdge(pEdge e) {
    d_edges.push_back(e);
}
int Node::getId() const{
    return d_id;
}
void Node::addAdjacent(Node::pNode n) {
    d_adjacentNodes.push_back(n);
}
void Node::addPrecedent(Node::pNode n) {
    d_antecedentNodes.push_back(n);
}
std::vector<Node::pEdge> Node::getEdges(){
    return d_edges;
}
std::vector<Node::pNode> Node::getAdjacents() {
    return d_adjacentNodes;

}
std::vector<Node::pNode> Node::getAntecedents() {
    return d_antecedentNodes;
}
void Node::setLocation(Point3d & P){
    d_pos.copy(P);
}