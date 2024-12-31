#include<stdio.h>
int main()
{
	int i,j;
	int n,p;
	printf("Enter the number of rows\n");
	scanf("%d",&n);
	p=n+4;
	for(i=1;i<=n;i++)
	{
		for (j=1;j<=(n+3);j++)
		{
			if(j>=i && j<=p-i)
				printf("*");

			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
