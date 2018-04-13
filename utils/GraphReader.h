//
// Created by jbmdu
//

#ifndef PATHOPTIMIZATION_GRAPHREADER_H
#define PATHOPTIMIZATION_GRAPHREADER_H

#include <string>
class Graph;

class GraphReader {
public:

    /**
     * reads graph data from file path and returns a Graph
     * file must be in format : first line=nb of nodes
     * other lines: origin_node dest_node weight
     * @param path relative path to the graph description file
     */
    Graph readFile(std::string path);
};


#endif //PATHOPTIMIZATION__GRAPHREADER_H
