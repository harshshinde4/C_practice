#include <stdio.h>
#include <stdlib.h>

int n = 0;
int* p; // p is pointer to int

char z = 'A';
char* pc; //pc is pointer to char

unsigned short us = 2578;
unsigned short* ps;

int main(void)
{
    printf("&n = %llu\n", (unsigned long long)&n);
    p = &n;

    printf("BEFORE executing (*p = 150) | address IN p = %llu\n", (unsigned long long)p);
    printf("BEFORE executing (*p = 150) | n = %d\n", n);
    *p = 150;
    printf("AFTER executing (*p = 150) | n = %d\n", n);
    printf("AFTER executing (*p = 150) | Address IN p = %llu\n", (unsigned long long)p);
    exit(0);
    
}