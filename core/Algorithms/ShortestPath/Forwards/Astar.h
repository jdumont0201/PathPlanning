//
// Created by jbmdu on 13/04/2018.
//

#ifndef UNTITLED_ASTAR_H
#define UNTITLED_ASTAR_H

#include "../../Solver.h"
#include "../ShortestPathProblem.h"
#include "../ShortestPathResult.h"

class Astar:Solver<ShortestPathProblem> {
public:
    /**
     * @fn void Astar::solve(Problem &P)
     * @brief Computes the shortest-path using Astar's algorithm
     * @param P Problem object that holds Graph and boundaries for the search problem
     * @return void
     * */

    static ShortestPathResult solve(ShortestPathProblem &P);
};


#endif //UNTITLED_ASTAR_H
