#include<stdio.h>
int main()
{
  char str[]={"hello"};
  char *ptr=NULL;
  for(ptr=str;*ptr!='\0';ptr++)
  {
	  printf("The character is %c\t",*ptr);
	  printf("THe address of char is %p\n",ptr);
  }
  return 0;
}

