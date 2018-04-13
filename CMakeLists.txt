cmake_minimum_required(VERSION 3.10)
project(untitled)

set(CMAKE_CXX_STANDARD 11)

add_executable(untitled main.cpp Graph/Graph.cpp Graph/Graph.h Graph/Edge.cpp Graph/Edge.h Graph/Node.cpp Graph/Node.h utils/GraphReader.cpp utils/GraphReader.h Algorithms/Problem.cpp Algorithms/Problem.h Algorithms/Djikstra.cpp Algorithms/Djikstra.h Algorithms/Solver.cpp Algorithms/Solver.h utils/Types.cpp utils/Types.h Algorithms/Astar.cpp Algorithms/Astar.h)