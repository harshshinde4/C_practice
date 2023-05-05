/* 
Note: 
ternary operator is another way of writing if-else 
If the 'if block' and the 'else block' is one-statement long 
and if both the blocks share common LHS 
then we should use ternary operator 
*/

#include <stdio.h>
#include<stdlib.h>

int main(void)
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("\nafter input from keyboard, n = %d\n", n);
    n = (n > 0) ? (100) : (200);
    printf("\nafter ternary operator n = %d\n", n);

    exit(0);
}


//---------------------------------------------------

/* 
General Syntax of Ternary Operator 

LHS = ((COND) ? (RHS1) : (RHS2)); 

LHS = (COND) ? (RHS1) : (RHS2); 

IS EQUIVALENT TO THE FOLLOWING 

if(COND)
{
    LHS = RHS1; 
}
else 
{
    LHS = RHS2; 
}

Operator: 

?:

(COND) ? (RHS1) : (RHS2); 

LHS = ((COND) ? (RHS1) : (RHS2)); 

10 + 
*/ 
