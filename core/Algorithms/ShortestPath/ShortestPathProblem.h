//
// Created by jbmdu on 14/04/2018.
//

#ifndef UNTITLED_SHORTESTPATHPROBLEM_H
#define UNTITLED_SHORTESTPATHPROBLEM_H

#include "../GenericProblem.h"
class ShortestPathProblem : public GenericProblem {
    typedef Types::pEdge pEdge;
    typedef Types::pNode pNode;

    pNode d_initial;
    pNode d_goal;
    Graph & d_g;
public:

/**
     * @fn ShortestPathProblem::ShortestPathProblem(Graph & g,std::shared_ptr<Node> initial,std::shared_ptr<Node> goal):d_g(g),d_initial(initial),d_goal(goal)
     * @brief Initializes the ShortestPathProblem object
     * @param g Graph
     * @param initial pNode variable for the initial state
     * @param goal pNode variable for the goal state
     * @return void
     * */
    ShortestPathProblem(Graph & g,pNode initial,pNode goal);
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


#endif //UNTITLED_SHORTESTPATHPROBLEM_H
