#include <stdio.h>

// Declare the external global variable from file1.c
extern int global_counter;
extern int counter=0;
// Trying to neclare 'extern int counter;' will FAIL because `counter` is static in file1.c

void print_global_counter() {
    printf("Global Counter (from file1.c): %d\n", global_counter);
    printf("Trying static as extern  Counter (from file1.c): %d\n",counter);
}
