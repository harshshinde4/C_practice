#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;

    puts("while loop");
    i = 0;
    while(i<6)
    {
        printf(" while repetition: i = %d\n", i);
        i = i + 1;
    }

    puts("for loop");
    for(i = 0; i < 6; i = i + 1)
    {
        printf("for repetition: i = %d\n", i);
    }

    exit(0);
}