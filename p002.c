/* 
Goal : To demonstrate paramenter as return value technique for
        built in data types, arrays and structures
*/

#include <stdio.h>
#include <stdlib.h>

struct A 
{
    int a;
    char b;
    float c;
};

void input_integer(int* ptr_to_int);
void input_double(double* ptr_to_double);
void input_array_of_integers(int* p_arr, int size);
void input_structure_A(struct A* pA);

int main(void)
{
    int num = 0;
    double d_num = 0.0;
    int arr[5] = {0,0,0,0,0};
    struct A inA = {0,'\0',0.0f};
    int i;

    puts("Displaying integer before input function");
    printf("num = %d\n", num);
    puts("-----------------------------------------");
    
    puts(" ");
    puts("Displayiong double before input function: ");
    printf("d_num = %llf\n", d_num);
    puts("-------------------------------------------");

    puts(" ");
    puts("Showing array before input function: ");
    for(i = 0; i<5; ++i)
        printf("arr[%d]: %d\n", i, arr[i]);
    puts("--------------------------------------------");

    puts(" ");
    puts("Displaying structure before input function: ");
    printf("inA.a = %d, inA.b = %c, inA.c = %f\n", inA.a, inA.b, inA.c);
    puts("---------------------------------------------");

    input_integer(&num);
    input_double(&d_num);
    input_array_of_integers(arr, 5);
    input_structure_A(&inA);

    puts("-----------------------------------------------");
    puts(" ");
    puts("Displaying integer after input function: ");
    printf("num = %d\n", num);
    puts("-----------------------------------------------");
    puts(" ");
    puts("Displaying double after input function: ");
    printf("d_num = %llf\n", d_num);
    puts("-----------------------------------------------");
    puts(" ");
    puts("Showing array after input function: ");
    for(i = 0; i<5; ++i)
        printf("arr[%d] = %d\n", i, arr[i]);
    puts("-----------------------------------------------");
    puts(" ");
    puts("Displaying structure after input function: ");
    printf("inA.a = %d, inA.b = %c, inA.c = %f\n", inA.a, inA.b, inA.c);

    puts("-----------------------------------------------");
    exit(0);    
}

void input_integer(int* ptr_to_int)
{
    printf("INPUTS: ");
    printf("\nEnter an integer: ");
    scanf("%d", ptr_to_int);
}

void input_double(double* ptr_to_double)
{
    *ptr_to_double = 15698.143685764;
}

void input_array_of_integers(int* p_arr, int size)
{
    int i;
    for(i = 0; i < size; ++i)
    {
        printf("Enter value for element at index %d: ", i);
        scanf("%d", p_arr + i);
    }
}

void input_structure_A(struct A* pA)
{
    pA->a = 700;
    pA->b = 'C';
    pA->c = 3.14;
}
