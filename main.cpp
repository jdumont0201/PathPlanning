/** C++ Path optimization
 * Tests various algorithms against the problem of
 * finding a path between an initial state and a goal state
 * @author JDumont
 * */


#include "core/PathPlanning.h"
#include "visualization/DataBinder.h"
#include "visualization/Window.h"
#include "visualization/VisualizationLauncher.h"


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
    {
        OrientedGraph g("../assets/simple.graph");
        ShortestPathProblem P(g, g.getNode(0), g.getNode(5));
        ShortestPathResult res = BackwardsDijkstra::solve(P);
        std::cout << res<<std::endl;

    }
    {
        Terrain2d g("../assets/hall.terrain2d");
        PathFinderProblem P(g, Point2d(1, 1), Point2d(8, 8));
        RTT::solve(P);
    }

    return 0;
}