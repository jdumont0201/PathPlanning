//
// Created by jbmdu
//

#ifndef PATHOPTIMIZATION_BACKWARDSDJIKSTRA_H
#define PATHOPTIMIZATION_BACKWARDSDJIKSTRA_H

#include "../Solver.h"

class BackwardsDijkstra : Solver {
public:
    /**
     * @fn void Djikstra::solve(Problem &P)
     * @brief Computes the shortest-path using Dijkstra's algorithm
     * @param P Problem object that holds Graph and boundaries for the search problem
     * @return void
     * */
    static void solve(Problem &P);
};


#endif //PATHOPTIMIZATION__BACKWARDSDJIKSTRA_H
