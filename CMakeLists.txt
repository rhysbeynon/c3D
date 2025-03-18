cmake_minimum_required(VERSION 3.16)
project(c3D)

set(CMAKE_CXX_STANDARD 20)

# Find and link GLFW
find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)

add_executable(c3D src/main.cpp)
target_link_libraries(c3D glfw OpenGL::GL)