#include<stdio.h>
#define max 100000 
int main()
{
	unsigned long int i=0, rem=0,reverse=0,count=0,n=0;
  for(i=1;i<max;i++)
  {
   n=i;
  while(i!=0)
  {
	  rem=i%10;
	  reverse=(reverse*10)+rem;
	  i/=10;
  }
  if(reverse==n)
  {
	  count++;
  }
  i=n;
  printf("The no of palindrome are %ld\n",reverse);
  reverse=0;
  }
  printf("The no of palindrome are %ld",count);
}

