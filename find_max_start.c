#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A[] = {100,20,400,23,500,67,-30,1000,-89,247};
    int N = 10;

    int index;
    int curr_max;

    /* step 1 */
    curr_max = A[0];
    index = 1;

    /* step 2 */
    while(index < N)
    {
        if(A[index] > curr_max)
            curr_max = A[index];
        index += 1;
    }

    printf("Maximum in array = %d\n", curr_max);

    exit(0);
}