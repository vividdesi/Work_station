#include<stdio.h>
int main()
{
        int i,j,k;
        int n=5;
	
        for(i=1;i<=n;i++)
        {
		k=1;
                for(j=1;j<=n-i;j++)
                {
                        printf(" ");
                }
                for(j=1;j<=(2*i-1);j++)
                {
                        printf("%d",k);
			k++;
                }
                printf("\n");
        }
        n--;

       for(i=1;i<=n;i++)
       {
	       k=1;
               for(j=1;j<=i;j++)
               {
                       printf(" ");
               }
               for(j=1;j<=(2*(n-i)+1);j++)
               {
                       printf("%d",k);
		       k++;
               }
               printf("\n");
       }

        return 0;
}        
