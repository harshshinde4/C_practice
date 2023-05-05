#include <stdio.h>
#include <stdlib.h>

void my_fun(void); /* Declaration */

int main(void)
{
    puts("Start of program");
    my_fun();
    puts("end of program");
    exit(0);
}

void my_fun(void)
{
    puts("I am in my_fun ");
    return;
}