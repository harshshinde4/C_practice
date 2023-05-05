#include<stdio.h>
#include<stdlib.h>

int a;
int b;

int main(void)
{
    printf("Enter a number 1 or 0: ");
    scanf("%d", &a);

    b = !a;

    printf("a = %d, b = %d\n", a, b);

    exit(0);

}