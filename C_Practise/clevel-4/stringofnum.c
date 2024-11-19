#include<stdio.h>
int main()
{
  char str[10];
  int i=0,digit=0,count=0;
  printf("enter the string data");
  fgets(str,10,stdin);
  for(i=0;str[i]!='\0';i++)
  { digit++;
    if(str[i]>=48 && str[i]<=)count++;
  }
  if(digit==count)printf("Valid number");
  else printf("Not Valid number");
}

