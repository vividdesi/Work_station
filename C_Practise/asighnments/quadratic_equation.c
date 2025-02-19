#include<stdio.h>
float squareroot(float sq);
int main()
{
	float a=0,b=0,c=0;
	printf("enter the values for the quadratic equation\n");
	scanf("%f%f%f",&a,&b,&c);
	float sq=0.0;
	//sq=squareroot(((b*b)-(4*((a)*(b)))));
	sq = squareroot(((b * b) - (4 * (a) * (c))));
	float x1=0,x2=0;
	x1=(-(b)+sq)/(2*a);
	x2=(-(b)-sq)/(2*a);
	printf("The x1 value is %f and x2 value is %f\n",x1,x2);
       return 0;
}       
float squareroot(float sq)
{
	printf("the sq value is %f\n",sq);
double sqrt,temp;
if (sq<0)
{
printf("cant find sqrt for negative number\n");
return 0;
}
else if(sq==1)
{
  printf("the value is 1\n");
  return sq;
}
else
{
sqrt = sq/2;
temp=0;
while(sqrt!=temp)
{
temp=sqrt;
sqrt=(sq/temp+temp)*0.5;
}
printf("the sqrt of number %f is %lf\n",sq,sqrt);
return sqrt;
}
}  
