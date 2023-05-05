#include <stdio.h>
#include <stdlib.h>

struct A
{
    int a[4];
    char b[4];
    float f[4];
} inA;


int main(void)
{
    struct A inA;
    struct A* pA;
    int i;

    
    for(i=0; i<4; ++i)
    {
        inA.a[i] = (i+1) * 100;
        inA.b[i] = (i+65);
        inA.f[i] = (i+1.1) * 100;
    }

    puts(" ");
    puts("printing the elements of struct A: ");
    for(i=0; i<4; ++i)
    {
        printf("element of array:a of struct A at index %d is = %d\n",
                i, inA.a[i]);
    }
    puts(" ");
    for(i=0; i<4; ++i)
    {
        printf("element of array:b of struct A at index %d is = %c\n",
                i, inA.b[i]);
    }
    puts(" ");
    for(i=0; i<4; ++i)
    {
        printf("element of array:f of struct A at index %d is = %f\n",
                i, inA.f[i]);
    }
    
    puts("-----------------------------------------------------------");
    puts(" ");
    puts("printing the address of array elements of struct A: ");
    puts(" ");

    for(i=0; i<4; ++i)
    {
        printf("address of element at index %d of array:a of struct A = %llu\n",
                i, (unsigned long long int)&inA.a[i]);
    }

    puts(" ");
    for(i=0; i<4; ++i)
    {
        printf("address of element at index %d of array:b of strudt A = %llu\n",
                i, (unsigned long long int)&inA.b[i]);
    }

    puts(" ");
    for(i=0; i<4; ++i)
    {
        printf("address of element at index %d of array:f of struct A = %llu\n",
                i, (unsigned long long int)&inA.f[i]);
    }

    puts("-------------------------------------------------------------");
    
    puts(" ");
    puts("printing the address of elements by dereferencing: ");

    pA = &inA.a[0];
    for(i=0; i<4; ++i)
    {
        printf("address of element of array:a of struct: A at index %d = %llu\n",
                i, (unsigned long long int)(pA+i));
    }
    exit(0);

}