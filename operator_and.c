/* @author: Harshvardhan
    @goal: To implement and operator in c */

#include<stdio.h>
#include<stdlib.h>

int m;
int n;
int m_and_n;

int main(void)
{
    m = 0;
    n = 0;
    m_and_n = m && n;
    printf("m = %d, n = %d, m_and_n = %d\n", m, n, m_and_n);

    m = 0;
    n = 1;
    m_and_n = m && n;
    printf("m = %d, n = %d, m_and_n = %d\n", m, n, m_and_n);

    m = 1;
    n = 0;
    m_and_n = m && n;
    printf("m = %d, n = %d, m_and_n = %d\n", m, n, m_and_n);

    m = 1;
    n = 1;
    m_and_n = m && n;
    printf("m = %d, n = %d, m_and_n = %d\n", m, n, m_and_n);

    exit(0);


}