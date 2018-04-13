//
// Created by jbmdu on 13/04/2018.
//

#ifndef UNTITLED_ASTAR_H
#define UNTITLED_ASTAR_H

#include "Solver.h"

class Astar:Solver {
public:
    /**
     * @fn void Astar::solve(Problem &P)
     * @brief Computes the shortest-path using Astar's algorithm
     * @param P Problem object that holds Graph and boundaries for the search problem
     * @return void
     * */

    static void solve(Problem &P);
};


#endif //UNTITLED_ASTAR_H
