//
// Created by jbmdu
//

#include "Problem.h"


Problem::Problem(Graph & g,pNode initial,pNode goal):d_g(g),d_initial(initial),d_goal(goal){

}


Graph & Problem::cgetGraph() const {
    return d_g;
}

Types::pNode Problem::cgetInitial() const{
    return d_initial;
}
Types::pNode Problem::cgetGoal() const{
    return d_goal;
}