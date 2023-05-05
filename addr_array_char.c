#include <stdio.h>
#include<stdlib.h>

int main(void)
{
    /*    
    char a[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    char i;
    int n = 8;

    for(i = 0; i < n; i = i+1)
    {
        printf("&a[%c]: %llu\n", i, (unsigned long long int)&a[i]);

    }

    puts("------------------------------------------------------------");
    
    int a1[8] = {3242, 2342, 4366, 5365, 4355, 456, 979, 9789};
    int im;
    int m = 8;

    for(im = 0; im < m; im = im+1)
    {
        printf("&a[%hd]: %llu\n", im, (unsigned long long int)&a1[im]);

    }

    puts("-------------------------------------------------");

    int a2[8] = {32424543, 454352342, 3454366, 5775365, 67874355, 456577, 758979, 9746789};
    int ik;
    int k = 8;

    for(ik = 0; ik < k; ik = ik+1)
    {
        printf("&a[%hhd]: %llu\n", ik, (unsigned long long int)&a2[ik]);

    }
    
    puts("-------------------------------------------------------");
    */
    float ar[8] = {1.345, 2.65, .576, 1.467, 0.774, 0.67, 0.09878, 1.4564};
    int ij;
    int j = 8;

    for(ij = 0; ij < j; ij = ij + 1)
    {
        printf("&a[%f]: %llu\n", ij, (unsigned long long int)&ar[ij]);

    }
    
    puts("-------------------------------------------------------");

    double arr[8] = {2.42454463, 4.54352345642, .345434666, 5.74675365, 0.67874355, 4.56577, 75.8979, 9.746789};
    int il;
    int l = 8;

    for(il = 0; il < l; il = il + 1)
    {
        printf("&a[%.9lf]: %llu\n", il, (unsigned long long int)&arr[il]);

    }
    
    exit(0);
}