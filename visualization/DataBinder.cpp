//
// Created by jbmdu on 11/04/2018.
//

#include "DataBinder.h"
#include "Primitives.h"

DataBinder::DataBinder(Terrain &T) : d_T(T) {

}

void DataBinder::setDimensions(int W, int H) {
    d_W = W;
    d_H = H;
}

void DataBinder::draw() {

    glLineWidth(1.0);
    glColor3f(1.0, 1.0, 1.0);

    for (auto b: d_T.getBoxes()) {
        Primitives::cube(b.getX(), b.getY(), b.getZ(), b.getXX(), b.getYY(), b.getZZ());
    }


}