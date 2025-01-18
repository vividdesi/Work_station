#include <stdio.h>
#include <stdlib.h>

int main() {
    int r1, c1, r2, c2;
    printf("enter row1 and col1:\n");
    if (scanf("%d%d", &r1, &c1) != 2)
        return 1;
    printf("enter row2 and col2:\n");
    if (scanf("%d%d", &r2, &c2) != 2)
        return 1;
    if (r1 <= 0 || c1 <= 0 || r2 <= 0 || c2 <= 0 || c1 != r2) {
        printf("invalid matrix sizes\n");
        return 1;
    } else {
#if !defined ALLOCATE_MATRICES_FROM_THE_HEAP
        // if the dimensions are small, you can define the matrices as
        int a[r1][c1], b[r2][c2], c[r1][c2];
#else
        // for large sizes, you can allocate the matrices from the heap this way:
        int (*a)[c1] = calloc(sizeof(*a), r1);
        int (*b)[c2] = calloc(sizeof(*b), r2);
        int (*c)[c2] = calloc(sizeof(*c), r1);
        if (a == NULL || b == NULL || c == NULL) {
            printf("out of memory\n");
            return 1;
        }
#endif
        printf("enter elements of 1st matrix:");
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                a[i][j] = 0;
                scanf("%d", &a[i][j]);
            }
        }
        printf("\n-----------------");
        printf("enter elements of 2nd matrix:");
        for (int i = 0; i < r2; i++) {
            for (int j = 0; j < c2; j++) {
                b[i][j] = 0;
                scanf("%d", &b[i][j]);
            }
        }
    
        printf("the resultant matrix is:\n");
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                int v = 0;
                for (int k = 0; k < c1; k++) {
                    v += a[i][k] * b[k][j];
                }
                c[i][j] = v;
            }
        }
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                printf("%5d\t", c[i][j]);
            }
            printf("\n\n");
        }
#if defined ALLOCATE_MATRICES_FROM_THE_HEAP
        free(a);
        free(b);
        free(c);
#endif
        return 0;
    }
}

