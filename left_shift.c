#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int k;
    for(k = 1; k <= 32; ++k)
        printf("1 << %u\n", k-1, (1 << (k-1)));

    return(0);
}