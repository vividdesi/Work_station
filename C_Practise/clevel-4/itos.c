#include<stdio.h>
int main()
{
  int a=0,digit=0,i=0;
  char str[20];
  int temp=0,num=0;
  printf("enter the number to convert to string");
  scanf("%d",&num);
  temp=num;
  do
  {
	  digit++;
	  temp/=10;
  }while(temp!=0);

  for(i=digit-1;i>=0;i--)
  {
	  str[i]='0'+(num%10);
	  num/=10;
  }
  str[digit]='\0';
  printf("the string is %s",str);
}

