//
// Created by jbmdu
//

#ifndef PATHOPTIMIZATION_GRAPHREADER_H
#define PATHOPTIMIZATION_GRAPHREADER_H

#include <string>
#include <iostream>

#include <fstream>
#include <sstream>
#include <string>
#include <iostream>

class GraphReader {
public:

    /**
     * reads graph data from file path and returns a Graph
     * file must be in format : first line=nb of nodes
     * other lines: origin_node dest_node weight
     * @param path relative path to the graph description file
     */

    template <class T>
    T readFile(std::string path) {
        std::cout << "Importing file "<<path<<std::endl;
        T g;
        std::ifstream f(path);
        std::string line;
        bool firstLine = true;
        if (!f.good()) {
            std::cout << "File "<<path<<" not found" << std::endl;
            return g;
        }
        while (std::getline(f, line)) {
            std::istringstream iss(line);
            if (firstLine) {
                int nbNodes;
                if (!(iss >> nbNodes)) {
                    break;
                }else{
                    g.init(nbNodes);
                } // error
                firstLine = false;
            } else {
                int from, to;
                double weight;
                if (!(iss >> from >> to >> weight)) {
                    break;
                }else{
                    g.addEdge(from, to, weight);
                }
            }
        }
        std::cout << "Nodes: "<<g.getNbNodes()<< std::endl;
        std::cout << "Edges: "<<g.getNbEdges()<< std::endl;


        return g;
    };

};


#endif //PATHOPTIMIZATION__GRAPHREADER_H
