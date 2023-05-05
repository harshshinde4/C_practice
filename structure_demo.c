#include <stdio.h>
#include <stdlib.h>

/* 
Structure definition - 
        Structure definition does not lead to memory allocation.
        Instead compiler learns about the names and the types of 
        the member of structrure.
For experts- 
        compiler computes the byte offsets of all members
        of structures w.r.t. to the base address.
*/

struct Date
{
    int day;
    int month;
    int year;
};

int main(void)
{
    //define an instance of struct Date
    struct Date my_birth_date;

    printf("sizeof(struct Date) = %llu\n", sizeof(struct Date));

    /*set the values of members of my_birth_day */
    my_birth_date.day = 04;
    my_birth_date.month = 01;
    my_birth_date.year = 1999;

    printf("%d - %d - %d\n", my_birth_date.day, my_birth_date.month, my_birth_date.year);

    exit(0);
}