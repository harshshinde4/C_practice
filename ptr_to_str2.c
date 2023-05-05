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
    struct B inB;
    struct B* pB;
    int i;

    pB = &inB;

    for(i=0; i<4; ++i)
        pB->a[i] = (i+1) * 100;

    for(i=0; i<2; ++i)
        pB->d[i] = (i+1000) * 100;

    for(i=0; i<4; ++i)
        pB->f[i] = (i+1.1) * 100;

    printf("pB->a[0] = %d\n", pB->a[0]);
    printf("pB->a[1] = %d\n", pB->a[1]);
    printf("pB->a[2] = %d\n", pB->a[2]);
    printf("pB->a[3] = %d\n", pB->a[3]);
    puts(" "); 
    printf("pB->d[0] = %llu\n", (unsigned long long int)pB->d[0]);
    printf("pB->d[1] = %llu\n", (unsigned long long int)pB->d[1]);
    puts(" ");
    printf("pB->f[0] = %.2f\n", pB->f[0]);
    printf("pB->f[1] = %.2f\n", pB->f[1]);
    printf("pB->f[2] = %.2f\n", pB->f[2]);
    printf("pB->f[3] = %.2f\n", pB->f[3]);
}