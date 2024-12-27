#include<stdio.h>
void display(int a[],int size);
int main()
{
	int a[5]={1,2,3,4,5};
	int size=sizeof(a)/sizeof(a[0]);
	display(a,size);
	for(int i=0;i<size;i++)
        {
                printf("%d\n",a[i]);
        }

	return 0;
}
void display(int a[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("after modification\n");
	for(int i=0;i<size;i++)
        {
                scanf("%d\n",&a[i]);
        }

}

