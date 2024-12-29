#include<stdio.h>
typedef struct
{
	int sum;
	int difference;
}result;
result calculate(int a,int b)
{
   result r;
   r.sum=a+b;
   r.difference=a-b;
   return r;
};
int main()
{
	int a=10,b=5;
	result r=calculate(a,b);
	printf("The sum is %d and difference is %d\n",r.sum,r.difference);
	return 0;
}
	
