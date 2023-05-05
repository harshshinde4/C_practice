#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct Date 
{
    int day;
    int month;
    int year;
};

/*  The first formal parameter is an 'in' parameter */
void create_date(struct Date* p_date, int init_day, int init_month, int init_year);

int main(void)
{
    struct Date cpa_birth_date;
    struct Date* p_my_birth_date = 0;
    struct Date* p_test_date = 0;

    create_date(&cpa_birth_date, 1, 12, 2009);
    printf("CPA Birthadate: %d-%d-%d\n", cpa_birth_date.day, 
            cpa_birth_date.month, cpa_birth_date.year);
    
    p_my_birth_date = malloc(sizeof(struct Date));
    assert(p_my_birth_date != 0);
    
    create_date(p_my_birth_date, 04, 01, 1999);
    printf("My Birthdate : %d-%d-%d\n", p_my_birth_date->day, 
            p_my_birth_date->month, p_my_birth_date->year);

    free(p_my_birth_date);
    p_my_birth_date = 0;

    /*  WRONG */
    /*  create_date(p_test_date, 1, 2, 1998);
        
        The above line will fail because p_test_date does not contain 
        a VALID ADDRESS 
    */

    return(0);
}

void create_date(struct Date* p_date, int init_day, int init_month, int init_year)
{
    p_date -> day = init_day;
    p_date -> month = init_month;
    p_date -> year = init_year;
}