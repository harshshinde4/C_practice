#include <stdio.h>
#include <stdlib.h>

double arr[5] = {23465.1351, 1234.213, 798646.4987, 4561.49847, 4687.156};
double* p;
double tmp;
int i;

int main(void)
{
    puts(" ");
    puts("printing the address of all array elements: arr: ");
    for(i=0; i<5; ++i)
    {
        printf("address of element at index %d = %llu\n", 
                i, (unsigned long long int)&arr[i]);
    }

    /* Assigning address of index 0 to p */

    p = &arr[0];

    puts(" ");
    puts("printing the addres of all elements as : p+0, p+1, p+2, p+3, p+4: ");
    for(i=0; i<5; ++i)
    {
        printf("address at index %d : p + %d = %llu\n", 
                i, i, (unsigned long long int)(p+i));
    }

    puts(" ");
    puts("Accessing the elements by dereferencing: p+0, p+1, p+2, p+3, p+4: ");
    for(i=0; i<5; ++i)
    {
        tmp = *(p+i);
        printf("element at index %d = %lf\n", i, tmp);
    }

    puts(" ");
    puts("Modifying the array elements by dereferencing: p+0, p+1, p+2, p+3, p+4: ");
    for(i=0; i<5; ++i)
    {
        *(p+i) = (i + 1) * 2000.2000;
    }

    puts(" ");
    puts("Accessing the elements of modified array by dereferencing: p+0, p+1, p+2, p+3, p+4: ");
    for(i=0; i<5; ++i)
    {
        tmp = *(p+i);
        printf("element at index %d = %lf\n", i, tmp);
    }

    exit(0);
}