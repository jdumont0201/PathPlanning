/** C++ Path optimization
 * Tests various algorithms against the problem of
 * finding a path between an initial state and a goal state
 * @author JDumont
 * */


#include <iostream>
#include <string>
#include <thread>
#include <vector>
#include <functional>
#include "core/Graph/OrientedGraph.h"
#include "core/utils/GraphReader.h"
#include "core/Algorithms/GenericProblem.h"
#include "core/Algorithms/ShortestPath/Forwards/Dijkstra.h"
#include "core/Algorithms/ShortestPath/Backwards/BackwardsDijkstra.h"
#include "core/Algorithms/ShortestPath/Forwards/Astar.h"
#include "core/Algorithms/ShortestPath/ShortestPathProblem.h"
#include "core/Algorithms/PathFinder/PathFinderProblem.h"
#include "core/Algorithms/PathFinder/RTT.h"
#include "core/Terrain/Terrain2d.h"
#include "visualization/DataBinder.h"
#include "visualization/Window.h"
#include "visualization/Launcher.h"

void run() {
    {
        OrientedGraph g("../assets/2Dgraph.graph");
        ShortestPathProblem P(g, g.getNode(0), g.getNode(5));
        Djikstra::solve(P);
    }
    {
        OrientedGraph g("../assets/2Dgraph.graph");
        ShortestPathProblem P(g, g.getNode(0), g.getNode(5));
        Astar::solve(P);

    }
    {
        OrientedGraph g("../assets/2Dgraph.graph");
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