#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    double* p = (double*)1000;
    printf("p = %llu\n", (unsigned long long int)p);

    int i;
    for(i = 0; i<5; ++i)
        printf("p + %d = %llu\n", i, (unsigned long long int)(p+i));
    exit(0);
}