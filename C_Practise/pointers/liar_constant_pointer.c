#include <stdio.h>


void modA( int *x )
{
        *x = 7;
}


int main( void )
{

        const int a = 3; // I promisse i won't change a
        int *ptr;
        ptr = (int*)( &a );//here we are using cast away the const

        printf( "A=%d\n", a );
        *ptr = 5; // I'm a liar, a is now 5
        printf( "A=%d\n", a );

        *((int*)(&a)) = 6;
        printf( "A=%d\n", a );

        modA( (int*)( &a ));
        printf( "A=%d\n", a );

        return 0;
}

