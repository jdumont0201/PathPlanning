//
// Created by jbmdu on 10/04/2018.
//

#include "Window.h"
#include <string>

Window::Window(int W,int H,std::string title,DataBinder &data) :d_W(W),d_H(H), d_data(data),d_title(title) {
    data.setDimensions(W,H);
    init();
}

static void key_callback(GLFWwindow *window, int key, int scancode, int action, int mods) {
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
        glfwSetWindowShouldClose(window, GLFW_TRUE);
}

int Window::init() {
    if (!glfwInit()) return -1;/* Initialize the library */

    window = glfwCreateWindow(d_W, d_H, d_title.c_str(), NULL, NULL);/* Create a windowed mode window */
    if (!window) {
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);/* Make the window's context current */

    int width, height;
    double time = glfwGetTime();
    glfwGetFramebufferSize(window, &width, &height);
    glViewport(0, 0, width, height);
    glfwSetKeyCallback(window, key_callback);

    // tell GL to only draw onto a pixel if the shape is closer to the viewer
    glEnable(GL_DEPTH_TEST); // enable depth-testing
    glDepthFunc(GL_LESS); // depth-testing interprets a smaller value as "closer"


    loop();

    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}


void Window::loop(){
    while (!glfwWindowShouldClose(window)) {/* Loop until the user closes the window */
        glClear(GL_COLOR_BUFFER_BIT);/* Render here */
        glEnable(GL_DEPTH_TEST);
        glDepthFunc(GL_LEQUAL);    // Set the type of depth-test
        glShadeModel(GL_SMOOTH); // Enable smooth shading
        glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST); // Nice perspective corrections
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        //glOrtho(0, width, height, 0, 0, 1);
        glMatrixMode(GL_MODELVIEW);

        d_data.draw();

        glfwSwapBuffers(window);/* Swap front and back buffers */
        glfwPollEvents();/* Poll for and process events */
    }

}