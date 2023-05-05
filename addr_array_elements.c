#include <stdio.h>
#include<stdlib.h>

int main(void)
{
    int a[5] = {10, 20, 30, 40, 50};
    int i;
    int n = 5;

    for(i = 0; i < n; i = i+1)
    {
        printf("&a[%d]: %llu\n", i, (unsigned long long int)&a[i]);
    }

    exit(0);
}