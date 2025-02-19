#include <stdio.h>
#include <time.h>

#define ITERATIONS 100000000

void without_register() {
    int sum = 0;
    int i;
    for (i = 0; i < ITERATIONS; i++) {
        sum += i;
    }
    printf("Without register: %d\n", sum);
}

void with_register() {
    int sum = 0;
    register int i;
    for (i = 0; i < ITERATIONS; i++) {
        sum += i;
    }
    printf("With register: %d\n", sum);
}

int main() {
    clock_t start, end;

    start = clock();
    without_register();
    end = clock();
    printf("Time without register: %f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);

    start = clock();
    with_register();
    end = clock();
    printf("Time with register: %f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);

    return 0;
}

