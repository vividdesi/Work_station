#include <stdio.h>

// Static variable (accessible only in file1.c)
static int counter = 0;

// Global variable (accessible from other files using extern)
int global_counter = 100;

// Function to modify and print the static variable
void increment_counter() {
    counter++;
    printf("Counter inside file1.c: %d\n", counter);
}

