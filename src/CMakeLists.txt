if (WIN32)
	message("Executable target platform is NT")
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
endif (WIN32)

if (UNIX)
	message("Executable target platform is *NIX")
endif (UNIX)

SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/debug)

add_executable(starcraft main.cpp)
target_link_libraries(starcraft PRIVATE starcraft_lib)