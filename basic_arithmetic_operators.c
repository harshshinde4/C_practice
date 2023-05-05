#include <stdio.h>
#include <stdlib.h>

int num1;
int num2;
int sum;
int sub;
int mul;
int quo;
int rem;

int main(void)
{
    printf("Enter value for num1: ");
    scanf("%d", &num1);

    printf("Enter value for num2: ");
    scanf("%d", &num2);

    printf("entered values are: num1=%d\n num2 =%d\n", num1, num2);

    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    quo = num1 / num2;
    rem = num1 % num2;

    printf("\n%d + %d = %d\n", num1, num2, sum);
    printf("%d - %d = %d\n", num1, num2, sub);
    printf("%d * %d = %d\n", num1, num2, mul);
    printf("%d / %d = %d\n", num1, num2, quo);
    printf("%d %% %d = %d\n", num1, num2, rem);

    exit(0);

}