//
// Created by jbmdu
//

#ifndef PATHOPTIMIZATION_SOLVER_H
#define PATHOPTIMIZATION_SOLVER_H


#include "Problem.h"
#include "../utils/Types.h"
class Node;
class Edge;
class Solver {
public:
    typedef Types::pEdge pEdge;
    typedef Types::pNode pNode;
    typedef Types::R R;

    /**
     * Generic solver function to be overriden by derivated classes
     * @param P Problem definition object
     */
    void solve(Problem &P);
};


#endif //PATHOPTIMIZATION__SOLVER_H
