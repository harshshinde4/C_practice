#include <stdio.h>
#include <stdlib.h>

int arr[5] = {100, 200, 300, 400, 500};
int* p;
int i;
int tmp;

int main (void)
{
    puts(" ");
    puts("Printing the addresses of array elements arr: ");
    puts(" ");
    for(i=0; i<5; ++i)
        printf("address of element at index %d = %llu\n", i, (unsigned long long int)&arr[i]);

    /* assign address of element at index 0 to p */

    p = &arr[0];

    puts(" ");
    puts("printing the addresses: p+0, p+1, p+2, p+3, p+4: ");
    for(i=0; i<5; ++i)
        printf("p + %d = %llu\n", i, (unsigned long long int)(p+i));

    puts(" ");
    puts("Accessing array elements by dereferencing: p+0, p+1, p+2, p+3, p+4: ");
    for(i=0; i<5; ++i)
    {
        tmp = *(p+i); 
        printf("elemet at index %d = %d\n", i, tmp);
    }

    puts(" ");
    puts("Modifying the array elements by dereferencing: p+0, p+1, p+2, p+3, p+4: ");
    for(i=0; i<5; ++i)
    {
        *(p+i) = (i+1) * 10000;
    }

    puts(" ");
    puts("Accessing the array elements by dereferencing: p+0, p+1, p+2, p+3, p+4: ");
    for(i=0; i<5; ++i)
    {
        tmp = *(p+i);
        printf("element at index %d = %d\n", i , tmp);
    }

    exit(0);


}