//
// Created by jbmdu on 14/04/2018.
//

#include "Terrain3d.h"
#include "BoundingBox3d.h"
#include "../utils/Geometry/Point3d.h"
#include <iostream>
#include <algorithm>
#include <fstream>
#include <sstream>


Terrain3d::Terrain3d(std::string path){
        std::cout << "Importing file "<<path<<std::endl;
        std::ifstream f(path);
        std::string line;
        if (!f.good()) {
            std::cout << "File "<<path<<" not found" << std::endl;
            return;
        }
        double inf=1e16;
        double xmax=-inf,xmin=inf,ymax=-inf,ymin=inf,zmax=-inf,zmin=inf;
        while (std::getline(f, line)) {
            std::istringstream iss(line);
                double x, y,z;
                double weight;
                if( line =="-"){

                }
                if (!(iss >> x >> y >> z)) {
                    break;
                }else{
                    d_vertices.push_back(Point3d(x,y,z));
                    xmin=std::min(xmin,x);
                    ymin=std::min(ymin,y);
                    xmax=std::max(xmax,x);
                    ymax=std::max(ymax,y);
                    zmax=std::max(zmin,z);
                    zmin=std::max(zmax,z);
                }
        }
        d_boundingbox=BoundingBox3d(xmin,ymin,zmin,xmax,ymax,zmax);
}