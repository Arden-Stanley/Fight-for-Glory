<<<<<<< HEAD
cmake_minimum_required(VERSION 4.1)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)

project(ffg)

add_executable(ffg src/main.cpp src/Settings.cpp)

add_subdirectory(lib/glad)
add_subdirectory(lib/glfw-3.4)

target_link_libraries(ffg PUBLIC glad)
target_link_libraries(ffg PUBLIC glfw)
=======
cmake_minimum_required(VERSION 3.3)

project(ffg)

add_subdirectory(lib/glfw-3.4)
add_subdirectory(lib/glad)

add_executable(fight-for-glory src/main.cpp "src/Window.h" "src/Window.cpp" "src/Game.cpp" "src/Game.h"  )

target_link_libraries(fight-for-glory PUBLIC glfw)
target_link_libraries(fight-for-glory PUBLIC glad)
>>>>>>> 7163044cdae908f6346137f602ed9b827a72f2c5
