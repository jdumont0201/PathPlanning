//
// Created by jbmdu on 14/04/2018.
//

#ifndef UNTITLED_RTT_H
#define UNTITLED_RTT_H


#include "PathFinderProblem.h"
#include "../Solver.h"

class RTT : Solver <PathFinderProblem> {
public:

    /**
     * @fn void RTT::solve(Problem &P)
     * @brief Computes a path using RTT's algorithm
     * @param P Problem object that holds Terrain and boundaries for the search problem
     * @return void
     * */
    static void solve(PathFinderProblem &P);

};


#endif //UNTITLED_RTT_H
