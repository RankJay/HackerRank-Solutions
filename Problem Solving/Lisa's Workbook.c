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
    int n,m,i,j,k,n1,temp=1,count=0,t;
    scanf("%d", &n);
    scanf("%d", &m);
    int ar1[n];
    for(j=0;j<n;j++)
    {
        scanf("%d", &ar1[j]);
    }
    for(i=0;i<n;i++)
    {
    t=0;
    for(j=1;j<=ar1[i];j++)
    {
        
        t=t+1;
        if(t>m)
        {
            temp=temp+1;
            t=1;
        }
        if(temp==j)
        {
          count=count+1;
        }
        //printf("%d ", temp);
        //printf("%d\n", j);
        //printf("%d\n", t);
    }
    //printf("\n");
    temp=temp+1;   
    }
   printf("%d", count);
}
