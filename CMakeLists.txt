cmake_minimum_required(VERSION 4.1)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)

project(ffg)

add_executable(ffg src/main.cpp src/Settings.cpp)

add_subdirectory(lib/glad)
add_subdirectory(lib/glfw-3.4)

target_link_libraries(ffg PUBLIC glad)
target_link_libraries(ffg PUBLIC glfw)
