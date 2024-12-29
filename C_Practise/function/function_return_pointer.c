#include<stdio.h>
void calculate(int a,int b,int *p,int *q)
{
	*p=a+b;
	*q=a*b;
}

int main()
{
	int sum,multi;
	calculate(10,30,&sum,&multi);
	printf("The sum is %d\n",sum);
	printf("Tje multiplication is %d\n",multi);
	return 0;
}

