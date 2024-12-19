#include<stdio.h>
int main()
{
	int x=5;
	int *p=&x;
	*p=6;
	int **q=&p;
	int ***r=&q;
	printf("The value of x is %d\n",x);
	printf("The address of x is %p\n",&x);
	printf("The value of *p is %d\n",*p);
	printf("The address value of *p is %p\n",p);
	printf("The address of *p is %p\n",&p);
	printf("The pointer address value stored in q is %p\n",q);
	printf("The address value  of *q is %p\n",*q);
	printf("The value of q is %d\n",**q);
	printf("The pointer address value stored in r is %p\n",*r);
        printf("The address value  of *r is %p\n",**r);
        printf("The value of r is %d\n",***r);
	return 0;
}
