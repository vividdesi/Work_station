#include<stdio.h>
#include<string.h>
int arraylen(char str[])
{
	int i=0;
	while(str[i])
	{
		i++;
	}
	return i;
}

int ptrlen(char *ptr)
{
	int i=0;
  while(*ptr)
  {
    i++;
    ptr++;
  }
  return i;
}

int main()
{
 char  str[]={"hello"};
 int count=strlen(str);
  printf("The of string is %u",count);
  printf("\nthe length of array is %d",arraylen(str));
  printf("\nThe lenght of by ptr is %d\n",ptrlen(str));
  return 0;
}
	
