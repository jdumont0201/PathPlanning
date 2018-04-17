# PathPlanning
A set of shortest path computation algorithms over a graph.
Uses STL vectors and priority queues.

## Graph format
First line: NB_OF_NODES
Then one line per edge
ORIGIN_NODE_ID DEST_NODE_ID COST 

For geolocated graphs, 
ORIGIN_NODE_ID DEST_NODE_ID COST POSITION_X POSITION_Y POSITION_Z

## Example
```
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
```
