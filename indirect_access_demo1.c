#include <stdio.h>
#include <stdlib.h>

int a;
int b;
int c;
int* pa;
int* pb;
int* pc;

int main(void)
{
    printf("address of (a) = %llu\n", (unsigned long long int)&a);
    printf("address of (b) = %llu\n", (unsigned long long int)&b);
    printf("address of (c) = %llu\n", (unsigned long long int)&c);

    puts(" ");

    pa = &a;
    pb = &b;
    pc = &c;

    printf("address of (pa) = %llu\n", (unsigned long long)&pa);
    printf("address of (pb) = %llu\n", (unsigned long long)&pb);
    printf("address of (pc) = %llu\n", (unsigned long long)&pc);

    puts(" ");

    printf("address in pa = %llu\n", (unsigned long long int)pa);
    printf("address in pb = %llu\n", (unsigned long long int)pb);
    printf("address in pc = %llu\n", (unsigned long long int)pc);

    puts(" ");

    printf("a = %d\n", a);
    *pa = 500;
    printf("a = %d\n", a);

    printf("b = %d\n", b);
    *pb = 1000;
    printf("b = %d\n", b);

    printf("c = %d\n", c);
    *pc = *pa + *pb;
    printf("c = %d\n", c);

    printf("address in pa = %llu\n", (unsigned long long int)pa);
    printf("address in pb = %llu\n", (unsigned long long int)pb);
    printf("address in pc = %llu\n", (unsigned long long int)pc);

    exit(0);

}