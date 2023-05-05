#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void)
{
    int x;
    x = SIZE + 5;

    printf(" x = %d", x);
    #undef SIZE

    /*
    x = SIZE;   This is a compile time error as symbolic constant 
                SIZE is undefined at this place
    */
}