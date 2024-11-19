#include<stdio.h>
int main()
{
  int i=0,j=0;
  int n=0;
  printf("Enter the number of rows ");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
	  for(j=0;j<=i;j++)
	  {
		  printf("*");
	  }
	  printf("\n");
}
  for(i=0;i<=n;i++)
  {
    for(j=n;j>=i;j--)
      {
	   printf("*");
       }
    printf("\n");
 }
}
