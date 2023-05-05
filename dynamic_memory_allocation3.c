/* 
    allocate array of integers using malloc() function.

    write,
    100 on index 0 element
    200 on index 1 element
    300 on index 2 element 
    400 on index 3 element 
    500 on index 4 element 

    show the array in indexwise fashion on standard output device
    free the array.

*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* p_arr = 0; /*  p_arr is a pointer to integer But we are NOT 
                        going to store the address of isolated integer in it.
                        WE are going to store the address of first integer 
                        of an array in it.
                        therefore, though this is a pointer to integer,
                        it work as pointer to array for us!
                    */

    int size_arr = 5;
    int i;
    /*  The following line will allocate 20 bytes of contiguous memory
        in the heap section of the process and return the address of 
        the first byte (which is address of first byte of first integer
        in the array i. e. base address of the array).
    */
    p_arr = malloc(size_arr * sizeof(int));
    if(p_arr == 0)
    {
        puts("Memory allocation failed");
        exit(-1);
    }

    /*  at this point we are sure that malloc() has succeded
        in allocationg memory to array.
        and the p_arr containes the base address of array.

        p_arr + i = address of element at index i in array
        *(p_arr + i) can be used to read / write element at index i in array.

        it is our (programmer's) responsibility to make sure that tyhe value 
        of 'i' remains between 0 to size_arr - 1 because, 
        that is the valid index range of array of any given size!
    */

    for(i = 0; i < size_arr; ++i)
        *(p_arr + i) = (i+1) * 200;

    for(i = 0; i < size_arr; ++i)
        printf("*(p_arr + %d) = %d\n", i , *(p_arr + i));

    free(p_arr);
    p_arr = 0;

    exit(0);

}