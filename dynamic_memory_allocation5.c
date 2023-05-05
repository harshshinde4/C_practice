/* 
    s1: Define information structure A with following members-
        n of the type int.
        s of thye type short.
        m of the type long.

    s2: Allocate structure instance dynamically using malloc().
    s3: write 100 on n, 200 on s, 300 on m.
    s4: Display n, s, m members of dynamically allocated instance 
        of struct A.
    s5: Free dynamically allocated instance of struct A.
*/


#include <stdio.h>
#include <stdlib.h>

struct A 
{
    int n;
    short s;
    long m;
};

int main(void)
{
    struct A* pA = 0;

    pA = malloc(sizeof(struct A));
    if(pA == 0)
    {
        puts("Memory allocation failed");
        exit(-1);
    }

    pA -> n = 100;
    pA -> s = 200;
    pA -> m = 300;

    printf("pA -> n = %d, pA -> s = %hd, pA -> m =  %ld\n", pA -> n, pA -> s, pA -> m);
    
    exit(0);
}