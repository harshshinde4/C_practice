#include <stdio.h>
#include <stdlib.h>

void up(char* pc);
void mul_20(unsigned char* puc);
void add_20(short* ps, unsigned short* pus);
void sub_20(int* pi, unsigned int* pui);
void div_20(long int* pli, unsigned long int* puli);
void mul_4(long long int* plli, unsigned long long int* pulli);
void do_half(float* pf, double* pd);

int main(void)
{
    char c;
    unsigned char uc;

    short s;
    unsigned short us;

    int i;
    unsigned int ui;

    long int li;
    unsigned long int uli;

    long long int lli;
    unsigned long long int ulli;

    float f;
    double d;

    c = 'i';
    printf("Before calling up() : c = %c\n", c);
    up(&c);
    printf("After calling up()  : c = %c\n", c);

    puts(" ");
    uc = 4;
    printf("Before calling mul_20() : uc = %hhu\n", uc);
    mul_20(&uc);
    printf("After calling mul_20()  : uc = %hhu\n", uc);

    puts(" ");
    s = 1234;
    us = 4567;
    printf("Before calling add_20() : s = %hd, us = %hu\n", s, us);
    add_20(&s, &us);
    printf("After calling add_20()  : s = %hd, us = %hu\n", s, us);

    puts(" ");
    i = -78945;
    ui = 45615;
    printf("Before calling sub_20() : i = %d, ui = %u\n", i, ui);
    sub_20(&i, &ui);
    printf("After calling sub_20()  : i = %d, ui = %u\n", i, ui);

    puts(" ");
    li = -465468;
    uli = 123545;
    printf("Before calling div_20() : li = %ld, uli = %lu\n", li, uli);
    div_20(&li, &uli);
    printf("After calling div_20()  : li = %ld, uli = %lu\n", li, uli);

    puts(" ");
    lli = 154986768;
    ulli = 46879864;
    printf("Before calling mul_4() : lli = %lld, ulli = %llu\n", lli, ulli);
    mul_4(&lli, &ulli);
    printf("After calling mul_4()  : lli = %lld, ulli = %llu\n", lli, ulli);

    puts(" ");
    f = 3.14;
    d = 4567.1234;
    printf("Before calling do_half() : f = %f, d = %lf\n", f, d);
    do_half(&f, &d);
    printf("After calling do_half()  : f = %f, d = %lf\n", f, d);
    
    return(0);
    
}

void up(char* pc)
{
    if(*pc >= 97 && *pc <= 122)
        *pc -= 32;
}

void mul_20(unsigned char* puc)
{
    *puc *= 20;
}
void add_20(short* ps, unsigned short* pus)
{
    *ps += 20;
    *pus += 20;
}
void sub_20(int* pi, unsigned int* pui)
{
    *pi -= 20;
    *pui -= 20;
}
void div_20(long int* pli, unsigned long int* puli)
{
    *pli /= 20;
    *puli /= 20;
}
void mul_4(long long int* plli, unsigned long long int* pulli)
{
    *plli *= 4;
    *pulli *= 4;
}
void do_half(float* pf, double* pd)
{
    *pf /= 2;
    *pd /= 2;
}