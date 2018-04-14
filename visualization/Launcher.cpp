//
// Created by jbmdu on 14/04/2018.
//

#include "Launcher.h"
#include "Window.h"
#include "DataBinder.h"

Launcher::Launcher(DataBinder &db) : d_data(db) {

}

void Launcher::launchVizualization() {
    std::string title = "Computer vision";
    Window W = Window(1024, 768, title, d_data);
}