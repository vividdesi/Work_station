cmake_minimum_required(VERSION 3.9.1)
project(macro)
if(${CMAKE_SYSTEM_NAME} MATCHES Linux)
    add_definitions(-DCMAKEMACROSAMPLE="LINUX SYSTEMS")
elseif(${CMAKE_SYSTEM_NAME} MATCHES Windows)
    add_definitions(-DCMAKEMACROSAMPLE="Windows PC")
endif()
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)
add_executable(executable main.c)

