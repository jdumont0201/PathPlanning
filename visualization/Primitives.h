//
// Created by jbmdu on 11/04/2018.
//

#ifndef NN_PRIMITIVES_H
#define NN_PRIMITIVES_H
#include <math.h>
#include "../include/GLFW/glfw3.h"
#include <string>

class Primitives {

public:
    struct Point{
        int x;
        int y;
    };
    static void circle(float x, float y, float r, int segments);
    static void disc(float x, float y, float r, int segments);
    static void line(float x1, float y1,float x2, float y2);
    static void text(float x1,float y1,std::string text);
    static void cube(float x1,float y1,float z1,float x2,float y2,float z2);
};


#endif //NN_PRIMITIVES_H
