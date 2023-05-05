#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char* str = "abc-pqr-jkl-lmn-xyz";
    char* sep = "-";
    unsigned int i,j;
    i = 0;
    j = 0;
    while(str[i] != '\0')
    {
        if(str[i] == sep[j])
        {
            puts(" ");
            i = i + 1;
            continue;
        }

       // if(str[i] == "\0")
         //   break;

        printf("%c", str[i]);
        
        i += 1;
    }

    return(0);
}