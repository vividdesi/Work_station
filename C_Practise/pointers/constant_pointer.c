#include<stdio.h>
int main()
{
  int A=10;
  const int *ptr=&A;
  printf("%p\n",ptr);
  int b=20;
  ptr=&b;
  printf("%p\n",ptr);
  ptr=&A;
  printf("the value ofptr is %d\n",*ptr=23);
  return 0;
}
