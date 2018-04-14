//
// Created by jbmdu on 14/04/2018.
//

#include "PathFinderProblem.h"

PathFinderProblem::PathFinderProblem(Terrain2d d_terrain,Point2d from,Point2d to):d_terrain(d_terrain),d_from(from),d_to(to){

}

Point2d PathFinderProblem::cgetInitial() const{
    return d_from;
}
Terrain2d PathFinderProblem::cgetTerrain() const{
    return d_terrain;
}
Point2d PathFinderProblem::cgetGoal() const{
    return d_to;
}
