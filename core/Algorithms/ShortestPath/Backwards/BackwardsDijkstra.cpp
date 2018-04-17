//
// Created by jbmdu on 13/04/2018.
//

//
// Created by jbmdu
//

#include <iostream>
#include <queue>
#include <deque>
#include "BackwardsDijkstra.h"
#include "../../../Graph/Graph.h"
#include "../../../Graph/Node.h"
#include <algorithm>

ShortestPathResult BackwardsDijkstra::solve(ShortestPathProblem &P) {
    std::cout << "Solving using Backwards Djikstra " << std::endl;

    //SETUP
    R inf = 1000000.;
    Graph &g = P.cgetGraph();
    const pNode initial = P.cgetInitial();
    const pNode goal = P.cgetGoal();
    bool isReached = false;
    pNode x;//current

    std::priority_queue<std::pair<R,pNode>,std::vector<std::pair<R,pNode>>,std::greater<std::pair<R,pNode>> > Q; //weight is first because first is default for compare
    Q.push(std::make_pair(0,goal));
    std::vector<bool> visited(g.getNbNodes());visited[0]=true;

    int xId,xxId;
    R dx;
    std::vector<R> distance(g.getNbNodes());  for(int i=0;i< distance.size();++i) distance[i]=inf; distance[goal->getId()]=0;
    std::vector<int> pred(g.getNbNodes());

    //RUN
    while (!Q.empty()) {
        auto p = Q.top();
        Q.pop();
        x=p.second;
        xId=x->getId();
        dx=distance[xId];
        if (xId == initial->getId()) {
            break;
        } else {
            for (auto xx:x->getAntecedents()) {
                xxId=xx->getId();
                R w=g.getWeight(xxId,xId);
                R d=dx+w;
                if (!visited[xxId]) {
                    visited[xxId] = true;
                    distance[xxId]=d;
                    pred[xId]=xxId;
                    Q.push(make_pair(d,xx));
                } else {
                    if(distance[xxId]>d){
                        distance[xxId]=d;
                        pred[xId]=xxId;
                    }
                }
            }
        }
    }

    //retrieve path from pred
    int i=goal->getId();
    std::vector<int> path;
    while( i != initial->getId()){
        path.push_back(i);
        i=pred[i];
    }
    path.push_back(i);
    std::reverse(path.begin(),path.end());//reverse order

    //return
    ShortestPathResult res(path);
    return res;

}