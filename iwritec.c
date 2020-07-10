#include<stdio.h>

int main()
{
        printf("\n");
        int message[]={ 73, 32, 100, 111, 32, 110, 111, 116, 32, 119, 114, 105, 116, 101, 32, 67, 46 };
        int mycast;
        int i;
        for ( i = 0 ; i < 17 ; i ++ ) {
                mycast = (char)message[i];
                printf( "%c", mycast );
        }
        printf("\n\n");
}

