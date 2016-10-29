cmake_minimum_required(VERSION 2.8.9)
project(Merge-sort)

include_directories(include)

set(SOURCES src/Merge.cpp src/Main.cpp)
add_executable(Merge-sort ${SOURCES})