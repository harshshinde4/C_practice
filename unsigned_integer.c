/* 
@author : Harshvardhan
@goal : To create all possible unsigned integers 
        and display using printf() algorithm
*/

int printf(char*, ...);
void exit(int);

unsigned char uc = 105;
unsigned short int us_num = 34562;
unsigned int ui_num = 453636;
unsigned long int ul_num = 2763457;
unsigned long long int ull_num = 8565764874;

int main(void)
{
    /*decimal format*/
    printf("\nDecimal: uc = %hhu\n us_num = %hu\n ui_num = %u\n ul_num = %u\n ull_num = %llu\n",
            uc, us_num, ui_num, ul_num, ull_num);
    puts("----------------------------------------------");
    
    /* Octal format*/
    printf("\nOctal: uc = %hho\nus_num = %ho\nui_num = %o\nul_num = %lo\null_num = %llo\n",
            uc, us_num, ui_num, ul_num, ull_num);
    puts("----------------------------------------------");

    /* Hexadecimal format*/
    printf("\nHexadecimal: uc = %hhx\nus_num = %hx\nui_num = %x\nul_num = %lx\null_num = %llx\n",
            uc, us_num, ui_num, ul_num, ull_num);

    exit(0);
}