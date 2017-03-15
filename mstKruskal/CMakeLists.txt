cmake_minimum_required(VERSION 3.6)
project(KruskalMST)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Edge.cpp Edge.h Test.cpp Test.h)
add_executable(KruskalMST ${SOURCE_FILES})