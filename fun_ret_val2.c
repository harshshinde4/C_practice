#include <stdio.h>
#include <stdlib.h>

int my_fun1(int, int);
void my_fun2(int, int);

int main(void)
{
    int p = 100;
    int q = 200;
    int return_val;
    return_val = my_fun1(p, q);
    my_fun2(p, q);
    exit(0);
}

int my_fun1(int n1, int n2)
{
    int sum;
    sum = n1 + n2;
    return (sum);
}

void my_fun2(int n1, int n2)
{
    int sum;
    sum = n1 + n2;
    printf("sum = %d\n", sum);
}