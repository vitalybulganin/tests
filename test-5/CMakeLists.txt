cmake_minimum_required(VERSION 3.5)
set(PROJECT_NAME test-5)
project(${PROJECT_NAME})

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 14)

include_directories(library)
include_directories(../library)

file(GLOB_RECURSE SOURCE_FILES *.h *.cpp)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} test-common)
