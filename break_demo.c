/*
    @author: Harshvardhan
    @goal: printing each elements of array untill any of them is 
            encountered as divisible by 7, then skip that element 
            come out of the loop.
*/

#include <stdio.h>
#include<stdlib.h>

int main(void)
{
    int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = 10;
    int i;

    i = 0;
    while(i < 10)
    {
        if((a[i] % 7) == 0 )
        {
            break;
        }
        printf("a[%d]: %d\n", i, a[i]);
        i = i + 1;
    }
    printf("i = %d\n", i);

    exit(0);
}