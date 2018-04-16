//
// Created by jbmdu on 14/04/2018.
//

#include "Terrain2d.h"
#include "BoundingBox.h"
#include "../utils/Geometry/Point2d.h"
#include <iostream>
#include <algorithm>
#include <fstream>
#include <sstream>


Terrain2d::Terrain2d(std::string path){
        std::cout << "Importing file "<<path<<std::endl;
        std::ifstream f(path);
        std::string line;
        if (!f.good()) {
            std::cout << "File "<<path<<" not found" << std::endl;
            return;
        }
        double inf=1e16;
        double xmax=-inf,xmin=inf,ymax=-inf,ymin=inf;
        while (std::getline(f, line)) {
            std::istringstream iss(line);
                double x, y;
                double weight;
                if( line =="-"){

                }
                if (!(iss >> x >> y)) {
                    break;
                }else{
                    d_vertices.push_back(Point2d(x,y));
                    xmin=std::min(xmin,x);
                    ymin=std::min(ymin,y);
                    xmax=std::max(xmax,x);
                    ymax=std::max(ymax,y);
                }
        }
        d_boundingbox=BoundingBox(xmin,ymin,xmax,ymax);
}