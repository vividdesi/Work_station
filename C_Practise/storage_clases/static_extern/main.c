#include <stdio.h>

// Function declarations from other files
void increment_counter();
void print_global_counter();

int main() {
    printf("Initial Global Counter: \n");
    print_global_counter(); // Access extern variable from file1.c

    printf("\nIncrementing static counter inside file1.c:\n");
    increment_counter();
    increment_counter(); // Calls again to show static variable retains value

    return 0;
}

