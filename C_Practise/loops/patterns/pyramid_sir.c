#include<stdio.h>
int main()
{
	int i,j,p,q,n;
	printf("Enter the number of rows\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=((n*2)-1);j++)
		{
			if(j>=((n+1)-i) && j<=(i+(n-1)))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");	
	}
	return 0;
}
