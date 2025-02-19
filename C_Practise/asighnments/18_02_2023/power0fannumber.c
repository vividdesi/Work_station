#include<stdio.h>
int main()
{
	int base=0,exponent=0,sq=1;
	printf("enter the number\n");
	scanf("%d%d",&base,&exponent);
	if(exponent<0)
	{
	while(exponent<0)
	{
		exponent++;
		sq*=base;
		printf("the sq value is %d\n",sq);
	}
	printf("the value is %lf\n",(double)1/sq);
}
	else
	{
		for(int i=0;i<exponent;i++)
		{
			sq*=base;
		}
		printf("The value is %d\n",sq);
	}
	return 0;
}

