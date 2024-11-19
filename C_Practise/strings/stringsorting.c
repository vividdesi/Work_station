#include<stdio.h>
#include<string.h>
int main()
{
  char str[4][10]={"hello","Bye","shivaiah","Rahul"};
  int i,j;
  char temp[10];
  printf("Before sorting the array of strings\n");
  for(i=0;i<4;i++)
	  printf("%s\t",str[i]);
  printf("\n");
  for(i=0;i<4;i++)
  {
	  for(j=i+1;j<4;j++)
	  {
		  if(strcmp(str[i],str[j])>0)
		  {
			  strcpy(temp,str[i]);
			  strcpy(str[i],str[j]);
			  strcpy(str[j],temp);
		  }
	  }
  }

  printf("After sorting the array of strings\n");
for(i=0;i<4;i++)
	printf("%s\t",str[i]);
return 0;
}

