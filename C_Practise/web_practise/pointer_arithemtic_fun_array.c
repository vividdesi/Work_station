#include<stdio.h>
void fun(int *start,int size)
{
	int *end=start +(size-1);
	int tmp;
	while(start<end)
	{
		tmp=*start;
		*start=*end;
		*end=tmp;
		start++;
		end--;
	}
}
int main()
{
	int a[5]={1,2,3,4,5};
	for(int i=0;i<5;i++)
		printf("%d\n",a[i]);
	fun(a,5);
	for(int i=0;i<5;i++)
                printf("%d\n",a[i]);

return 0;
}
