#include<stdio.h>
int main()
{
	int arr[8]={5,2,3,7,6,4,9,8};
	int i,j,k=0;
	int sim[8];
	int count=0;
	printf("The given array is\n");
	for(i=0;i<8;i++)printf("%d ",arr[i]);
	printf("\n");
	for(i=1;i<8;i++)
	{
		for(j=i+1;j<8;j++)
		{
			if(arr[0]==arr[j]-arr[i])
			{ 
				count++;
				sim[k]=arr[j];
				k++;
				sim[k]=arr[i];
				k++;
			}
		}
	}
	printf("The distinct pairs of 5 are:");
	k=0;
	while(sim[k]!=0)
	{  
		printf("[%d,%d] ",sim[k],sim[++k]);
	}
	printf("\n");
	printf("Number of sistinct pairs for difference of 5 is %d",count);
}



