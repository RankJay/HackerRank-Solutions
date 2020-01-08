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
    int n,t,i,j,k,temp,n1,s,e;
    scanf("%d", &n);
    scanf("%d", &t);
    //printf("%d", n);
    //printf("%d", t);
    int ar1[n];
    for(i=0;i<n;i++)
    {
      scanf("%d", &ar1[i]);  
    }
    int ar2[t];
    for(j=0;j<t;j++)
    {
     temp=10000;
     scanf("%d", &s);
     scanf("%d", &e); 
     for(k=s;k<=e;k++)
     {
         if(temp>ar1[k])
         {
             temp=ar1[k];
         }
     }
    ar2[j]=temp;
    }
    
    for(j=0;j<t;j++)
    {
        printf("%d\n", ar2[j]);
    }
}
