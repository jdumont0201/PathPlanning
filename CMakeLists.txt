cmake_minimum_required(VERSION 3.10)
project(untitled)

include_directories(${GLFW_INCLUDE_DIRS})
include_directories(include/freetype/include)


#set(Boost_INCLUDE_DIR C:/dev/boost_1_66_0)
#set(Boost_LIBRARY_DIR C:/dev/boost_1_66_0/)
#include_directories((${Boost_INCLUDE_DIR})
#link_directories(${Boost_LIBRARY_DIR})

set(CMAKE_CXX_STANDARD 17)
set(SOURCES_TERRAIN core/Terrain/Terrain.cpp core/Terrain/Terrain.h core/Terrain/Box3d.cpp core/Terrain/Box3d.h)
set(SOURCES_GRAPH core/Graph/Graph.cpp core/Graph/Graph.h core/Graph/Edge.cpp core/Graph/Edge.h core/Graph/Node.cpp core/Graph/Node.h core/Graph/UnorientedGraph.cpp core/Graph/UnorientedGraph.h core/Graph/OrientedGraph.cpp core/Graph/OrientedGraph.h)
set(SOURCES_ALGORITHMS core/Algorithms/GenericProblem.cpp core/Algorithms/GenericProblem.h core/Algorithms/ShortestPath/Forwards/Dijkstra.h core/Algorithms/ShortestPath/Backwards/BackwardsDijkstra.h core/Algorithms/Solver.cpp core/Algorithms/Solver.h core/Algorithms/ShortestPath/Forwards/Astar.cpp core/Algorithms/ShortestPath/Forwards/Astar.h core/Algorithms/Result.cpp core/Algorithms/Result.h core/Algorithms/ShortestPath/Backwards/BackwardsDijkstra.cpp core/Algorithms/ShortestPath/Forwards/Dijkstra.cpp)
set(SOURCES_UTILS core/utils/GraphReader.cpp core/utils/GraphReader.h core/utils/Types.cpp core/utils/Types.h )
set(SOURCES_VISUALIZATION visualization/Window.cpp visualization/Window.h visualization/DataBinder.cpp visualization/DataBinder.h visualization/Primitives.cpp visualization/Primitives.h visualization/Launcher.cpp visualization/Launcher.h core/Algorithms/ShortestPath/ShortestPathProblem.cpp core/Algorithms/ShortestPath/ShortestPathProblem.h core/Terrain/Terrain2d.cpp core/Terrain/Terrain2d.h core/Terrain/Obstacle2d.cpp core/Terrain/Obstacle2d.h core/utils/Geometry/Point2d.cpp core/utils/Geometry/Point2d.h core/Algorithms/PathFinder/PathFinderProblem.cpp core/Algorithms/PathFinder/PathFinderProblem.h core/Algorithms/PathFinder/RTT.cpp core/Algorithms/PathFinder/RTT.h core/Terrain/BoundingBox2d.cpp core/Terrain/BoundingBox2d.h tasks/Global.cpp tasks/Global.h core/Path/Path.cpp core/Path/Path.h core/Path/PathUnit.cpp core/Path/PathUnit.h core/Algorithms/PathFinder/Bug1.cpp core/Algorithms/PathFinder/Bug1.h core/Algorithms/ShortestPath/ShortestPathResult.cpp core/Algorithms/ShortestPath/ShortestPathResult.h core/Algorithms/PathFinder/PathFinderResult.cpp core/Algorithms/PathFinder/PathFinderResult.h core/utils/Geometry/Point3d.cpp core/utils/Geometry/Point3d.h core/utils/Geometry/PointNd.cpp core/utils/Geometry/PointNd.h core/utils/Geometry/GenericPoint.cpp core/utils/Geometry/GenericPoint.h core/Terrain/BoundingBox3d.cpp core/Terrain/BoundingBox3d.h core/Terrain/Terrain3d.cpp core/Terrain/Terrain3d.h core/Terrain/Obstacle3d.cpp core/Terrain/Obstacle3d.h core/PathPlanning.h)


#FIND_PACKAGE( Boost 1.66 COMPONENTS program_options REQUIRED )
find_package (OpenGL REQUIRED)

add_executable(untitled main.cpp
        ${SOURCES_TERRAIN}
        ${SOURCES_GRAPH}
        ${SOURCES_ALGORITHMS}
        ${SOURCES_UTILS}
        ${SOURCES_VISUALIZATION}
       )

target_link_libraries(${PROJECT_NAME}  glfw ${OPENGL_LIBRARIES} ${GLFW_LIBRARIES} -pthread ${CMAKE_SOURCE_DIR}/include/freetype/win64/freetype.dll)