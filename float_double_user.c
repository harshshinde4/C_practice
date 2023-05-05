#include <stdio.h>
#include <stdlib.h>

float x;
double y;

int main(void)
{
    printf("enter fractional value for single precision number x: ");
    scanf("%f", &x);

    printf("enter a fractional value for double precision number y: ");
    scanf("%lf", &y);

    printf("x = %.6f, y = %.9lf\n", x, y);

    exit(0);
}

