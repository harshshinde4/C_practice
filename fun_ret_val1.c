#include <stdio.h>
#include <stdlib.h>

int my_fun(void);   /* function declaration */
int test_fun(void); /* function declaration */

int main(void)
{
    int n;
    int m;
    puts("strat program");
    n = my_fun();
    printf("main: n = %d\n", n);
    m = test_fun();
    printf("m = %d\n", m);
    puts("end program");
    exit(0);
}

int my_fun(void)
{
    return 10;
    /* if return value is int then 
        return <integer expression>
    */ 
}

int test_fun(void)
{

}

/*  T my_fun(void)
    {
        return <expression of type T>
    }
*/