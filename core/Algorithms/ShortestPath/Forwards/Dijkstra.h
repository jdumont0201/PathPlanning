//
// Created by jbmdu
//

#ifndef PATHOPTIMIZATION_DJIKSTRA_H
#define PATHOPTIMIZATION_DJIKSTRA_H

#include "../../Solver.h"
#include "../ShortestPathProblem.h"
#include "../ShortestPathResult.h"

class Djikstra : Solver<ShortestPathProblem> {
public:
    /**
     * @fn void Djikstra::solve(Problem &P)
     * @brief Computes the shortest-path using Dijkstra's algorithm
     * @param P Problem object that holds Graph and boundaries for the search problem
     * @return void
     * */
    static ShortestPathResult solve(ShortestPathProblem &P);
};


#endif //PATHOPTIMIZATION__DJIKSTRA_H
