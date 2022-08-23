cmake_minimum_required(VERSION 3.10)
project(starcraft)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(inc)
add_subdirectory(src)

add_dependencies(starcraft starcraft_lib)