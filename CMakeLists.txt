cmake_minimum_required(VERSION 3.10)
project(starcraft)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(LIBRARY_SRC inc/Marine.h inc/Marine.cpp inc/PhotonCannon.h inc/PhotonCannon.cpp)
add_library(mylib SHARED ${LIBRARY_SRC})
set_target_properties(mylib PROPERTIES LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set_target_properties(mylib PROPERTIES PREFIX "")
set_target_properties(mylib PROPERTIES OUTPUT_NAME "lib_starcraft")
set_target_properties(mylib PROPERTIES SUFFIX ".so")

set(SOURCE_FILES src/main.cpp)
add_executable(starcraft ${SOURCE_FILES})
target_link_libraries(starcraft mylib)
