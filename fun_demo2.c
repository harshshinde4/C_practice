#include <stdio.h>
#include <stdlib.h>

void my_fun(int);       /* Declaration */
void test_fun(float);   /* Declaration */

int main(void)
{
    int m = 200;
    puts("Start of program");
    my_fun(m);
    test_fun(3.14);
    puts("end of program");
    exit(0);
}

void my_fun(int num)
{
    printf("my_fun: Input number is %d\n", num);
    return;
    puts("This will not get printed");
}

void test_fun(float fn)
{
    printf("Inside test_fun: fn = %.2f\n", fn);
}