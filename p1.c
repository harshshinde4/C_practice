/* Take two local variables in main.
    assign them some value,
    Write a function which will multiply current values 
    in the variables by 10 & store the result in the variables.

*/

#include <stdio.h>
#include <stdlib.h>

void mul_by_10(int* n1, int* n2);

int main(void)
{
    int num1, num2;
    num1 = 124;
    num2 = 456;

    printf("Before call to mul_by_10: num1 = %d, num2 = %d\n", num1, num2);

    mul_by_10(&num1, &num2);

    printf("After call to mul_by_10: num1 = %d, num2 = %d\n", num1, num2);

    return(0);
}

void mul_by_10(int* pn1, int* pn2)
{
    *pn1 = *pn1 * 10;
    *pn2 = *pn2 * 10;

    return;
}