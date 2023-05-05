/*
    @author: Harshvardhan
    @goal: To implement float and double
*/

#include <stdio.h>
#include <stdlib.h>

int n = 10;
float x = 1.1;
double g = 0.3145134514;
double y = 2.23434234234324334;

int main(void)
{
    printf("x = %f \n", x);
    printf("n = %f\n", n);
    printf("y = %lf\n", y);
    printf("g = %lf\n", g);
    printf("y = %.3lf\n", y);
    printf("g = %.8lf\n", g);
    printf("y = %.12lf\n", y);

    exit(0);
}