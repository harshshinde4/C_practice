#include <stdio.h>
#include <stdlib.h>

struct T
{
    int a;
    char c;
    float f;
};

void show(struct T* p_in_T);

int main(void)
{
    struct T inT;
    inT.a = 100;
    inT.c = 'A';
    inT.f = 3.14;
    show(&inT);

    return(0);
}

void show(struct T* p_in_T)
{
    printf("instance a = %d\n", p_in_T->a);
    printf("instance c = %c\n", p_in_T->c);
    printf("instance f = %.2f\n", p_in_T->f);
}