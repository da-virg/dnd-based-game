cmake_minimum_required(VERSION 3.0.0)
project(dnd-based-game VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(dnd-based-game src/engine.cpp src/things.hpp src/main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
