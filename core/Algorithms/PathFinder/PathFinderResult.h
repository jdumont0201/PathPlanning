//
// Created by jbmdu on 14/04/2018.
//

#ifndef UNTITLED_PATHFINDERRESULT_H
#define UNTITLED_PATHFINDERRESULT_H


#include "../../utils/Types.h"
#include "../../Path/Path.h"
#include <vector>
class PathFinderResult {
    typedef Types::pEdge pEdge;
    typedef Types::pNode pNode;
    typedef Types::R R;

public:
    const Path &getPath() const;
    void setPath(const Path &path);
private:
    Path d_path;
};


#endif //UNTITLED_PATHFINDERRESULT_H
