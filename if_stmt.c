#include<stdio.h>
#include<stdlib.h>

int n;

int main(void)
{
    puts("Start of program");
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n > 0)
    {
        puts(" The enterd number is positive.");
    }

    puts("End of program");
    exit(0);
}