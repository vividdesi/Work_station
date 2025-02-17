#include<stdio.h>
int main()
{
	int a[5];
	int i=0,j=0,check=0;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		check=0;
		for(j=1;j<5;j++)
		{
			if(i!=j)
			{
				if(a[i]==a[j])check++;
			}
		}
		if(check==0)printf("%d ",a[i]);
	}
	

	return 0;
}

