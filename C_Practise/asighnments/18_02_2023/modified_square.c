#include<stdio.h>
int main()
{
int number;
double sqrt,temp;
printf("enter the number\n");
scanf("%d",&number);
//number =-1;
if (number<0)
{
printf("cant find sqrt for negative number\n");
return 0;
}
else if(number==1)
{
  printf("the value is 1\n");
}
else
{
sqrt = number/2;
temp=0;
while(sqrt!=temp)
{
temp=sqrt;
sqrt=(number/temp+temp)*0.5;
}
printf("the sqrt of number %d is %lf\n",number,sqrt);
}
return 0;
}
