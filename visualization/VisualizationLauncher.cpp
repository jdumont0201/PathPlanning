//
// Created by jbmdu on 14/04/2018.
//

#include "VisualizationLauncher.h"
#include "Window.h"
#include "DataBinder.h"

VisualizationLauncher::VisualizationLauncher(DataBinder &db) : d_data(db) {

}

void VisualizationLauncher::launchVizualization() {
    std::string title = "Computer vision";
    Window W = Window(1024, 768, title, d_data);
}