# CMakeList.txt : CMake project for Engine-Tools, include source and define
# project specific logic here.
#

#Search SDK SDL2
find_package(SDL2 REQUIRED)

#Search SDK SDL2_image
find_package(SDL2_image REQUIRED)

# Add source to this project's executable.
add_executable (${PROJECT_NAME} "Engine-Tools.cpp" "Engine-Tools.h")

target_link_libraries(${PROJECT_NAME} SDL2::SDL2 SDL2::SDL2main SDL2_image::SDL2_image)


if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
