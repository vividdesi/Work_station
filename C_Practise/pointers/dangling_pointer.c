#include<stdio.h>
int main()
{
	int *ptr=(int *)malloc(sizeof(int)*4);
	free(ptr);
	ptr=NULL;//after deallocating the ptr if we use to derefference to will undefine behavour
	return 0;
}
