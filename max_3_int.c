#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n1,n2,n3;
    int max;

    printf("Enter n1: ");
    scanf("%d", &n1);

    printf("Enter n2: ");
    scanf("%d", &n2);

    printf("Enter n3: ");
    scanf("%d", &n3);

    if(n1 > n2)
    {
        max = n1;
    }
    else
    {
        max = n2;
    }

    if(n3 > max)
    {
        max = n3;
    }

    printf("Maximum of (%d, %d, %d) is %d\n", n1, n2, n3, max);

    exit(0);
}