#include<stdio.h>
#define row 3
#define col 3
int c[row][col];
int i,j;
int Add_array(int a[row][col],int b[row][col]);
int sub_array(int a[row][col],int b[row][col]);
int multi_array(int a[row][col],int b[row][col]);
int divide_array(int a[row][col],int b[row][col]);
int Disp(int c[row][col],char str[]);
int main()
{
 char word,symbol;
 int a[row][col]={{1,2,3},{4,5,6},{7,8,9}},b[row][col]={{1,2,3},{4,5,6},{7,8,9}};
 printf("Enter the Arithematic operation u want to perform + - / *\n");
 scanf("%hhd",&symbol);
 printf("Do u want to do arithematic operations with current array\n");
 printf("Yes-y // No-n\n");
 scanf("%hhd",&word);
 switch(word)
 {
	 case 'y':
		//  word=getc(stdin); we cannnot enter any data in switch case statement
		//symbol=getchar();
		  switch(symbol)
		  {
			  case '+':Add_array(a,b);break;
		          case '-':sub_array(a,b);break;
      			  case '*':multi_array(a,b);break;
         		  case '/':divide_array(a,b);break;
		          default:printf("The operator is invalid\n");
		  }break;
         case 'n':printf("enter the data in the Array a\n");
		  for(i=0;i<row;i++)
		  {
			  for(j=0;j<col;j++)
			  {
				  scanf("%d",&a[i][j]);
			  }
		  }
		  printf("enter the data in the Array b\n");
                  for(i=0;i<row;i++)
                  {
                          for(j=0;j<col;j++)
                          {
                                  scanf("%d",&b[i][j]);
                          }
                  }
		 
                  switch(symbol)
                  {
                          case '+':Add_array(a,b);break;
                          case '-':sub_array(a,b);break;
                          case '*':multi_array(a,b);break;
                          case '/':divide_array(a,b);break;
                          default:printf("The operator is invalid\n");
                  }break;
	 default:printf("Invalid  operation of arithematic array");
 }
return 0;
 }
int Add_array(int a[row][col],int b[row][col])
{
  char str[]="The Addition of 2 arrays are ";
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
     {
      c[i][j]=a[i][j]+b[i][j];
     }
  }
  Disp(c,str);
}

int Disp(int c[row][col],char str[])
{
  puts(str);
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
     {
      printf("%d",c[i][j]);
     }
    printf("\n");
  }
}

int sub_array(int a[row][col],int b[row][col])
{
  char str[]="The Subtraction of 2 arrays are ";
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
     {
      c[i][j]=a[i][j]-b[i][j];
     }
  }
  Disp(c,str);
}

int multi_array(int a[row][col],int b[row][col])
{
  char str[]="The Multiplication of 2 arrays are ";
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
     {
      c[i][j]=a[i][j]*b[i][j];
     }
  }
  Disp(c,str);
}

int divide_array(int a[row][col],int b[row][col])
{
  char str[]="The Division of 2 arrays are ";
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
     {
      c[i][j]=a[i][j]/b[i][j];
     }
  }
  Disp(c,str);
}

