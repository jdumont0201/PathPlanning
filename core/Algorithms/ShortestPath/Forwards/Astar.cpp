//
// Created by jbmdu on 13/04/2018.
//

#include <iostream>
#include <queue>
#include <deque>

#include "../../../Graph/Graph.h"
#include "../../../Graph/Node.h"
#include <algorithm>
#include "Astar.h"
#include "../../Result.h"
#include "../../../Path/Path.h"
#include <algorithm>

ShortestPathResult Astar::solve(ShortestPathProblem &P) {
    std::cout << "Solving using Astar " << std::endl;

    //SETUP
    Graph &g = P.cgetGraph();
    const pNode initial = P.cgetInitial();
    const pNode goal = P.cgetGoal();
    pNode x;
    std::priority_queue<std::pair<R,pNode>,std::vector<std::pair<R,pNode>>,std::greater<std::pair<R,pNode>> > Q; //weight is first because first is default for compare
    Q.push(std::make_pair(0,initial));
    std::vector<bool> visited(g.getNbNodes());visited[0]=true;
    std::vector<R> guess(g.getNbNodes()); for(int i=0;i<guess.size();++i) guess[i]=abs(i-initial->getId());
    double inf = 1000000;

    int xId,xxId;
    double dx;
    std::vector<R> distance(g.getNbNodes());  for(int i=0;i< distance.size();++i) distance[i]=inf; distance[initial->getId()]=0;
    std::vector<int> pred(g.getNbNodes());

    //RUN
    while (!Q.empty()) {
        auto p = Q.top();
        Q.pop();
        x=p.second;
        xId=x->getId();
        dx=distance[xId]+guess[xId];
        if (xId == goal->getId()) {
            break;
        } else {
            for (auto xx:x->getAdjacents()) {
                xxId=xx->getId();
                R d=dx+g.getWeight(xId,xxId)+guess[xxId];
                if (!visited[xxId]) {
                    visited[xxId] = true;
                    distance[xxId]=d;
                    pred[xxId]=xId;
                    Q.push(make_pair(d,xx));
                } else {
                    if(distance[xxId]>d){
                        distance[xxId]=d;
                        pred[xxId]=xId;
                    }
                }
            }
        }
    }

    //store result
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