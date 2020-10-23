cmake_minimum_required(VERSION 2.8)
project(examples)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_CXX_FLAGS "$ENV{CXXFLAGS} -rdynamic -O0 -ggdb -std=c++11 -Wall -Wno-deprecated -Wno-unused-function")

include_directories(.)




add_executable(1-1 1-1.cpp)
add_executable(1-2 1-2.cpp)
add_executable(1-3 1-3.cpp)
add_executable(1-4 1-4.cpp)
add_executable(1-5 1-5.cpp)
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

