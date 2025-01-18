# Define the libraries to be built. 
# `lib_LTLIBRARIES` specifies that we are building a Libtool library.
# This will produce a dynamic shared library (libmylib.so) and possibly a static library (libmylib.a).
lib_LTLIBRARIES = libmylib.la

# Source files that make up the library.
# `libmylib_la_SOURCES` lists all the C source files that will be compiled and linked into the library.
libmylib_la_SOURCES = square.c

# Header files that should be installed to the include directory during `make install`.
# `include_HEADERS` tells Automake to install the specified header files (here, square.h) into the system's include directory ($(includedir)).
include_HEADERS = square.h

# Linker flags for the library.
# `libmylib_la_LDFLAGS` sets special flags for the library. 
# - `-version-info 1:0:0`: Defines the library version.
#    - `1`: Current interface version.
#    - `0`: Revision of the current interface.
#    - `0`: Age of the oldest interface version still supported.
# - `-no-undefined`: Ensures that all symbols are defined when building the shared library.
libmylib_la_LDFLAGS = -version-info 1:0:0 -no-undefined

