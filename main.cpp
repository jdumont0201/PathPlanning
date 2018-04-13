/** C++ Path optimization
 * Tests various algorithms against the problem of
 * finding a path between an initial state and a goal state
 * @author JDumont
 * */


#include <iostream>
#include <vector>
#include "Graph/Graph.h"
#include "utils/GraphReader.h"
#include "Algorithms/Problem.h"
#include "Algorithms/Djikstra.h"
#include "Algorithms/Astar.h"

int main() {
    Graph g("../assets/2Dgraph.graph");
    Problem P(g,g.getNode(0),g.getNode(5));
    Djikstra::solve(P);
    Astar::solve(P);
    return 0;
}