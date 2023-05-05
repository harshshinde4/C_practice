#include <stdio.h>
#include <stdlib.h>

int n1;
int n2;
int res;

// comparison = tar-tam-bhav = tulana

int main(void)
{
    printf("enter value for num1: ");
    scanf("%d", &n1);

    printf("enter value for num2: ");
    scanf("%d", &n2);

    res = (n1 > n2);
    printf("num1 > num2 = %d\n", res);

    res = (n1 >= n2);
    printf("num1 >= num2 = %d\n", res);

    res = (n1 < n2);
    printf("num1 < num2 = %d\n", res);

    res = (n1 <= n2);
    printf("num1 <= num2 = %d\n", res);

    res = (n1 == n2);
    printf("num1 == num2 = %d\n", res);

    res = (n1 != n2);
    printf("num1 != num2 = %d\n", res);

    exit(0);
    
}