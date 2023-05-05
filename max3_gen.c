#include <stdio.h>
#include <stdlib.h>

/* type declaration of function */

int max3(int, int, int);

int main(void)
{
    int maxx;

    int p=100;
    int q=200;
    int r=300;

/*----------------------*/
    int x=400;
    int y=600;
    int z=500;

/*----------------------*/
    int m=136584;
    int n=7987;
    int u=635846;
/*-----------------------*/

    maxx = max3(p, q, r);
    printf("max of (%d,%d,%d) = %d\n", p, q, r, maxx);

    maxx = max3(x, y, z);
    printf("max of (%d,%d,%d) = %d\n", x, y, z, maxx);

    maxx = max3(m, n, u);
    printf("max of (%d, %d, %d) = %d\n", m, n, u, maxx);

    exit(0);
}

/* definition of algorithm */
/* function defenition */

int max3(int num1, int num2, int num3) // Header of function def.

// body of func def

{
    int max;

    if(num1 > num2)
        max = num1;
    else    
        max = num2;

    if(num3 > max)
        max = num3;

    return (max);
}
/*  int max3(int num1, int num2, int num3)
     |
    int     -> Return Value type
    max3    -> Name of function

*/