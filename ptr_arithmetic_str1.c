#include <stdio.h>
#include <stdlib.h>


struct A
{
    int a;
    char b;
    float c;

};
int main(void)
{
    struct A* p = (struct A*)1000;
    int i;
    printf("size of struct A = %llu\n",(unsigned long long int)sizeof(struct A));

    for(i = 0; i<5; ++i)
        printf("p + %d = %llu\n", i, (unsigned long long int)(p+i));

    exit(0);
}