#include <stdio.h>
#include <stdlib.h>

unsigned char c;
unsigned char cc;
unsigned char* p;

int main (void)
{
    /*printf() addr of c, addr of cc addr of p*/
    p = &c;
    /*printf() addr in p*/
    *p = 210;
    printf("c = %hhu\n", c);
    cc = *p;
    printf("cc = %hhu\n", cc);
    /*printf() addr of p */
}