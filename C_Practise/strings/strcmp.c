#include<stdio.h>
#include<string.h>
char strcm(char s[10],char a[10])
{
  int i=0;
  while(s[i]==a[i])
  {  if(s[i]=='\0')return 0;
     i++;
   }
  return(s[i]-a[i]);
}
  
int main()
{
  char s[10],a[10];
 fgets(s,10,stdin);
 fgets(a,10,stdin);
 if( strcm(s,a)==0)
	 printf("Strings are same\n");
 else if (strcmp(s,a)<0)
	 printf("a is big string\n");
 else if(strcmp(s,a)>0)
	 printf("s is big string\n");
 else
	 printf("strings are not same\n");
return 0;
}
