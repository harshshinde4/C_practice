#include <stdio.h>
#include <stdlib.h>

int n;
int m;

int main (void)
{
    puts("In all cases m is assigned to !n");
    m = 100;
    n = !n;
    printf("\nm is positive: m = %d, n = %d\n", m, n);

    m = 1;
    n = !m;
    printf("n is 1 : m = %d, n = %d\n", m, n);

    m = 0;
    n = !n;
    printf("m is zero : m = %d, n = %d\n", m, n);

    m = -100;
    n = !m;
    printf("m is negative : m = %d, n = %d\n", m, n);

    exit(0);
}
