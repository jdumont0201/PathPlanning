//
// Created by jbmdu on 14/04/2018.
//

#ifndef UNTITLED_PATHFINDERPROBLEM_H
#define UNTITLED_PATHFINDERPROBLEM_H


#include "../../utils/geometry/Point2d.h"
#include "../../Terrain/Terrain2d.h"

class PathFinderProblem {
    Point2d d_from;
    Point2d d_to;
    Terrain2d & d_terrain;
public:
    PathFinderProblem(Terrain2d d_terrain,Point2d from,Point2d to);

    /**
     *
     * @return Point2d initial state
     */
    Point2d cgetInitial() const;
    /**
     *
     * @return Point2d goal state
     */
    Point2d cgetGoal() const;
/**
     *
     * @return Terrain2d terrain
     */
    Terrain2d cgetTerrain() const;
};


#endif //UNTITLED_PATHFINDERPROBLEM_H
