# Our binary is produced here
bin_PROGRAMS = main
main_SOURCES = main.c
# main binary will be installed into the default directory for "bin"s (hence we used the bin
# prefix
noinst_LIBRARIES = lib.a
lib_a_SOURCES = func.c mathlib.h
# noinst_ : assures that this library is not installed to the user's computer
# libBLAH.a is a *nix convention. If you noticed, we replaced the . with _ in SOURCES line.
main_LDADD = lib.a 
# LDADD specifies which libraries to compile into "main". We have two libraries.
# libhelper comes from this directory and libmyadd come from my_inc directory.

