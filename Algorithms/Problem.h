//
// Created by jbmdu
//

#ifndef PATHOPTIMIZATION_PROBLEM_H
#define PATHOPTIMIZATION_PROBLEM_H


#include <memory>
#include "../utils/Types.h"

class Node;
class Graph;
class Problem {
    typedef Types::pEdge pEdge;
    typedef Types::pNode pNode;

    pNode d_initial;
    pNode d_goal;
    Graph & d_g;
public:
    /**
     * @fn Problem::Problem(Graph & g,std::shared_ptr<Node> initial,std::shared_ptr<Node> goal):d_g(g),d_initial(initial),d_goal(goal)
     * @brief Initializes the Problem object
     * @param g Graph
     * @param initial pNode variable for the initial state
     * @param goal pNode variable for the goal state
     * @return void
     * */
    Problem(Graph & g,pNode initial,pNode goal);

    /**
     * @fn Graph & Problem::cgetGraph() const
     * @brief Returns the const Graph
     * @return const Graph
     * */
    Graph & cgetGraph() const;

    /**
     *
     * @return pNode initial state
     */
    pNode cgetInitial() const;
    /**
     *
     * @return pNode goal state
     */
    pNode cgetGoal() const;
};


#endif //PATHOPTIMIZATION__PROBLEM_H
