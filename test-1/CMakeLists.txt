cmake_minimum_required(VERSION 3.5)
set(PROJECT_NAME test-1)
project(${PROJECT_NAME})

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 14)

file(GLOB_RECURSE SOURCE_FILES *.h *.cpp)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} test-common)
