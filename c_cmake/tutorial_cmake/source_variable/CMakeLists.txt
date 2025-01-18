cmake_minimum_required(VERSION 3.9.1)
project(source_variable)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -WALL")
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/BIN)
set(SOURCE main.c header.h function.c)
add_executable(execute ${SOURCE})

