#include<stdio.h>
int main()
{
	int a[8]={20,30,70,50,10,40,80,60};
	printf("The values before sorting\n");
	int i,j;
	for(i=0;i<8;i++)
		printf("%d ",a[i]);
	printf("\nThe values after sorting\n");
	for(i=0;i<8;i++)
		for(j=0;j<8;j++)
			if(a[i]<a[j])
			{
			   int temp;
			   temp=a[i];
			   a[i]=a[j];
			   a[j]=temp;
			}
	for(i=0;i<8;i++)
                printf("%d ",a[i]);
	return 0;
}
