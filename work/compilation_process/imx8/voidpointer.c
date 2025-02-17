#include<stdio.h>
void printvalue(void *ptr,char type)
{
  switch(type)
  {
	case 'i':printf("The value is %d\n",*(int *)ptr);break;
        case 'f':printf("The value is %f\n",*(float *)ptr);break;
	case 'c':printf("The value is %c\n",*(char *)ptr);break;
  }
}
int main()
{
	int a=20;
	char b='A';
	float c=3.14;
	printvalue(&a,'i');
	printvalue(&b,'c');
	printvalue(&c,'f');
	return 0;
}



