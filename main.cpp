/** C++ Path optimization
 * Tests various algorithms against the problem of
 * finding a path between an initial state and a goal state
 * @author JDumont
 * */


#include <iostream>
#include <vector>
#include "Graph/OrientedGraph.h"
#include "utils/GraphReader.h"
#include "Algorithms/Problem.h"
#include "Algorithms/Forward/Dijkstra.h"
#include "Algorithms/Backwards/BackwardsDijkstra.h"
#include "Algorithms/Forward/Astar.h"

int main() {
    OrientedGraph g("../assets/2Dgraph.graph");
    Problem P(g,g.getNode(0),g.getNode(5));
    Djikstra::solve(P);
    Astar::solve(P);
    BackwardsDijkstra::solve(P);
    return 0;
}