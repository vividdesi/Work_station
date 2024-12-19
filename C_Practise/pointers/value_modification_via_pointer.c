#include<stdio.h>
int main()
{
	int a=5;
	int *p=&a;
	printf("The value of a is %d\n",a);
	printf("The value of a in *p %d\n",*p);
	*p=6;
	printf("The value of a in *p after modification %d\n",*p);
	int **q=&p;
	printf("The value of a in **q  %d\n",**q);
	**q=7;
	printf("The value of a in **q after modification is  %d\n",**q);
	int ***r=&q;
	printf("The value of a in ***r %d\n",***r);
	***r=8;
	printf("The value of a in ***r after modification %d\n",***r);
	printf("The value of a is %d\n",a);
	return 0;
}
