#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,i,j,k,count=0;
    scanf("%d", &n);
    char ar1[n];
        scanf("%s", ar1);
    
    
    for(j=0;j<n;j++)
    {
     if(ar1[j]=='0' && ar1[j+1]=='1' && ar1[j+2]=='0')
     {
       count=count+1;
       j=j+2;
     }
    }
    printf("%d", count);
    /*for(i=0;i<n;i++)
    {
        printf("%c\n", ar1[i]);
    }*/
}
