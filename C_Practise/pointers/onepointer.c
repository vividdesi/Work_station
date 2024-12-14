#include<stdio.h>
int main()
{
	int *p=NULL;
	int a=10,b=20;
	p=&a;
	printf("The address of pointer is %p and address of a is %p\n",p,&a);
	 p=&b;
        printf("The address of pointer is %p and address of b is %p\n",p,&b);
	return 0;
}

