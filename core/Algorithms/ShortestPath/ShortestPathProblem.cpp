//
// Created by jbmdu on 14/04/2018.
//

#include "ShortestPathProblem.h"

ShortestPathProblem::ShortestPathProblem(Graph & g,pNode initial,pNode goal):d_g(g),d_initial(initial),d_goal(goal){

}


Graph & ShortestPathProblem::cgetGraph() const {
    return d_g;
}

Types::pNode ShortestPathProblem::cgetInitial() const{
    return d_initial;
}
Types::pNode ShortestPathProblem::cgetGoal() const{
    return d_goal;
}
