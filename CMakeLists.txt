cmake_minimum_required(VERSION 3.3)

project(ffg)

add_subdirectory(lib/glfw-3.4)
add_subdirectory(lib/glad)

add_executable(fight-for-glory src/main.cpp "src/Window.h" "src/Window.cpp" "src/Game.cpp" "src/Game.h"  )

target_link_libraries(fight-for-glory PUBLIC glfw)
target_link_libraries(fight-for-glory PUBLIC glad)