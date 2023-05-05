#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int my_add(int, int);
int my_sub(int, int);
int my_mul(int, int);
int my_quo(int, int);
int my_rem(int, int);

void comp_decl(void);

int main(void)
{

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
    assert(b != 0);
    return(a/b);
}

int my_rem(int a, int b)
{
    return(a%b);
}

void comp_decl(void)
{
    //  array 5 of ptrs to function accepting two integers and returning int
    //  name of array: arr
    //  arr is array 5 of : arr[5]
    //  arr is array 5 of ptrs : *arr[5]
    //  arr is array 5 of ptrs to function : (*arr[5])()
    //  arr is array 5 of ptrs to function accepting two int and returning int : int (*arr[5])(int, int)

    puts("Using complicated declaration");
    int (*arr[5])(int, int) = {my_add, my_sub, my_mul, my_quo, my_rem};
    int i;
    int n1 = 17, n2 = 4;
    for(i = 0; i < 5; ++i)
        printf("pfn[%d](%d, %d) = %d\n", i, n1, n2, arr[i](n1, n2));

}