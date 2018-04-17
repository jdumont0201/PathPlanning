//
// Created by jean on 17/04/18.
//

#ifndef UNTITLED_GENERICPOINT_H
#define UNTITLED_GENERICPOINT_H

#include <vector>
#include "../Types.h"

class PointNd {
    typedef Types::R R;
    std::vector<R> d_pos;
public:
    R get(int dim);

};


#endif //UNTITLED_GENERICPOINT_H
