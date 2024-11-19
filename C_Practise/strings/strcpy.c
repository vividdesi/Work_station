#include<stdio.h>
#include<string.h>
char strcop(char s[10],char a[10])
{
  int i=0;
  for(i=0;a[i]!='\0';i++)
  {
	  s[i]=a[i];
  }
  return s;
};
int main()
{
 char s[10],a[15];
 printf("Enter the string of 10 characters\n");
 fgets(s,10,stdin);
 strcpy(a,s);
 puts(a);
 strcpy(s,"psyco");
 puts(s);
 strcpy(a,"huuu");
 puts(a);
 strcop(s,"hoiii");
 puts(s);
 return 0;
}
