/** C++ Path optimization
 * Tests various algorithms against the problem of
 * finding a path between an initial state and a goal state
 * @author JDumont
 * */


#include <iostream>
#include <vector>
#include "Graph/UnorientedGraph.h"
#include "utils/GraphReader.h"
#include "Algorithms/Problem.h"
#include "Algorithms/Forward/BackwardsDjikstra.h"
#include "Algorithms/Backwards/BackwardsDjikstra.h"
#include "Algorithms/Forward/Astar.h"

int main() {
    UnorientedGraph g("../assets/2Dgraph.graph");
    Problem P(g,g.getNode(0),g.getNode(5));
    Djikstra::solve(P);
    Astar::solve(P);
    BackwardsDjikstra::solve(P);
    return 0;
}