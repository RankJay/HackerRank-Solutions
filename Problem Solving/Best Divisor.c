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
    int n,i,j=0,k,t,temp,l;
    scanf("%d", &n);
    int ar1[n/2];
    for(k=0;k<n/2;k++)
    {
    ar1[k]=0; 
    }



    for(i=1;i<n;i++)
    {
     if(n%i==0)
     { 
         ar1[j]=i;
         j=j+1;
         temp=j;
     }
    }

    for(k=0;k<n/2;k++)
    {
    if(ar1[k]>=10)
    {
        t=reverse(ar1[k]);
        for(l=0;l<n/2;l++)
        {
          if(t==ar1[l])
          {
            temp=ar1[k];
          }
        }
    }
    }
    scanf("%d", temp);
    return 0;
}
