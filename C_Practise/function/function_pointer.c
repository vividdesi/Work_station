#include<stdio.h>
int add(int,int);
int sub(int,int);
int main()
{
	int a,b;
	printf("Enter the 2 values to be calculated\n");
	scanf("%d %d",&a,&b);
	int (*ptr)(int,int)=NULL;
	ptr=add;
	printf("The addition value is %d\n",ptr(a,b));
	ptr=sub;
	printf("The sub value is %d\n",ptr(a,b));
	return 0;
}
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}

