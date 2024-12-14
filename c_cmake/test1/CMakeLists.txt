cmake_minimum_required(VERSION 3.00)
project(test_name C)

# Set C standard to C99
set(CMAKE_C_STANDARD 99)

# Add pthread flag for multithreading (conditionally for UNIX)
if(UNIX)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -pthread")
endif()

# Include header files directory
include_directories(${CMAKE_SOURCE_DIR}/include)  # Adjust path as needed

# Find all .c source files in the "source" directory
file(GLOB MAIN "source/*.c")

# Create the executable from the source files
add_executable(executable ${MAIN})

