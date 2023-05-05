/*
    @goal: print all elements of array a except those which 
            are divisible by 7
*/

#include <stdio.h>
#include<conio.h>

int main(void)
{
    int a[10] = {3, 5, 7, 11, 21, 17, 19, 35, 2, 10};
    int i;
    int n = 10;

    puts("using while loop\n");
    i = 0;
    while(i <= n-1)
    {
        if ((a[i] % 7) == 0)
        {
            i = i + 1;
            continue;
        }
        printf("a[%d]: %d\n", i, a[i]);
        i = i + 1;
    }

    
    puts("--------------------------------------");
    
    puts("using for loop\n");
    for(i = 0; i<n; i = i+1)
    {
        if((a[i] % 7) == 0)
        {
            continue;
        }

        printf("a[%d] = %d\n", i, a[i]);
    }

    exit(0);
}