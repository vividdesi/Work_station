#include<stdio.h>
#ifndef CMAKEMACROSAMPLE
  #define "No system name"
#endif
int main()
{
	printf("Hello world\n");
	printf("%s\n",CMAKEMACROSAMPLE);
	return 0;
}
