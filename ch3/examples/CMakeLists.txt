cmake_minimum_required(VERSION 2.8)
project(examples)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_CXX_FLAGS "$ENV{CXXFLAGS} -rdynamic -O0 -ggdb -std=c++11 -Wall -Wno-deprecated -Wno-unused-function")

include_directories(.)




add_executable(272 uva272.cpp)
add_executable(10082 uva10082.cpp)
add_executable(401 uva401.cpp)
add_executable(304 uva304.cpp)
add_executable(1583 uva1583.cpp)
add_executable(1584 uva1584.cpp)
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)