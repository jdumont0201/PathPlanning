//
// Created by jbmdu
//

#include "GraphReader.h"
#include "../Graph/Graph.h"
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>


Graph GraphReader::readFile(std::string path) {
    std::cout << "Importing file "<<path<<std::endl;
    Graph g;
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
