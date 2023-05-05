#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //  1010  0000  1011  0000  1100  1101  0000
    unsigned int num = 0xa0b0c0d0;
    unsigned char x;

    x = (unsigned char)num;

    /*
        RHS type: unsigned int -> 4 bytes
        LHS type: unsigned char -> 1 byte
        LHS type != RHS type;
    */

   printf("x = %hhx", x);
   return(0);
}

/*
    unsigned char u = 1;
    short s_int;
    int i;
    long long int_num;

    lng_num = u;   // 1
    lng_num = s_int;   // 2
    lng_num = i;   // 4
*/

