cmake_minimum_required(VERSION 3.10)

project(nchoosek)

set(CMAKE_C_STANDARD 11)

### Source code
include_directories("${PROJECT_SOURCE_DIR}/include")
file(GLOB sources "${PROJECT_SOURCE_DIR}/src/*.c")
#add_executable(${PROJECT_NAME} ${sources})
add_executable(nchoosek src/main.c)

