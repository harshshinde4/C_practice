#include <stdio.h>
#include <stdlib.h>

struct A
{
    int a;
    char b;
    int arr[5];
};

int main(void)
{
    struct A inA;
    int i;
    inA.a = 100;
    inA.b = 'A';
    inA.arr[0] = 1000000;
    inA.arr[1] = 2000000;
    inA.arr[2] = 4000000;
    inA.arr[3] = 8000000;
    inA.arr[4] = 15000000;

    /* inA.arr_name[index] == 
        
        instance of structure + offset(arr_name) + sizeof(data type) * index
    */

    printf("inA.a = %d\n", inA.a);
    printf("inA.b = %c\n", inA.b);
    for(i=0; i<5; ++i)
        printf("inA.a[%d] = %d\n", i, inA.arr[i]);

    exit(0);
}