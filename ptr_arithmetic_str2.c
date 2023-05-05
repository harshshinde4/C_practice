#include <stdio.h>
#include <stdlib.h>

struct B
{
    int a[4];
    double d[2];
    float f[4];
};

int main(void)
{
    struct B* p = (struct B*)1000;
    int i;

    printf("size of struct B = %llu\n", (unsigned long long int)sizeof(struct B));
    for(i=0; i<5; ++i)
        printf("p + %d = %llu\n", i, (unsigned long long int)(p + i));
}