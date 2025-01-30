#include<stdio.h>
void print(int *p)
{
	for(int i=0;i<5;i++)
                printf("%d\n",*p++);

};
int main()
{
	int a[5]={1,2,3,4,5,};
	int *p=a;
	print(a);
	int temp;
	temp=*(p+0);
	*(p+0)=*(p+1);
	*(p+1)=temp;
	print(a);
}
	
