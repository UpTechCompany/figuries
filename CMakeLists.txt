cmake_minimum_required(VERSION 3.25)
project(figuries)

set(CMAKE_CXX_STANDARD 23)

add_executable(figuries main.cpp figures/circle/circle.cpp figures/triangle/triangle.cpp figures/rectangle/rectangle.cpp figures/elips/elips.cpp figures/polygon/polygon.cpp vector/vector.cpp)
