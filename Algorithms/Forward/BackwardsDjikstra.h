//
// Created by jbmdu
//

#ifndef PATHOPTIMIZATION_DJIKSTRA_H
#define PATHOPTIMIZATION_DJIKSTRA_H

#include "../Solver.h"

class Djikstra : Solver {
public:
    /**
     * @fn void Djikstra::solve(Problem &P)
     * @brief Computes the shortest-path using Dijkstra's algorithm
     * @param P Problem object that holds Graph and boundaries for the search problem
     * @return void
     * */
    static void solve(Problem &P);
};


#endif //PATHOPTIMIZATION__DJIKSTRA_H
