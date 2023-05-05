#include <stdio.h>
#include <stdlib.h>

int cal_sum(int* ptr_arr, int size);

int main(void)
{
    int arr[10];
    int i;
    for(i = 0; i < 10; ++i)
    {
        printf("enter an array element at index %d\n", i);
        scanf("%d", &arr[i]);
    }
    int summation;
    summation = 0;
    summation = cal_sum(&arr[0], 10);
    printf("Summation of all the array elements is %d\n", summation);

    return(0);
}

int cal_sum(int* ptr_arr, int size)
{
    int j = 0;
    int sum = 0;
    for(j=0; j < size; ++j)
        sum = sum + *(ptr_arr + j);

    return(sum);
}