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
    int n,m,i,j,k=0,t=0;
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &m);
    int brr[m];
    for(j=0;j<m;j++)
    {
        scanf("%d", &brr[j]);
    }
    
    int pri[m];
    for(j=0;j<m;j++)
    {
     pri[j]=0;
    }

    while(k<m)
    {

        if(arr[t]!=brr[k])
        {
            pri[k]=brr[k];
            k=k+1;
            t=t;
        }
        else
        {
        k=k+1;
        t=t+1;
        }
    }
    for(j=0;j<m;j++)
    {
    for(k=0;k<m;k++)
    {
    if(j!=k)
    {
    if(pri[j]==pri[k])
    {
        pri[k]=0;
    }
    }
    }
    }
    for(j=0;j<m;j++)
    {
        if(pri[j]!=0)
        {
        printf("%d ", pri[j]);
        }
    }
}
