#include<stdio.h>
int main()
{
  int a[10]={1,2,3,4,5,6,7,8,9,10},b[10]={11,12,13,14,15,16,17,18,19,20};
   int c[10], i=0;
   for(i=0;i<10;i++)
   {
	   c[i]=a[i]*b[i];
   }
   printf("The multiplied array will be \n");
   for(i=0;i<10;i++)
   {
	   printf("%d ",c[i]);
   }
   printf("\n");
   return 0;
}
