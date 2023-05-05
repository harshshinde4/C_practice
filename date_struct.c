#include <stdio.h>
#include <stdlib.h>

struct date
{
    int day;
    int month;
    int year;
};

int main(void)
{
    struct date my_bday;
    my_bday.day = 04;
    my_bday.month = 01;
    my_bday.year = 1999;
    
    printf("sizeof(struct date) = %llu\n", sizeof(struct date));
    printf("%d-%d-%d\n", my_bday.day, my_bday.month, my_bday.year);
    exit(0);
}

