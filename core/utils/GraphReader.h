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
#include "../Terrain/Terrain2d.h"
#include "../Terrain/Surface2d.h"

class GraphReader {
public:

    Terrain2d readFile(std::string path) {
        std::cout << "Importing terrain file " << path << std::endl;
        Terrain2d g=Terrain2d();
        enum steps {
            TYPE, SIZE, SURFACE, OBSTACLE
        };
        steps step = steps::TYPE;
        std::ifstream f(path);
        std::string line;
        std::string TerrainType;
        double x, y, z;
        int nbProcessedLines = 0;
        int nbProcessedNodes = 0;
        if (!f.good()) {
            std::cout << "File " << path << " not found" << std::endl;
            return g;
        }
        Surface2d S=Surface2d();
        Obstacle2d O=Obstacle2d();
        std::vector<Point2d> vertices;
        while (std::getline(f, line)) {

            std::istringstream iss2(line);
            std::string line2;
            if (iss2 >> line2 && line2[0] == '#') {//comment

            } else {
                std::istringstream iss(line);
                if (step == steps::TYPE) {
                    if (!(iss >> TerrainType)) {
                        std::cout << "Unable to read  type" << std::endl;
                        break;
                    } else {
                        step = steps::SIZE;
                    }
                }else{
                    std::string sign;
                    if (!(iss >> sign)) {
                        break;
                    } else {
                        if(sign == "+" || sign =="-"){

                            if(step==steps::SURFACE){
                                g.addSurface(vertices);
                                S=Surface2d();
                            }else if(step==steps::OBSTACLE){
                                g.addObstacle(vertices);
                                O=Obstacle2d();
                            }
                        }
                        if (sign == "+") {
                            step = steps::SURFACE;
                        } else if (sign == "-") {
                            step = steps::OBSTACLE;
                        }
                    }
                } else if (step == steps::SURFACE) {
                    if (!(iss >> x >> y)) {
                        std::cout << "Unable to read surface vertex" << std::endl;
                        break;
                    } else {
                        Point2d P=Point2d(x,y);
                        vertices.push_back(P);
                    }
                }else if(step==steps::OBSTACLE){
                    if (!(iss >> x >> y)) {
                        std::cout << "Unable to read surface vertex" << std::endl;
                        break;
                    } else {
                        Point2d P=Point2d(x,y);
                        vertices.push_back(P);
                    }
                }

            }
        }
        std::cout << "Nodes: " << g.getNbNodes() << std::endl;
        std::cout << "Edges: " << g.getNbEdges() << std::endl;

        return g;
    };


    /**
     * reads graph data from file path and returns a Graph
     * file must be in format : first line=nb of nodes
     * other lines: origin_node dest_node weight
     * @param path relative path to the graph description file
     */

    template<class T>
    T readFile(std::string path) {
        std::cout << "Importing file " << path << std::endl;
        T g;
        enum steps {
            TYPE, SIZE, NODES, EDGES
        };
        steps step = steps::TYPE;
        std::ifstream f(path);
        std::string line;
        std::string GraphType;
        double x, y, z;
        int nbProcessedLines = 0;
        int nbProcessedNodes = 0;
        if (!f.good()) {
            std::cout << "File " << path << " not found" << std::endl;
            return g;
        }
        while (std::getline(f, line)) {

            std::istringstream iss2(line);
            std::string line2;
            if (iss2 >> line2 && line2[0] == '#') {//comment

            } else {
                std::istringstream iss(line);
                if (step == steps::TYPE) {
                    if (!(iss >> GraphType)) {
                        std::cout << "Unable to read graph type" << std::endl;
                        break;
                    } else {
                        step = steps::SIZE;
                    }
                } else if (step == steps::SIZE) {
                    int nbNodes;
                    if (!(iss >> nbNodes)) {
                        std::cout << "Unable to read graph size" << std::endl;
                        break;
                    } else {
                        g.init(nbNodes);
                        if (GraphType == "GRAPH_LOCATED") {
                            step = steps::NODES;
                        } else if (GraphType == "GRAPH_UNLOCATED") {
                            step = steps::EDGES;
                        } else {
                            std::cout << "Wrong graph type:" << GraphType << std::endl;
                        }
                    }
                } else if (step == steps::NODES) {
                    int nbNodes;
                    int nodeId;
                    if (!(iss >> nodeId >> x >> y >> z)) {

                        std::cout << "Unable to read node" << nodeId << std::endl;
                        break;
                    } else {
                        Point3d P(x, y, z);
                        g.getNode(nodeId)->setLocation(P);
                        if (nbProcessedNodes == g.getNbNodes() - 1) {
                            step = steps::EDGES;
                        }
                        nbProcessedNodes++;

                    }
                    nodeId++;
                } else if (step == steps::EDGES) {
                    int from, to;
                    double weight;
                    if (!(iss >> from >> to >> weight)) {
                        std::cout << "Unable to read edge" << std::endl;
                        break;
                    } else {
                        g.addEdge(from, to, weight);
                    }
                }

            }
        }
        std::cout << "Nodes: " << g.getNbNodes() << std::endl;
        std::cout << "Edges: " << g.getNbEdges() << std::endl;

        return g;
    };

};


#endif //PATHOPTIMIZATION__GRAPHREADER_H
