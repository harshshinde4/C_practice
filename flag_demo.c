#include <stdio.h>
#include <stdlib.h>

#define ONLY_FIRST_BIT_ON       1   /* 0000 0000 0000 0000 0000 0000 0000 0001 */
#define ONLY_SECOND_BIT_ON      2   /* 0000 0000 0000 0000 0000 0000 0000 0010 */
#define ONLY_THIRD_BIT_ON       4   /* 0000 0000 0000 0000 0000 0000 0000 0100 */
#define ONLY_FOURTH_BIT_ON      8   /* 0000 0000 0000 0000 0000 0000 0000 1000 */
#define ONLY_FIFTH_BIT_ON       16  /* 0000 0000 0000 0000 0000 0000 0001 0000 */
#define ONLY_SIXTH_BIT_ON       32  /* 0000 0000 0000 0000 0000 0000 0010 0000 */

void oring_demo(void);
void detect_flags(int flag);

int main(void)
{
    oring_demo();
    puts("--------------------------------------------------------");

    puts("main: 1st bit is ON ");
    detect_flags(ONLY_FIRST_BIT_ON);
    puts("--------------------------------------------------------");

    puts("main: 2nd bit is ON");
    detect_flags(ONLY_SECOND_BIT_ON);
    puts("--------------------------------------------------------");

    puts("main: 3rd bit is ON");
    detect_flags(ONLY_THIRD_BIT_ON);
    puts("--------------------------------------------------------");

    puts("main: 4th bit is ON");
    detect_flags(ONLY_FOURTH_BIT_ON);
    puts("--------------------------------------------------------");

    puts("main: 5th bit is ON");
    detect_flags(ONLY_FIFTH_BIT_ON);
    puts("--------------------------------------------------------");
    
    puts("main: 6th bit is ON");
    detect_flags(ONLY_SIXTH_BIT_ON);
    puts("--------------------------------------------------------");

    puts("main: 1st and 6th are ON");
    detect_flags(ONLY_FIRST_BIT_ON | ONLY_SIXTH_BIT_ON);
    puts("--------------------------------------------------------");

    puts("main: 6th, 1st and 3rd bit are ON ");
    detect_flags(ONLY_SIXTH_BIT_ON | ONLY_FIRST_BIT_ON | ONLY_THIRD_BIT_ON);
    puts("--------------------------------------------------------");

    puts("MAIN: NO bits are ON");
    detect_flags(0);
    puts("--------------------------------------------------------");

    puts("main: 1st, 2nd, 3rd, 4th, 5th, 6th bits are ON");
    detect_flags(ONLY_FIRST_BIT_ON | ONLY_SECOND_BIT_ON | ONLY_THIRD_BIT_ON | 
                    ONLY_FOURTH_BIT_ON | ONLY_FIFTH_BIT_ON | ONLY_SIXTH_BIT_ON);
    puts("--------------------------------------------------------");

    return(0);
}
void oring_demo(void)
{
    int flag = 0;
    flag = ONLY_FIRST_BIT_ON;
    printf("flag = %d\n", flag);

    flag = ONLY_SECOND_BIT_ON;
    printf("flag = %d\n", flag);

    flag = ONLY_THIRD_BIT_ON;
    printf("flag = %d\n", flag);

    flag = ONLY_FOURTH_BIT_ON;
    printf("flag = %d\n", flag);

    flag = ONLY_FIFTH_BIT_ON;
    printf("flag = %d\n", flag);

    flag = ONLY_SIXTH_BIT_ON;
    printf("flag = %d\n", flag);

    flag = ONLY_FIRST_BIT_ON | ONLY_SECOND_BIT_ON;
    printf("flag = %d\n", flag);

    flag = ONLY_FIRST_BIT_ON | ONLY_FOURTH_BIT_ON;
    printf("flag = %d\n", flag);

    flag = ONLY_SECOND_BIT_ON | ONLY_FIFTH_BIT_ON;
    printf("flag = %d\n", flag);

    flag = ONLY_FIFTH_BIT_ON | ONLY_SECOND_BIT_ON | ONLY_THIRD_BIT_ON;
    printf("flag = %d\n", flag);

}

void detect_flags(int flag)
{
    puts("start detecting flags: ");

    if((flag & ONLY_FIRST_BIT_ON) == ONLY_FIRST_BIT_ON)
        puts("\tFirst bit is ON");

    if((flag & ONLY_SECOND_BIT_ON) == ONLY_SECOND_BIT_ON)
        puts("\tSecond bit is ON");

    if((flag & ONLY_THIRD_BIT_ON) == ONLY_THIRD_BIT_ON)
        puts("\tThird bit is ON");

    if((flag & ONLY_FOURTH_BIT_ON) == ONLY_FOURTH_BIT_ON)
        puts("\tFourth bit is ON");
    
    if((flag & ONLY_FIFTH_BIT_ON) == ONLY_FIFTH_BIT_ON)
        puts("\tFiftj bit is ON");
    
    if((flag & ONLY_SIXTH_BIT_ON) == ONLY_SIXTH_BIT_ON)
        puts("\tSixth bit is ON");
    puts("END of FLAGS");
}

/*
0000 = 0
0001 = 1
0010 = 2
0011 = 3

0100 = 4
0101 = 5
0110 = 6
0111 = 7

1000 = 8
1001 = 9
1010 = 10
1011 = 11

1100 = 12
1101 = 13
1110 = 14
1111 = 15

int n = 10;

#define ONLY_1_BIT 1 = 0001
#define ONLY_2_BIT 2 = 0010
#define ONLY_3_BIT 3 = 0100
#define ONLY_4_BIT 4 = 1000

0 & 0 = 0
0 & 1 = 0

1 & 0 = 0 -------IDENTITY LAW
1 & 1 = 1 

1 & x = x -------IDENTITY LAW
0 & x = 0 -------DOMINATION LAW

*/
