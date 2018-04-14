//
// Created by jbmdu on 10/04/2018.
//

#ifndef NN_WINDOW_H
#define NN_WINDOW_H
#include "../include/GLFW/glfw3.h"
#include "DataBinder.h"
#include <string>

class Window {
    DataBinder & d_data;
    std::string d_title;
    const int d_W,d_H;
    GLFWwindow * window;
public:
    Window(int W,int H,std::string title,DataBinder &  data);
    int init();
    void loop();


};


#endif //NN_WINDOW_H
