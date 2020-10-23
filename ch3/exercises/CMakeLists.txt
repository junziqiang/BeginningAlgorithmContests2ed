cmake_minimum_required(VERSION 2.8)
project(examples)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_CXX_FLAGS "$ENV{CXXFLAGS} -rdynamic -O0 -ggdb -std=c++11 -Wall -Wno-deprecated -Wno-unused-function")

include_directories(.)




add_executable(1585 uva1585.cpp)
add_executable(1586 uva1586.cpp)
add_executable(1225 uva1225.cpp)
add_executable(455 uva455.cpp)
add_executable(test test.cpp)


SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)