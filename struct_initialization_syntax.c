#include <stdio.h>
#include <stdlib.h>

struct A
{
    int a;
    char b;
    float c;
} inA = {100, 'A', 12.14};

/*  struct A {int a; char b; float c;} inA;
    struct A inA1;
    struct A x;
    struct A {int a; char b; float c;};
    struct A inA;

*/

struct B
{
    int m;
    char c;
    int arr[5];
    float frr[5];
} inB = {
            1000,
            'B',
            {123,145,456,786, 456},
            {12.23,145.44,486.64,879.46,12.45}
        };
        
struct Outer
{
    int num;
    float fn;
    struct Inner
    {
        char c1;
        char c2;
        int arr1[5];
    }inC;
    float ff_arr[4];
    double d_num;
}inOuter = {
                1000,
                3.14,
                {
                    'Z',
                    'S',
                    {-1,-2,-3,-4}
                },
                {1.1,2.2,3.3,4.4},
                4687.213658
            };

int main(void)
{
    int i;
    struct A X = {200, 'B', 6.28};

    printf("inA.a = %d\t, inA.b = %c\t, inA.c = %f\n",
            inA.a, inA.b, inA.c);

    puts(" ");
    printf("X.a = %d\t, X.b = %c\t, X.c = %f\n", 
            X.a, X.b, X.c);

    puts("---------------------------------------------------");
    puts(" ");
    printf("inB.m = %d\t, inB.c = %c\t", inB.m, inB.c);
    for(i=0; i<5; ++i)
        printf("inB.arr[%d] = %d\n", i, inB.arr[i]);

    for(i=0; i<5; ++i)
        printf("inB.frr[%d] = %.2f\n", i, inB.frr[i]);
    puts(" ");

    printf("sizeof(struct A) = %llu\n", (unsigned long long int)sizeof(struct A));
    printf("sizeof(struct B) = %llu\n", (unsigned long long int)sizeof(struct B));
    printf("sizeof(struct Outer) = %llu\n", (unsigned long long int)sizeof(struct Outer));

    puts(" ");

    printf("inOuter.num = %d\t", inOuter.num);
    printf("inOuter.fn = %.2f\t",  inOuter.fn);
    printf("inOuter.inC.c1 = %c\t", inOuter.inC.c1);
    printf("inOuter.inC.c2 = %c\n", inOuter.inC.c2);

    puts(" ");
    for(i=0; i<5; ++i)
        printf("inOuter.inC.arr1[%d] = %d\n", i, inOuter.inC.arr1[i]);

    puts(" ");
    for(i=0; i<4; ++i)
        printf("inOuter.ff_arr[%d] = %.1f\n", i, inOuter.ff_arr[i]);

    printf("inOuter.d_num = %lf\n", inOuter.d_num);

    exit(0);

}