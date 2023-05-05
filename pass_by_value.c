#include <stdio.h>
#include <stdlib.h>

void test_func(int x, int y);

int main(void)
{
    int m = 10, n = 20; /* local variable */

    printf("Address of m = %llu\n, Address of n = %llu\n", (unsigned long long int)&m,
                                    (unsigned long long int)&n);

    puts("Before call to test_func(): ");
    printf("m = %d, n = %d\n", m, n);

    test_func(m, n);
    printf("After call to test_func(): ");
    printf("m = %d, n = %d\n", m, n);

    exit(0);
}

void test_func(int a, int b)
{
    puts("Inside test_fun() :");
    printf("Address of formal parameter (a) = %llu\n", (unsigned long long int)&a);
    printf("Address of formal parameter (b) = %llu\n", (unsigned long long int)&b);

    printf("Before ASSIGNMENT to a, b | a = %d, b = %d\n", a, b);

    a = 10000;
    b = 20000;

    printf("AFTER Assignment to a, b | a = %d, b = %d\n", a, b);
    puts("Returning to main()");
    
    return;
}