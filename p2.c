#include <stdio.h>
#include <stdlib.h>

void to_upper(char* p_char);
void mul_10(unsigned char* p_uchar);
void add_10(short* p_snum, unsigned short* p_usnum);
void sub_10(int* p_num, unsigned int* p_unum);
void div_10(long int* p_linum, unsigned long int* p_ulinum);
void mul_5(long long int* p_llnum, unsigned long long int* p_ullnum);
void do_half(float* pf_num, double* pd_num);

int main(void)
{
    char c1;
    unsigned char uc1;

    short s1;
    unsigned short us1;

    int n1;
    unsigned int un1;

    long int lng_n1;
    unsigned long int ulng_n1;

    long long int lng_lng_n1;
    unsigned long long int ulng_lng_n1;

    float f_num;
    double d_num;

    c1 = 'm';
    printf("Before call uppere: c1 = %c\n", c1);
    to_upper(&c1);
    printf("After call uppere : c1 = %c\n", c1);

    puts(" ");
    uc1 = 3;
    printf("Before call mul_10: uc1 = %hhu\n", uc1);
    mul_10(&uc1);
    printf("After call mul_10 : uc1 = %hhu\n", uc1);

    puts(" ");
    s1 = -564;
    us1 = 5464;
    printf("Before call add_10: s1 = %hd, us1 = %hu\n", s1, us1);
    add_10(&s1, &us1);
    printf("After call add_10 : s1 = %hd, us1 = %hu\n", s1, us1);

    puts(" ");
    n1 = -98789;
    un1 = 8798;
    printf("Before call sub_10: n1 = %d, un1 = %u\n", n1, un1);
    sub_10(&n1, &un1);
    printf("After call sub_10 : n1 = %d, un1 = %u\n", n1, un1);

    puts(" ");
    lng_n1 = -8679884;
    ulng_n1 = 2136544;
    printf("Before call div_10: lng_n1 = %ld, ulng_n1 = %lu\n", lng_n1, ulng_n1);
    div_10(&lng_n1, &ulng_n1);
    printf("After call div_10 : lng_n1 = %ld, ulng_n1 = %lu\n", lng_n1, ulng_n1);

    puts(" ");
    lng_lng_n1 = -78987984797;
    ulng_lng_n1 = 65476546875;
    printf("Before call mul_5: lng_lng_n1 = %lld, ulng_lng_n1 = %llu\n", lng_lng_n1, ulng_lng_n1);
    mul_5(&lng_lng_n1, &ulng_lng_n1);
    printf("After call mul_5 : lng_lng_n1 = %lld, ulng_lng_n1 = %llu\n", lng_lng_n1, ulng_lng_n1);

    puts(" ");
    f_num = 21.458;
    d_num = 54164.146876;
    printf("Before call do_half: f_num = %f, d_num = %lf\n", f_num, d_num);
    do_half(&f_num, &d_num);
    printf("After call do_half : f_num = %f, d_num = %lf\n", f_num, d_num);

    return(0);
}

void to_upper(char* p_char)
{
    if(*p_char >= 97 && *p_char <= 122)
        *p_char = *p_char - 32;
}

void mul_10(unsigned char* p_uchar)
{
    *p_uchar *= 10;
}

void add_10(short* p_snum, unsigned short* p_usnum)
{
    *p_snum += 10;
    *p_usnum += 10;
}

void sub_10(int* p_num, unsigned int* p_unum)
{
    *p_num -= 10;
    *p_unum -= 10;
}

void div_10(long int* p_linum, unsigned long int* p_ulinum)
{
    *p_linum /= 10;
    *p_ulinum /= 10;
}

void mul_5(long long int* p_llnum, unsigned long long int* p_ullnum)
{
    *p_llnum *= 5;
    *p_ullnum *= 5;
}

void do_half(float* pf_num, double* pd_num)
{
    *pf_num /= 2;
    *pd_num /= 2;
}

