#include<stdio.h>
void test(int **ptr)
{
  printf("the value is %d\n",**ptr);
  printf("the variable address is %p\n",*ptr);
  printf("the pointer address is %p\n",ptr);
  printf("the double pointers address is %p\n",&ptr); 
  for(int i=0;i<5;i++)
  {
     printf("the value is %d\n",++(**ptr));
  }
}
int main()
{ 
  int a=10;
  int *ptr=&a;
  printf("the variable address is %p\n",&a);
  printf("the pointer address is %p\n",&ptr);
  printf("After function calling by using double pointer");
  test(&ptr);
  printf("the value is changed %d",a);
}
