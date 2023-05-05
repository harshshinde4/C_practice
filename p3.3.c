#include <stdio.h>
#include <stdlib.h>

int cal_sum(int (*p)[10], int n);

int main(void)
{
    int arr[10] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
    int s;
    puts("summation of array (experienced)");
    s = cal_sum(&arr, 10);
    printf("s = %d\n", s);
    return(0);
}

int cal_sum(int (*p)[10], int n)
{
    int i;
    int sum;

    sum = 0;
    for(i=0; i<n; ++i)
        sum = sum + (*p)[i];

    return(sum);
}