#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a[5]={1,2,3,4,5};
  int *p=a;
  int *q=(int *)malloc(5*sizeof(int));
  for(int i=0;i<5;i++)
  {
	  printf("Enter the value a[%d]\n",i);
	  scanf("%d",q+i);
  }
  for(int i=0;i<5;i++)
  {
	  printf("The address of a[%d] is %p\n",i,(p+i));
	  printf("The value of a[%d] is %d\n",i,*(p+i));
  }
  for(int i=0;i<5;i++)
  {
          printf("The address of q[%d] is %p\n",i,(q+i));
          printf("The value of q[%d] is %d\n",i,*(q+i));
  }

  return 0;
}

