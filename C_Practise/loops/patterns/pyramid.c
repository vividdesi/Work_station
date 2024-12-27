#include<stdio.h>
int main()
{
	int a=4,b=1;
	int i,k,j;
	for(i=1;i<=5;i++)
	{
		for(j=0;j<a;j++)
		{
			printf(" ");
		}

	        for(k=0;k<b;k++)
		{
		       printf("*");
		}
                       printf("\n");
                a--;
                b+=2;
	}
return 0;
}
