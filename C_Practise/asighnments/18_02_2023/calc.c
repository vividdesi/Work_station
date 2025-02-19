#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=0,b=0,Arithematic=0,
	long float squareroot=0,number=0;
	while(1)
	{
	printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Remainder\n6.Squareroot of an given number\n7.Exit\n");
	scanf("%d",&Arithematic);
        if(Arithematic==7)
	{
		printf("Exiting ...\n");
		exit(0);
	}
	else if(Arithematic==6)
	{
		int odd=1,sq=0;
		printf("Enter the squareroot value\n");
		scanf("%d",&squareroot);
		number=squareroot;
                while(number>0)
		{
			number=number-odd;
			printf("The number value is %f\n",number);
			odd+=2;
			sq+=0.5;
		}
		printf("The sq value is %d\n",sq);
		if(sq)
		{
			printf("The squreroot value of given number %f is %f\n)",squareroot,sq);
			continue;
		}
		else 
		{
			printf("The given number is not a squareroot valure\n");
			continue;
		}
	}
	printf("Enter the two values \n");
	scanf("%d %d",&a,&b);
	switch(Arithematic)
	{
		case 1:printf("The Addition value is %d\n",a+b);break;
		case 2:printf("The subtraction value is %d\n",a-b);break;
		case 3:printf("The Multiplication value is %d\n",a*b);break;
		case 4:if(b==0)
		       {
			printf("Division by zero is not allowed\n");
		       }
		       
		       else
		       {
			 printf("The Division value is %d\n",a/b);
		       }
		       break;	      

		case 5:if(b==0)
		       {
			       printf("Error modulo by Zero\n");
		       }
		       else
		       {
		              printf("The Remainder value is %d\n",a%b);
		       }
		       break;
		default:printf("Invalid Arithematic operater\n");
	}
	}
	return 0;
}
