//
// Created by jbmdu on 14/04/2018.
//

#ifndef UNTITLED_LAUNCHER_H
#define UNTITLED_LAUNCHER_H

#include "DataBinder.h"

class VisualizationLauncher {
    DataBinder d_data;
public:
    VisualizationLauncher(DataBinder &db) ;

    void launchVizualization();
};


#endif //UNTITLED_LAUNCHER_H
