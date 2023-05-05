/* @author: Harshvardhan
    @goal: To implement OR operator in c */

#include<stdio.h>
#include <stdlib.h>

int m;
int n;
int m_or_n;

int main (void)
{
    m = 0;
    n = 0;
    m_or_n = m || n;
    printf("m = %d, n = %d, m||n = %d\n", m, n, m_or_n);

    m = 0;
    n = 1;
    m_or_n = m || n;
    printf("m = %d, n = %d, m||n = %d\n", m, n, m_or_n);

    m = 1;
    n = 0;
    m_or_n = m || n;
    printf("m = %d, n = %d, m||n = %d\n", m, n, m_or_n);

    m = 1;
    n = 1;
    m_or_n = m || n;
    printf("m = %d, n = %d, m||n = %d\n", m, n, m_or_n);

    exit(0);
}