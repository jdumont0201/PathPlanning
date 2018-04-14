//
// Created by jbmdu
//

#ifndef PATHOPTIMIZATION_BACKWARDSDJIKSTRA_H
#define PATHOPTIMIZATION_BACKWARDSDJIKSTRA_H

#include "../../Solver.h"
#include "../ShortestPathProblem.h"

class BackwardsDijkstra : Solver<ShortestPathProblem> {
public:
    /**
     * @fn void Djikstra::solve(Problem &P)
     * @brief Computes the shortest-path using Dijkstra's algorithm
     * @param P Problem object that holds Graph and boundaries for the search problem
     * @return void
     * */
    static void solve(ShortestPathProblem &P);
};


#endif //PATHOPTIMIZATION__BACKWARDSDJIKSTRA_H
