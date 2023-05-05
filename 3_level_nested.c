#include <stdio.h>
#include<stdlib.h>

int main(void)
{
    int snail;
    int tortoise;
    int rabbit;

    for(snail = 0; snail < 3; snail = snail+1)
    {
        printf("snail step = %d\n", snail);
        
        for(tortoise = 0; tortoise < 4; tortoise = tortoise + 1)
        {
            printf("\ttortoise step = %d\n", tortoise);
            
            for(rabbit = 0; rabbit < 5; rabbit = rabbit + 1)
            {
                printf("\t\trabbit step = %d\n", rabbit);
                
            }
            puts(" ");
        }
        
        
    }
    exit(0);
}