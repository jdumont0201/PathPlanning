//
// Created by jbmdu on 14/04/2018.
//

#include "RTT.h"

 void RTT::solve(PathFinderProblem &P){
    Point2d a=P.cgetInitial();
    Terrain2d T=P.cgetTerrain();
    int NB_ITERATIONS=10;
    for(int i=0;i<NB_ITERATIONS;++i){
        if (a.isInFreespace(T)){

        }
    }
}