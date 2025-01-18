AC_INIT([mylibrary], [1.0], [your_email@example.com])  # Initializes the project with name, version, and email.
AC_PREREQ([2.69])                                     # Requires Autoconf version 2.69 or higher.
AM_INIT_AUTOMAKE([-Wall -Werror foreign])             # Initializes Automake with strict warnings and relaxed standards.

# Checks for programs
AC_PROG_CC                                            # Checks for a C compiler.
AM_PROG_AR                                            # Checks for an archiver program (e.g., ar).

# Checks for libraries
LT_INIT                                              # Initializes Libtool for shared and static library handling.

# Macro directory
AC_CONFIG_MACRO_DIRS([m4])                           # Specifies the directory for custom macros.

# Checks for header files
AC_CONFIG_HEADERS([config.h])                        # Creates a configuration header file template.

# Generate output files
AC_CONFIG_FILES([                                    # Lists the Makefile templates to process.
    Makefile
    src/Makefile
])
AC_OUTPUT                                            # Generates the output files.

