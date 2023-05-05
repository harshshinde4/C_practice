#include <stdio.h>
#include <stdlib.h>

void ptr_to_char(void);
void ptr_to_short(void);
void ptr_to_int(void);
void ptr_to_long(void);
void ptr_to_long_long(void);
void ptr_to_float(void);
void ptr_to_double(void);

int main(void)
{
    ptr_to_char();
    ptr_to_short();
    ptr_to_int();
    ptr_to_long();
    ptr_to_long_long();
    ptr_to_float();
    ptr_to_double();

    exit(0);
}

void ptr_to_char(void)
{
    char* cp = 0;
    unsigned char* ucp = 0;

    char c;
    unsigned char uc;

    cp = malloc(sizeof(char));           /* allocate 1 byte on heap */
    ucp = malloc(sizeof(unsigned char)); /* allocate 1 byte on heap */

    if(cp == 0 || ucp == 0)
    {
        puts("Memory allocation failed");
        exit(-1);
    }

    *cp = '*';
    *ucp = 123;

    printf("*cp = %c, ucp = %hhu\n", *cp, *ucp);

    free(cp);
    cp = 0;

    free(ucp);
    ucp = 0;
}

void ptr_to_short(void)
{
    short* p1 = 0;
    unsigned short* p2 = 0;

    p1 = malloc(sizeof(short));
    p2 = malloc(sizeof(unsigned short));

    if(p1 == 0 || p2 == 0)
    {
        puts("Memory allocation failed");
        exit(-1);
    }

    *p1 = -1456;
    *p2 = 7896;

    printf("*p1 = %hd, *p2 = %hu\n", *p1, *p2);

    free(p1);
    p1 = 0;

    free(p2);
    p2 = 0;
}

void ptr_to_int(void)
{
    int* p1 = 0;
    unsigned int* p2 = 0;

    p1 = malloc(sizeof(int));
    p2 = malloc(sizeof(unsigned int));

    if(p1 == 0 || p2 == 0)
    {
        puts("Memory allocatuion failed");
        exit(-1);
    }

    *p1 = -456789;
    *p2 = 1523678;

    printf("*p1 = %d, *p2 = %u\n", *p1, *p2);

    free(p1);
    p1 = 0;

    free(p2);
    p2 = 0;
}

void ptr_to_long(void)
{
    long int* p1 = 0;
    unsigned long int* p2 = 0;

    p1 = malloc(sizeof(long int));
    p2 = malloc(sizeof(unsigned long int));

    if(p1 == 0 || p2 == 0)
    {
        puts("Memory allocation failed");
        exit(-1);
    }

    *p1 = -75368945;
    *p2 = 15678945;

    printf("*p1 = %ld, *p2 = %lu\n", *p1, *p2);

    free(p1);
    p1 = 0;

    free(p2);
    p2 = 0;
}

void ptr_to_long_long(void)
{
    long long int* p1 = 0;
    unsigned long long int* p2 = 0;

    p1 = malloc(sizeof(long long int));
    p2 = malloc(sizeof(unsigned long long));

    if(p1 == 0 || p2 == 0)
    {
        puts("Memory allocation failed");
        exit(-1);
    }

    *p1 = -4567891235;
    *p2 = 1564879653;

    printf("*p1 = %lld, *p2 = %llu\n", *p1, *p2);

    free(p1);
    p1 = 0;
    
    free(p2);
    p2 = 0;
}

void ptr_to_float(void)
{
    float* pf = 0;

    pf = malloc(sizeof(float));

    if(pf == 0)
    {
        puts("Memory allocation failed");
        exit(-1);
    } 

    *pf = 123.456;
    printf("*pf = %f\n", *pf);

    free(pf);
    pf = 0;
}

void ptr_to_double(void)
{
    double* pd = 0;

    pd = malloc(sizeof(double));

    if(pd == 0)
    {
        puts("Memory allocatio0n failed");
        exit(-1);
    }

    *pd = 15478798.1536877;

    printf("*pd = %lf\n", *pd);

    free(pd);
    pd = 0;
}

/* 
    void f(void)
    {
        T* p = 0;

        p = malloc(sizeof(T));

        if(p == 0)
        {
            puts("Memory allocation failed");
            exit(-1);
        }

        *p ON LHS to write on allocated memory 
        *p ON RHS to Read on allocated memory

        free(p);
        p = 0;
    }
*/