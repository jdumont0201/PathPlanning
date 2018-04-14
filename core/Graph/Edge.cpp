//
// Created by jbmdu
//

#include "Edge.h"
#include "Node.h"

Edge::Edge(pNode from, pNode to, R weight) : d_from(from), d_to(to), d_weight(weight) {

}

const Edge::pNode Edge::getFrom() const {
    return d_from;
}

const Edge::pNode Edge::getTo() const {
    return d_to;
}

std::ostream &operator<<(std::ostream &os, const Edge &e){
    os << e.getFrom()->getId()<<"-"<<e.getTo()->getId()<<"\n";
    return os;
}