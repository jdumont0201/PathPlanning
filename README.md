# PathPlanning
A set of shortest path computation algorithms over a graph


##Example
#include "core/PathPlanning.h"


int main() {
    {
        OrientedGraph g("../assets/simple.graph");
        ShortestPathProblem P(g, g.getNode(0), g.getNode(5));
        ShortestPathResult res = Djikstra::solve(P);
        std::cout << res<<std::endl;
    }
    {
        OrientedGraph g("../assets/simple.graph");
        ShortestPathProblem P(g, g.getNode(0), g.getNode(5));
        ShortestPathResult res = Astar::solve(P);
        std::cout << res<<std::endl;

    }

    return 0;
}