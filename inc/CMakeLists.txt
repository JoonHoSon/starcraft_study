set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/debug/lib)
add_library(starcraft_lib SHARED Marine.h Marine.cpp PhotonCannon.h PhotonCannon.cpp)

if (WIN32)
	message("Shared library platform is NT(dll)")
	set_target_properties(starcraft_lib PROPERTIES SUFFIX ".dll")
endif (WIN32)

if (UNIX)
	message("Shared library platform is *NIX(so)")
	set_target_properties(starcraft_lib PROPERTIES SUFFIX ".so")
endif (UNIX)