#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) 
{
  //Write your code here.
    int max1=0, max2=0, max3 = 0;
    int i,j=0;
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            if(max1 < (i & j) && (i & j) < k)
                max1 = i & j;
            if(max2 < (i | j) && (i | j) < k)
                max2 = i | j;
            if(max3 < (i ^ j) && (i ^ j) < k)
                max3 = i ^ j;
        }
    }
    printf("%d\n%d\n%d\n", max1, max2, max3);
}

int main() 
{
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
