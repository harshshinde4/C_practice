#include <stdio.h>
#include <stdlib.h>

struct Date
{
    int day;
    int month;
    int year;
};

int main(void)
{
    struct Date my_birth_date;

    printf("enter the day: ");
    scanf("%d", &my_birth_date.day);

    printf("enter the month: ");
    scanf("%d", &my_birth_date.month);

    printf("enter the year: ");
    scanf("%d", &my_birth_date.year);

    printf("Day: %d\n", my_birth_date.day);
    printf("Month: %d\n", my_birth_date.month);
    printf("year: %d\n", my_birth_date.year);

    exit(0);
}