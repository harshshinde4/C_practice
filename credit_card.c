#include <stdio.h>
#include <stdlib.h>

struct CC_Date
{
    int month;
    int year;
};

struct credit_card
{
    char* cc_holder_name;
    unsigned long long int cc_number;
    unsigned short cc_cvv;
    struct CC_Date cc_valid_thru;
    struct CC_Date cc_expiry;
};

int main(void)
{
    /* structural initialization syntax */
    struct credit_card my_card1 = {"Harshvardhan Shinde",
                                    1234123412341234,
                                    123,
                                    {12, 2004},
                                    {12, 2009}
                                    };

    /* set all members by assigning operator */

    struct credit_card my_card2;

    my_card2.cc_holder_name = "Harshvardhan Shinde";
    my_card2.cc_number = 1111222233334444;
    my_card2.cc_cvv = 999;
    my_card2.cc_valid_thru.month = 04;
    my_card2.cc_valid_thru.year = 2012;
    my_card2.cc_expiry.month = 04;
    my_card2.cc_expiry.year = 2016;

    printf("Name = %s\n", my_card2.cc_holder_name);
    printf("Card number = %llu\n", my_card2.cc_number);
    printf("card CVV = %hu\n", my_card2.cc_cvv);
    printf("card valid thru month = %d\n", my_card2.cc_valid_thru.month);
    printf("card valid thru year = %d\n", my_card2.cc_valid_thru.year);
    printf("card expiry month = %d\n", my_card2.cc_expiry.month);
    printf("card expiry year = %d\n", my_card2.cc_expiry.year);

    exit(0);
}