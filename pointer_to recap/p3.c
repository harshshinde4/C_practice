#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int my_add(int, int);
int my_sub(int, int);
int my_mul(int, int);
int my_quo(int, int);
int my_rem(int, int);

void comp_decl_1(void);
void comp_decl_2(void);

int main(void)
{
int (*pfn1)(int, int);
int (*pfn2)(int, int);
int (*pfn3)(int, int);
int (*pfn4)(int, int);
int (*pfn5)(int, int);

pfn1 = my_add;
pfn2 = my_sub;
pfn3 = my_mul;
pfn4 = my_quo;
pfn5 = my_rem;

int n1 = 17, n2 = 4;
printf("pfn1(%d,%d=%d\n)", n1, n2, pfn1(n1, n2));
printf("pfn2(%d,%d=%d\n)", n1, n2, pfn2(n1, n2));
printf("pfn3(%d,%d=%d\n)", n1, n2, pfn3(n1, n2));
printf("pfn4(%d,%d=%d\n)", n1, n2, pfn4(n1, n2));
printf("pfn5(%d,%d=%d\n)", n1, n2, pfn5(n1, n2));


comp_decl_1();
comp_decl_2();

}

int my_add(int a, int b)
{
    return(a+b);
}
int my_sub(int a, int b)
{
    return(a-b);
}
int my_mul(int a, int b)
{
    return(a*b);
}
int my_quo(int a, int b)
{
    return(a/b);
}
int my_rem(int a, int b)
{
    return(a%b);
}

void comp_decl_1(void)
{
    puts("Using complicated declaration");
    int (*arr[5])(int, int) = {my_add, my_sub, my_mul, my_quo, my_rem};
    int i;
    int n1 = 17, n2 = 4;
    for(i = 0; i < 5; ++i)
        printf("pfn[%d](%d, %d) = %d\n", i, n1, n2, arr[i](n1, n2));
}


void comp_decl_2(void)
{
    //Declare a pointer to array of pointer to function accepting two int and returning an int

    //  Declare a pointer : *p
    //  Declare a pointer to array : (*p)[5]
    //  Declare a pointer to array of pointer : *(*p)[5]
    //  Declare a pointer to array of pointer to function accepting two int : (*(*p)[5])(int, int)
    //  Declare a pointer to array of pointer to function accepting two int and returning int : int (*(*p)[5])(int, int)
    //   int(*(*p)arr[5])(int, int) ;      

    puts("Using complicated declaration 2");
    int (*arr[5])(int, int) = {my_add, my_sub, my_mul, my_quo, my_rem};
    int (*(*p)[5])(int, int);

    p = &arr;
    int i;
    int n1 = 17 , n2 = 4;
    int ret;

    for(i = 0; i < 5; ++i)
    {
        ret = (*p)[i](n1, n2);
        printf("(*p)[%d](%d, %d) = %d\n", i, n1, n2, ret);
    }
}
