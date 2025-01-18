ACLOCAL_AMFLAGS = -I m4

# Define the program to be built
bin_PROGRAMS = code

# Source files for the program
code_SOURCES = main.c mathlib.h

# Link the program with the shared library
code_LDADD = libmath.la

# Define the shared library
lib_LTLIBRARIES = libmath.la
libmath_la_SOURCES = func.c
libmath_la_LDFLAGS = -version-info 1:0:0

# Define the static library
lib_LIBRARIES = libmath.a
libmath_a_SOURCES = func.c

