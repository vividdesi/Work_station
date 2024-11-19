#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *str=NULL;
	int size;
	printf("Enter the size required for the string\n");
	scanf("%d",&size);
	printf("The size is %d",(sizeof(size)*size);
	str=(char*)malloc(size);

	printf("Enter the string\n");
	fgets(str,sizeof(size),stdin);
	printf("%s",str);
	return 0;
}


