#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char msg[] = "Hello";                       /*Literal String */
    char my_name[] = "Harshvardhan";            /*Literal string */
    char class_title[] = "Masterclass in C";    /*Literal string */

    char* s = "World";
    char* surname = "Shinde";
    char* course_title = "CPA-102";

    printf("msg = %s\n", msg);
    msg[0] = 'h';
    printf("msg = %s\n", msg);

    printf("surname = %s\n", surname);
    surname[0] = 's';
    printf("surname = %s\n", surname);

    exit(0);
}