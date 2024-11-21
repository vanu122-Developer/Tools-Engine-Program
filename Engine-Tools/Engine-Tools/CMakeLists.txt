# CMakeList.txt : CMake project for Engine-Tools, include source and define
# project specific logic here.
#
find_package(SDL2 REQUIRED)

# Add source to this project's executable.
add_executable (Engine-Tools "Engine-Tools.cpp" "Engine-Tools.h")

target_link_libraries(Engine-Tools SDL2::SDL2 SDL2::SDL2main)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Engine-Tools PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
