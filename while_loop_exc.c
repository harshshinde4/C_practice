/*
    @author : Harshvardhan
    @goal : To practice while loop with various exercises
*/


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;

    puts("ONE");
    i = 5;
    while(i<35)
    {
        printf("i = %d\n", i);
        i = i + 1;
    }

    puts("TWO");
    i = 0;
    while(i<10)
    {
        printf("i = %d\n", i);
        i = i + 2;
    }

    puts("THREE");
    i = 1;
    while(i<10)
    {
        printf("i = %d\n", i);
        i = i + 2;
    }

    puts("FOUR");
    i = 0;
    while(i<=10)
    {
        printf("i = %d\n", i);
        i = i + 2;
    }

    puts("FIVE");
    i = 1;
    while(i<=10)
    {
        printf("i = %d\n", i);
        i = i+2;
    }

    puts("SIX");
    i=1;
    while(i<=10)
    {
        printf("i = %d\n", i);
        i = i * 2;
    }

    exit(0);
}