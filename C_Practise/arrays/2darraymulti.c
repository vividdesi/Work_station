#include<stdio.h>
#define row 3
#define col 4
void disp(int a[row][col])
{
 int i,j;
 for(i=0;i<row;i++){
	 for(j=0;j<col;j++)
	 {
		 printf("%d ",a[i][j]);
	 }
   printf("\n");
 }
}
int main()
{
  int a[row][col],b[row][col],c[row][col];
  int i,j;
 for(i=0;i<row;i++)
   for(j=0;j<col;j++)
       scanf("%d",&a[i][j]);
  for(i=0;i<row;i++)
   for(j=0;j<col;j++)
       scanf("%d",&b[i][j]);
  printf("The entered arrays are \n");
  disp(a);
  printf("\n");
  disp(b);
  printf("The multiplied array are\n");
  for(i=0;i<row;i++)
   for(j=0;j<col;j++)
       c[i][j]=a[i][j]*b[i][j];
  disp(c);

  return 0;
}

