/* 
    @author: Harshvardhan
    @goal: print Hello 5 times with while loop
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    i = 1;
    while(i<6)
    {
        printf("\nHello %d\n", i);
        i = i + 1;
    }
    exit(0);
}

/*
    TRACK -> i = 1
            CHECK : i < 6 : TRUE
                    EXECUTE BODY
                        EXECUTE (printf("Hello 1"))
                        EXECUTE (i = i + 1)

    TRACK -> i = 2
            CHECK : i < 6 : TRUE
                    EXECUTE BODY
                        EXECUTE (printf("Hello 2"))
                        EXECUTE ( i = i + 1)

    TRACK -> i = 3
            CHECK i < 6 : TRUE
                    EXECUTE BODY
                        EXECUTE (printf("Hello 3"))
                        EXECUTE (i = i + 1)

    TRACK -> i = 4
            CHECK i < 6 : TRUE
                    EXECUTE BODY
                        EXECUTE (printf("Hello 4"))
                        EXECUTE (i = i + 1)

    TRACK -> i = 5
            CHECK i < 6 : TRUE
                    EXECUTE BODY
                        EXECUTE (printf("Hello 5"))
                        EXECUTE (i = i + 1)

    TRACK -> i = 6
            CHECK I < 6 : FALSE
                    COME OUT OF THE LOOP

    OUTPUT :
    HELLO 1
    HELLO 2
    HELLO 3
    HELLO 4
    HELLO 5
    //-------------------------------------------------------