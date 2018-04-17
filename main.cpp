/** C++ Path optimization
 * Tests various algorithms against the problem of
 * finding a path between an initial state and a goal state
 * @author JDumont
 * */


#include "core/PathPlanning.h"
#include "visualization/DataBinder.h"
#include "visualization/Window.h"
#include "visualization/Launcher.h"

void run() {
    {
        OrientedGraph g("../assets/2dgraph.graph");
        ShortestPathProblem P(g, g.getNode(0), g.getNode(5));
        Djikstra::solve(P);
    }
    {
        OrientedGraph g("../assets/2dgraph.graph");
        ShortestPathProblem P(g, g.getNode(0), g.getNode(5));
        Astar::solve(P);

    }
    {
        OrientedGraph g("../assets/2dgraph.graph");
        ShortestPathProblem P(g, g.getNode(0), g.getNode(5));
        BackwardsDijkstra::solve(P);

    }
    {
        Terrain2d g("../assets/hall.terrain2d");
        PathFinderProblem P(g, Point2d(1, 1), Point2d(8, 8));
        RTT::solve(P);
    }
}

int main() {

    run();


    return 0;
}