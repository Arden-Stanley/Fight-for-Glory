<<<<<<< HEAD
cmake_minimum_required(VERSION 4.1)

project(glad)

add_library(glad src/glad.c)

target_include_directories(glad PUBLIC include/)
=======
cmake_minimum_required(VERSION 3.3)
project(glad)

add_library(glad src/gl.c include/glad/gl.h)

target_include_directories(glad PUBLIC include/)
>>>>>>> 7163044cdae908f6346137f602ed9b827a72f2c5
