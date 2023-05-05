/* 
    s1: accept array size from user.
    s2: validate the size.
    s3: allocate array of integer of the user entered 'array size'
    s4: Take every value of array from end user (i.e. use scanf() 
        for all array elements).
    s5: Display the array

    Beginners: 

    s6: write a logic to calculate the sum of all elements in array.
        Display the array.

    s7: Free the array and exit.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size_of_array = 0;
    int* p_arr = 0;
    int i;
    int sum;

    printf("Enter the size of array: ");
    scanf("%d", &size_of_array);

    if(size_of_array <= 0)
    {
        puts("Invalid array size, Exiting...");
        exit(-1);
    }

    p_arr = malloc(size_of_array * sizeof(int));
    if(p_arr == 0)
    {
        puts("Memory allocation failed");
        exit(-1);
    }

    for(i = 0; i < size_of_array; ++i)
    {
        printf("Enter the value of element at index %d: ", i);
        scanf("%d", p_arr + i);
    }

    sum = 0;
    for(i = 0; i < size_of_array; ++i)
        sum = sum + p_arr[i];

    printf("Summation of all elements in array = %d\n", sum);

    free(p_arr);
    p_arr = 0;

    exit(0);

}