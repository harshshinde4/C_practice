#include <stdio.h>
#include <stdlib.h>

void test(void);

int main(void)
{
    int i;
    for(i = 0; i < 5; ++i)
        test();
    exit(0);
}

void test(void)
{
    static int n = 1;
    int i = 1;
    int cnt;
    cnt = 0;
    n = 1;
    while(cnt < 10)
    {
        i = i + 1;
        n = n + 1;
        cnt = cnt + 1;
    }

    printf("Good- bye values : i = %d, n = %d, cnt = %d\n", i, n, cnt);
}
