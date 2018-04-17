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
#include "Geometry/Point3d.h"

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
        enum steps {TYPE, SIZE, NODES, EDGES};
        steps step=steps::TYPE;
        std::ifstream f(path);
        std::string line;
        std::string GraphType;
        double x,y,z;
        int nbProcessedLines=0;
        int nbProcessedNodes=0;
        if (!f.good()) {
            std::cout << "File "<<path<<" not found" << std::endl;
            return g;
        }
        while (std::getline(f, line)) {

            std::istringstream iss2(line);
            std::string line2;
            if(iss2 >> line2 && line2[0]=='#'){//comment

            }else{
                std::istringstream iss(line);
                if (step==steps::TYPE) {
                    if (!(iss >> GraphType)) {
                        std::cout << "Unable to read graph type"<<std::endl;
                        break;
                    }else{
                        step=steps::SIZE;
                    }
                }else if (step==steps::SIZE) {
                    int nbNodes;
                    if (!(iss >> nbNodes)) {
                        std::cout << "Unable to read graph size"<<std::endl;
                        break;
                    }else{
                        g.init(nbNodes);
                        if(GraphType=="GRAPH_LOCATED"){
                            step=steps::NODES;
                        }else if(GraphType =="GRAPH_UNLOCATED"){
                            step=steps::EDGES;
                        }else{
                            std::cout << "Wrong graph type:"<<GraphType<<std::endl;
                        }
                    }
                }else if (step==steps::NODES) {
                    int nbNodes;
                    int nodeId;
                    if (!(iss >> nodeId>> x >> y >> z)) {

                        std::cout << "Unable to read node"<<nodeId<<std::endl;
                        break;
                    }else{
                        Point3d P(x,y,z);
                        g.getNode(nodeId)->setLocation(P);
                        if(nbProcessedNodes==g.getNbNodes()-1){
                            step=steps::EDGES;
                        }
                        nbProcessedNodes++;

                    }
                    nodeId++;
                } else if (step==steps::EDGES) {
                    int from, to;
                    double weight;
                    if (!(iss >> from >> to >> weight)) {
                        std::cout << "Unable to read edge"<<std::endl;
                        break;
                    }else{
                        g.addEdge(from, to, weight);
                    }
                }

            }
        }
        std::cout << "Nodes: "<<g.getNbNodes()<< std::endl;
        std::cout << "Edges: "<<g.getNbEdges()<< std::endl;

        return g;
    };

};


#endif //PATHOPTIMIZATION__GRAPHREADER_H
