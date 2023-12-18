cmake_minimum_required(VERSION 3.10)
project(Apps)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 14)

include_directories(./dependencies/extism/runtime)

# Add the directory containing extism's CMakeLists.txt to the build.
add_subdirectory(./dependencies/extism/libextism extism)

# Add an executable target for your StaticApp application.
add_executable(StaticApp main.cpp)

# Link the extism-static library to your StaticApp application.
target_link_libraries(StaticApp extism-static)

# Add an executable target for your DynamicApp application.
add_executable(DynamicApp main.cpp)

# Link the extism-shared library to your DynamicApp application.
target_link_libraries(DynamicApp extism-shared)