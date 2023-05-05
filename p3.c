/*  
    Define and initiate array of 10 integers in main()

    send array and its size to a function named calculate_sum()

    the function should return the summation of all elements in the array.
*/

#include <stdio.h>
#include <stdlib.h>

int calculate_sum(int* ptr_to_first_arr_element, int size);

int main(void)
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int summation;

    summation = 0;
    summation = calculate_sum(&arr[0], 10);
    printf("Summation of array elements = %d\n", summation);

    return(0);
}

int calculate_sum(int* ptr_to_first_arr_element, int size)
{
    int i;
    int sum = 0;
    i = 0;
    while(i < size)
    {
        sum = sum + *(ptr_to_first_arr_element + i);
        i += 1;
    }
    return(sum);
}