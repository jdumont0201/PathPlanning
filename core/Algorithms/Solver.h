//
// Created by jbmdu
//

#ifndef PATHOPTIMIZATION_SOLVER_H
#define PATHOPTIMIZATION_SOLVER_H

#include <vector>
#include "GenericProblem.h"
#include "../utils/Types.h"
#include "Result.h"

class Node;
class Edge;

template<class GenericProblem>
class Solver {
public:
    typedef Types::pEdge pEdge;
    typedef Types::pNode pNode;
    typedef Types::R R;

    Result d_result;
    /**
     * Generic solver function to be overriden by derivated classes
     * @param P Problem definition object
     */
    void solve(GenericProblem &P);
};


#endif //PATHOPTIMIZATION__SOLVER_H
