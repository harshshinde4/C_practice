/* 
    @author: Harshvardhan
    @goal: To print even and odd numbers from user input

*/

#include <stdio.h>
#include <stdlib.h>

int n;
int rem;

int main(void)
{
    puts("Start of program");
    printf("Enter value of n: ");
    scanf("%d", &n);
    rem = n%2;
    if (n%2 == 0)
    {
        printf("%d is an even number\n", n);
    }
    else
    {
        printf("%d is an odd number\n", n);
    }
    puts("End of program");

    exit(0);
}