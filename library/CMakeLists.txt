cmake_minimum_required(VERSION 3.5)
set(PROJECT_NAME test-common)
project(${PROJECT_NAME})

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 14)

file(GLOB_RECURSE SOURCE_FILES *.h *.cpp)

add_library(${PROJECT_NAME} ${SOURCE_FILES})
