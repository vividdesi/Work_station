#include<stdio.h>
void simple_interest( );
void principal_amount( );
void interest( );
void tenure( );
int principal,tenure,interest,simple_interest;
int main()
{
        printf("1.simple interest calculation\n2.Principal amount calculation\n3.Rate of interest calculation \n4.Tenure time calculation\n");
	int number;
	scanf("%d",&number);
	switch(number)
	{
		case 1:simple_interest( );break;
		case 2:printf("Enter the S.I amount\n");
                       scanf("%d",&simple_interest);
                       printf("Enter the rate of interest per annum\n");
                       scanf("%d",&interest);
                       printf("Enter tenure \n");
                       scanf("%d",&tenure);
                       principal_amount(simple_interest,interest,tenure);
                       break;
		case 3:printf("Enter the Principal amount\n");
                       scanf("%d",&principal);
                       printf("Enter the S.I amount\n");
                       scanf("%d",&simple_interest);
                       printf("Enter tenure \n");
                       scanf("%d",&tenure);
                       interest(principal,simple_interest,tenure);
                       break;
		case 4:printf("Enter the Principal amount\n");
                       scanf("%d",&principal);
                       printf("Enter the S.I amount\n");
                       scanf("%d",&simple_interest);
                       printf("Enter tenure \n");
                       scanf("%d",&tenure);
                       tenure(principal,simple_interest,tenure);
                       break;



	}
	return 0;
}

void simple_interest( )
{
  printf("Enter the Principal amount\n");
  scanf("%d",&principal);
  printf("Enter the rate of interest per annum\n");
  scanf("%d",&interest);
  printf("Enter tenure \n");
  scanf("%d",&tenure);
  printf("The simple interest is %d\n",simple_interest=((principal*interest*tenure)/100);
}

void principal_amount( )
{
 printf("Enter the S.I amount\n");
 scanf("%d",&simple_interest);
 printf("Enter the rate of interest per annum\n");
 scanf("%d",&interest);
 printf("Enter tenure \n");
 scanf("%d",&tenure);
 printf("The principal amount required is %d\n",

