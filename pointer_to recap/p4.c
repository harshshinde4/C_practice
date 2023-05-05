#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//  Declare a function accepting void
//  returning pointer to array of pointer to function
//      accepting two int and returning int

//  int (*(*p)[5])(int, int)f(void)

int my_add(int, int);
int my_sub(int, int);
int my_mul(int, int);
int my_quo(int, int);
int my_rem(int, int);
int (*(*get_function_ptr_arr(void))[5])(int, int);

int main(void)
{
    // p should be pointed to array 5 of pointer
    // function accepting two ints returning int

    int (*(*p)[5])(int, int);
    int i;
    int ret;
    int n1 = 17, n2 = 4;
    p = get_function_ptr_arr();
    for(i = 0; i < 5; ++i)
    {
        ret = (*p)[i](n1, n2);
        printf("(*p)[%d](%d, %d) = %d\n", i, n1, n2, ret);
    }

    return(0);
}

int (*(*get_function_ptr_arr(void))[5])(int, int)
{
    static int (*arr[5])(int, int) = {my_add, my_sub, my_mul, my_quo, my_rem};
    return(&arr);
}

int my_add(int a, int b)
{
    return (a+b); 
} 

int my_sub(int a, int b)
{
    return (a-b); 
}

int my_mul(int a, int b)
{
    return (a*b); 
}

int my_quo(int a , int b)
{
    assert(b != 0); 
    return (a/b); 
}

int my_rem(int a, int b)
{
    return (a%b); 
}


/*

get_function_ptr_arr is a function :
    get_function_ptr_arr()

get_function_ptr_arr is a function accepting void :
     get_function_ptr_arr(void)


get_function_ptr_arr is a function accepting void returning pointer :
    *get_funtion_ptr_arr(void)

get_function_ptr_arr is a function accepting void returning pointer to array 5 of :
    (*get_function_ptr_arr(void))[5]

get_function_ptr_arr is a function accepting void returns pointer to array 5 of pointer to :
    *(*get_function_ptr_arr(void))[5]

get_function_ptr_arr is a function accepting void returns pointer to array 5 of pointer to function :
    (*(*get_function_ptr_arr(void))[5])()

get_function_ptr_arr is a function accepting void returns pointer to array 5 of pointer to function accepting two int returning int:
    int (*(*get_function_ptr_arr(void))[5])(void)

arr[i] = *(arr + i)
(*p)[i]
*((*p) + i)

*/