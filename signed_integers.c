/*
    @author: Harshvardhan
    @goal: To create all possible integers and 
            display them using print() algorithm 
            
*/

int printf(char*, ...);
void exit(int);

char c1 = 'A';
char c2 = 98;
short int s_num = -45;
int i_num = -7465;
long int l_num = -764454;
long long int ll_num = -47576598475;

int main(void)
{
    printf("c1 as integer = %hhd\n", c1);
    printf("c1 as character = %c\n\n", c1);

    printf("c2 as integer = %hhd\n", c2);
    printf("c2 as  character = %c\n", c2);

    puts("--------------------------------------------------");

    //decimal number system is used
    printf("short int = %hd\n", s_num);
    printf("int = %d\n", i_num);
    printf("long int = %ld\n", l_num);
    printf("long long int = %lld\n", ll_num);

    exit(0);

}
