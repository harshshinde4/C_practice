#include <stdio.h>
#include <stdlib.h>

char c_ar [5] = {'A', 'B', 'C','D','E'};
char* p;
char tmp;
int i;

int main(void)
{
    puts("Printing address of all elements of array c_ar: ");
    for(i =0 ; i<5; ++i)
        printf("address of element at %d index of array c_ar = %llu\n", 
                i, (unsigned long long)&c_ar[i]);
    
    puts(" ");
    /* assign address of element at index 0 to p */
    p = &c_ar[0];

    puts("print the addresses: p+0, p+1, p+2, p+3, p+4: ");
    for(i = 0; i<5; ++i)
        printf("p + %d = %llu\n", i, (unsigned long long)(p+i));

    puts(" ");
    puts("accessing array elements by dereferencing: p+0, p+1, p+2, p+3, p+4: ");
    for(i=0; i<5; ++i)
    {
        tmp = *(p+i);  /*tmp = c_ar[i]; */
        printf("Element at index %d = %c\n", i, tmp);
    }

    puts(" ");
    puts("modifying array elements by dereferencing: p+0, p+1, p+2, p+3, p+4: ");
    for(i=0; i<5; ++i)
    {
        *(p+i) = *(p+i) + 32;
    }
    puts(" ");
    puts("Accessing array elements by dereferencing: p+0, p+1, p+2, p+3, p+4: ");
    for(i=0; i<5; ++i)
    {
        tmp = *(p+i);
        printf("element at index %d is %c\n", i, tmp);

    }
    exit(0);
}