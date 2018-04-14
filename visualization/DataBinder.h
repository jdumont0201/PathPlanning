//
// Created by jbmdu on 11/04/2018.
//

#ifndef NN_DATABINDER_H
#define NN_DATABINDER_H

#include "../core/Terrain/Terrain.h"
#include "Primitives.h"
#include "../include/GLFW/glfw3.h"

class DataBinder {
    Terrain &d_T;
    int d_W;
    int d_H;
public:
    void setDimensions(int W, int H);

    DataBinder(Terrain &T);

   void draw();
};


#endif //NN_DATABINDER_H
