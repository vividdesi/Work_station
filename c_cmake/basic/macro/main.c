#include<stdio.h>
#ifndef CMAKEMACROSAMPLE
    #define CMAKEMACROSAMPLE "NO SYSTEM NAME"
#endif
int main()
{
   printf("Hello CMake!\n");
   printf("%s\n", CMAKEMACROSAMPLE);
    return 0;
}
