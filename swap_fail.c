#include <stdio.h>
#include <stdlib.h>

void swap(int x, int y);
int main(void)
{
    int p = 100, q = 200;
    printf("main: before call to swap: p = %d, q = %d\n", p, q);
    swap(p,q);
    printf("main: after call to swap: p = %d, q = %d\n", p, q);
    return(0);
}

void swap(int m, int n)
{
    int tmp;
    printf("swap: start: m = %d, n = %d\n", m, n);
    tmp = m;
    m = n;
    n = tmp;
    printf("swap: end: m = %d, n = %d\n", m, n);
}