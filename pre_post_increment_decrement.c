#include <stdio.h>
#include <stdlib.h>

int m = 10;

int main(void)
{
    int i;
    int j;
    int k;

    i = 10;
    printf("start : i = %d\n", i);
    i++;
    printf("after i++ : i = %d\n", i);
    ++i;
    printf("after ++i: i = %d\n", i);

    puts("-----------------------------------------------------");

    for(i = 0; i < 10; i = i + 1)
    {
        printf(" i using (i+1) = %d\n", i);
    }

    puts("-----------------------------------------------------");

    for(i = 0; i < 10; ++i)
    {
        printf("i using (++i) = %d\n", i);
    }

    puts("-----------------------------------------------------");

    for(i = 0; i < 10; i++)
    {
        printf("i using (i++) = %d\n", i);
    }

    puts("-----------------------------------------------------");

    i = 0;
    while(i < 10)
    {
        printf("i using while ++i = %d\n",i);
        ++i;
    }

    puts("-----------------------------------------------------");

    i = 0;
    while(i<10)
    {
        printf("i using while i++ = %d\n", i);
        i++;
    }
    exit(0);

}