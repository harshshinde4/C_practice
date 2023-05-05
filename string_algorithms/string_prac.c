#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char* allocate_string(long long size);
int strcpy(char* p_dest, const char* p_src);
long long int strlen(const char* p);
int strcat(const char* p_str1, const char* p_str2, char** pp_str, long long int* p_size);

//  reverse the chars from i to j
int make_string_range_reverse(char* p_str, long long int len, long long int i, long long int j);



char* allocate_string(long long int size)
{
    assert(size > 0);
    return((char*)calloc(1, size));
}

int strcpy(char* p_dest, constchar* p_src)
{
    /*  Assumption: p_dest contains a valid address of array whose 
            length is atleast as long as len(p_src+1)  */

    long long int i;

    for(i = 0; *(p_src + i) != '\0'; ++i)
        p_dest[i] = p_src[i];

    p_dest[i] = '\0';

    return(1);
}

long long int strlen(const char* p)
{
    long long int i = 0;

    while(*(p + i) != '\0')
        i = i + 1;

    return(i);
}

int strcat(const char* p1, const char* p2, char** pp_str, long long int* p_size);
{
    long long int len1, len2, len_total;
    int ret;
    char* p_cat = NULL;

    len1 = strlen(p1);
    len2 = strlen(p2);
    len_total = len1 + len2 + 1;

    p_cat = (char*)calloc(1, len_total);
    assert(p_cat != NULL);

    ret = strcpy(p_cat, p1);
    assert(ret);
    ret = strcpy(p_cat + len1, p2);
    assert(ret);

    *(p_cat + len_total - 1) = '\0';

    *PP = p_cat;
    *p_size = len_total - 1;

    return(1);
}

int make_string_range_reverse(char* p_str, long long int len, long long int i, long long int j)
{
    long long int mid;
    long long int cnt;
    char tmp;

    assert(0 <= i && i < len && 0 <= j && j < len && i < j);
    mid = (j - i + 1)/ 2;
    for(cnt = 0; cnt < mid; ++cnt)
    {
        tmp = p_str[i + cnt];
        p_str[i + cnt] = p_str[j - cnt];
        p_str[j - cnt] = tmp;
    }
    return (1);
}