#include<stdio.h>
int main()
{
  int num=0,temp=0,digit=0,i=0;
  char str[20];
  printf("enter the integer to convert into the char");
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
  for(i=0;str[i]!='\0';i++)printf("The %dth index char is %c\n",i,str[i]);
}

