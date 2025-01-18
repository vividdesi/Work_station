# Specify the program to be built
bin_PROGRAMS = myprogram

# Specify the sources for the program
myprogram_SOURCES = main.c

# Link the program to the shared library
myprogram_LDADD = libmath.la

# Define the shared library
lib_LTLIBRARIES = libmath.la

# Sources for the shared library
libmath_la_SOURCES = src/mathlib.c src/mathlib.h

# Set version info for the shared library (optional)
libmath_la_LDFLAGS = -version-info 1:0:0
```

