/*
    @author: Harshvardhan
    @Goal: To take input from user and determine whether its 
            positive, negative or zero.
*/

#include <stdio.h>
#include <stdlib.h>

int n;

int main(void)
{
    puts("Start of program");
    printf("Enter value for n: ");
    scanf("%d", &n);

    if (n>0)
    {
        printf("%d is a positive number\n", n);
    }
    else if (n<0)
    {
        printf("%d is a negative number\n", n);
    }
    else if(n==0)
    {
        printf("%d is zero\n", n);
    }

    puts("end of program");
    exit(0);
}