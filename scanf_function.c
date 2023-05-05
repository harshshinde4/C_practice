#include <stdio.h>

int num;
int main(void)
{
    printf("enter an integer: ");
    scanf("%d", &num);
    printf("entered integer is num = %d", num);
    exit(0);
}